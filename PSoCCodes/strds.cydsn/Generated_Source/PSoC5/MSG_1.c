/*******************************************************************************
* File Name: MSG_1.c  
* Version 1.90
*
* Description:
*  This file provides the source code to the API for the 8-bit Voltage DAC 
*  (VDAC8) User Module.
*
* Note:
*  Any unusual or non-standard behavior should be noted here. Other-
*  wise, this section should remain blank.
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "MSG_1.h"

#if (CY_PSOC5A)
#include <CyLib.h>
#endif /* CY_PSOC5A */

uint8 MSG_1_initVar = 0u;

#if (CY_PSOC5A)
    static uint8 MSG_1_restoreVal = 0u;
#endif /* CY_PSOC5A */

#if (CY_PSOC5A)
    static MSG_1_backupStruct MSG_1_backup;
#endif /* CY_PSOC5A */


/*******************************************************************************
* Function Name: MSG_1_Init
********************************************************************************
* Summary:
*  Initialize to the schematic state.
* 
* Parameters:
*  void:
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void MSG_1_Init(void) 
{
    MSG_1_CR0 = (MSG_1_MODE_V );

    /* Set default data source */
    #if(MSG_1_DEFAULT_DATA_SRC != 0 )
        MSG_1_CR1 = (MSG_1_DEFAULT_CNTL | MSG_1_DACBUS_ENABLE) ;
    #else
        MSG_1_CR1 = (MSG_1_DEFAULT_CNTL | MSG_1_DACBUS_DISABLE) ;
    #endif /* (MSG_1_DEFAULT_DATA_SRC != 0 ) */

    /* Set default strobe mode */
    #if(MSG_1_DEFAULT_STRB != 0)
        MSG_1_Strobe |= MSG_1_STRB_EN ;
    #endif/* (MSG_1_DEFAULT_STRB != 0) */

    /* Set default range */
    MSG_1_SetRange(MSG_1_DEFAULT_RANGE); 

    /* Set default speed */
    MSG_1_SetSpeed(MSG_1_DEFAULT_SPEED);
}


/*******************************************************************************
* Function Name: MSG_1_Enable
********************************************************************************
* Summary:
*  Enable the VDAC8
* 
* Parameters:
*  void
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void MSG_1_Enable(void) 
{
    MSG_1_PWRMGR |= MSG_1_ACT_PWR_EN;
    MSG_1_STBY_PWRMGR |= MSG_1_STBY_PWR_EN;

    /*This is to restore the value of register CR0 ,
    which is modified  in Stop API , this prevents misbehaviour of VDAC */
    #if (CY_PSOC5A)
        if(MSG_1_restoreVal == 1u) 
        {
             MSG_1_CR0 = MSG_1_backup.data_value;
             MSG_1_restoreVal = 0u;
        }
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: MSG_1_Start
********************************************************************************
*
* Summary:
*  The start function initializes the voltage DAC with the default values, 
*  and sets the power to the given level.  A power level of 0, is the same as
*  executing the stop function.
*
* Parameters:
*  Power: Sets power level between off (0) and (3) high power
*
* Return:
*  void 
*
* Global variables:
*  MSG_1_initVar: Is modified when this function is called for the 
*  first time. Is used to ensure that initialization happens only once.
*
*******************************************************************************/
void MSG_1_Start(void)  
{
    /* Hardware initiazation only needs to occure the first time */
    if(MSG_1_initVar == 0u)
    { 
        MSG_1_Init();
        MSG_1_initVar = 1u;
    }

    /* Enable power to DAC */
    MSG_1_Enable();

    /* Set default value */
    MSG_1_SetValue(MSG_1_DEFAULT_DATA); 
}


/*******************************************************************************
* Function Name: MSG_1_Stop
********************************************************************************
*
* Summary:
*  Powers down DAC to lowest power state.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void MSG_1_Stop(void) 
{
    /* Disble power to DAC */
    MSG_1_PWRMGR &= (uint8)(~MSG_1_ACT_PWR_EN);
    MSG_1_STBY_PWRMGR &= (uint8)(~MSG_1_STBY_PWR_EN);

    /* This is a work around for PSoC5A  ,
    this sets VDAC to current mode with output off */
    #if (CY_PSOC5A)
        MSG_1_backup.data_value = MSG_1_CR0;
        MSG_1_CR0 = MSG_1_CUR_MODE_OUT_OFF;
        MSG_1_restoreVal = 1u;
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: MSG_1_SetSpeed
********************************************************************************
*
* Summary:
*  Set DAC speed
*
* Parameters:
*  power: Sets speed value
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void MSG_1_SetSpeed(uint8 speed) 
{
    /* Clear power mask then write in new value */
    MSG_1_CR0 &= (uint8)(~MSG_1_HS_MASK);
    MSG_1_CR0 |=  (speed & MSG_1_HS_MASK);
}


/*******************************************************************************
* Function Name: MSG_1_SetRange
********************************************************************************
*
* Summary:
*  Set one of three current ranges.
*
* Parameters:
*  Range: Sets one of Three valid ranges.
*
* Return:
*  void 
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void MSG_1_SetRange(uint8 range) 
{
    MSG_1_CR0 &= (uint8)(~MSG_1_RANGE_MASK);      /* Clear existing mode */
    MSG_1_CR0 |= (range & MSG_1_RANGE_MASK);      /*  Set Range  */
    MSG_1_DacTrim();
}


/*******************************************************************************
* Function Name: MSG_1_SetValue
********************************************************************************
*
* Summary:
*  Set 8-bit DAC value
*
* Parameters:  
*  value:  Sets DAC value between 0 and 255.
*
* Return: 
*  void 
*
* Theory: 
*
* Side Effects:
*
*******************************************************************************/
void MSG_1_SetValue(uint8 value) 
{
    #if (CY_PSOC5A)
        uint8 MSG_1_intrStatus = CyEnterCriticalSection();
    #endif /* CY_PSOC5A */

    MSG_1_Data = value;                /*  Set Value  */

    /* PSOC5A requires a double write */
    /* Exit Critical Section */
    #if (CY_PSOC5A)
        MSG_1_Data = value;
        CyExitCriticalSection(MSG_1_intrStatus);
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: MSG_1_DacTrim
********************************************************************************
*
* Summary:
*  Set the trim value for the given range.
*
* Parameters:
*  range:  1V or 4V range.  See constants.
*
* Return:
*  void
*
* Theory: 
*
* Side Effects:
*
*******************************************************************************/
void MSG_1_DacTrim(void) 
{
    uint8 mode;

    mode = (uint8)((MSG_1_CR0 & MSG_1_RANGE_MASK) >> 2) + MSG_1_TRIM_M7_1V_RNG_OFFSET;
    MSG_1_TR = CY_GET_XTND_REG8((uint8 *)(MSG_1_DAC_TRIM_BASE + mode));
}


/* [] END OF FILE */

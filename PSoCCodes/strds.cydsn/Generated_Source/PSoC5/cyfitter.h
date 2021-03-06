#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice.h>
#include <cydevice_trm.h>

/* PINO_PROCESSAMENTO */
#define PINO_PROCESSAMENTO__0__MASK 0x01u
#define PINO_PROCESSAMENTO__0__PC CYREG_PRT0_PC0
#define PINO_PROCESSAMENTO__0__PORT 0u
#define PINO_PROCESSAMENTO__0__SHIFT 0
#define PINO_PROCESSAMENTO__AG CYREG_PRT0_AG
#define PINO_PROCESSAMENTO__AMUX CYREG_PRT0_AMUX
#define PINO_PROCESSAMENTO__BIE CYREG_PRT0_BIE
#define PINO_PROCESSAMENTO__BIT_MASK CYREG_PRT0_BIT_MASK
#define PINO_PROCESSAMENTO__BYP CYREG_PRT0_BYP
#define PINO_PROCESSAMENTO__CTL CYREG_PRT0_CTL
#define PINO_PROCESSAMENTO__DM0 CYREG_PRT0_DM0
#define PINO_PROCESSAMENTO__DM1 CYREG_PRT0_DM1
#define PINO_PROCESSAMENTO__DM2 CYREG_PRT0_DM2
#define PINO_PROCESSAMENTO__DR CYREG_PRT0_DR
#define PINO_PROCESSAMENTO__INP_DIS CYREG_PRT0_INP_DIS
#define PINO_PROCESSAMENTO__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define PINO_PROCESSAMENTO__LCD_EN CYREG_PRT0_LCD_EN
#define PINO_PROCESSAMENTO__MASK 0x01u
#define PINO_PROCESSAMENTO__PORT 0u
#define PINO_PROCESSAMENTO__PRT CYREG_PRT0_PRT
#define PINO_PROCESSAMENTO__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define PINO_PROCESSAMENTO__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define PINO_PROCESSAMENTO__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define PINO_PROCESSAMENTO__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define PINO_PROCESSAMENTO__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define PINO_PROCESSAMENTO__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define PINO_PROCESSAMENTO__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define PINO_PROCESSAMENTO__PS CYREG_PRT0_PS
#define PINO_PROCESSAMENTO__SHIFT 0
#define PINO_PROCESSAMENTO__SLW CYREG_PRT0_SLW

/* MAD_1_ADC_SAR */
#define MAD_1_ADC_SAR__CLK CYREG_SAR1_CLK
#define MAD_1_ADC_SAR__CSR0 CYREG_SAR1_CSR0
#define MAD_1_ADC_SAR__CSR1 CYREG_SAR1_CSR1
#define MAD_1_ADC_SAR__CSR2 CYREG_SAR1_CSR2
#define MAD_1_ADC_SAR__CSR3 CYREG_SAR1_CSR3
#define MAD_1_ADC_SAR__CSR4 CYREG_SAR1_CSR4
#define MAD_1_ADC_SAR__CSR5 CYREG_SAR1_CSR5
#define MAD_1_ADC_SAR__CSR6 CYREG_SAR1_CSR6
#define MAD_1_ADC_SAR__CSR7 CYREG_SAR1_CSR7
#define MAD_1_ADC_SAR__PM_ACT_CFG CYREG_PM_ACT_CFG11
#define MAD_1_ADC_SAR__PM_ACT_MSK 0x02u
#define MAD_1_ADC_SAR__PM_STBY_CFG CYREG_PM_STBY_CFG11
#define MAD_1_ADC_SAR__PM_STBY_MSK 0x02u
#define MAD_1_ADC_SAR__SW0 CYREG_SAR1_SW0
#define MAD_1_ADC_SAR__SW2 CYREG_SAR1_SW2
#define MAD_1_ADC_SAR__SW3 CYREG_SAR1_SW3
#define MAD_1_ADC_SAR__SW4 CYREG_SAR1_SW4
#define MAD_1_ADC_SAR__SW6 CYREG_SAR1_SW6
#define MAD_1_ADC_SAR__TR0 CYREG_SAR1_TR0
#define MAD_1_ADC_SAR__TRIM__TR0 CYREG_FLSHID_MFG_CFG_SAR1_TR0
#define MAD_1_ADC_SAR__TRIM__TR1 CYREG_FLSHID_MFG_CFG_SAR1_TR1
#define MAD_1_ADC_SAR__WRK0 CYREG_SAR1_WRK0
#define MAD_1_ADC_SAR__WRK1 CYREG_SAR1_WRK1

/* MAD_1_theACLK */
#define MAD_1_theACLK__CFG0 CYREG_CLKDIST_ACFG1_CFG0
#define MAD_1_theACLK__CFG1 CYREG_CLKDIST_ACFG1_CFG1
#define MAD_1_theACLK__CFG2 CYREG_CLKDIST_ACFG1_CFG2
#define MAD_1_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define MAD_1_theACLK__CFG3 CYREG_CLKDIST_ACFG1_CFG3
#define MAD_1_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define MAD_1_theACLK__INDEX 0x01u
#define MAD_1_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define MAD_1_theACLK__PM_ACT_MSK 0x02u
#define MAD_1_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define MAD_1_theACLK__PM_STBY_MSK 0x02u

/* MAD_2_ADC_SAR */
#define MAD_2_ADC_SAR__CLK CYREG_SAR0_CLK
#define MAD_2_ADC_SAR__CSR0 CYREG_SAR0_CSR0
#define MAD_2_ADC_SAR__CSR1 CYREG_SAR0_CSR1
#define MAD_2_ADC_SAR__CSR2 CYREG_SAR0_CSR2
#define MAD_2_ADC_SAR__CSR3 CYREG_SAR0_CSR3
#define MAD_2_ADC_SAR__CSR4 CYREG_SAR0_CSR4
#define MAD_2_ADC_SAR__CSR5 CYREG_SAR0_CSR5
#define MAD_2_ADC_SAR__CSR6 CYREG_SAR0_CSR6
#define MAD_2_ADC_SAR__CSR7 CYREG_SAR0_CSR7
#define MAD_2_ADC_SAR__PM_ACT_CFG CYREG_PM_ACT_CFG11
#define MAD_2_ADC_SAR__PM_ACT_MSK 0x01u
#define MAD_2_ADC_SAR__PM_STBY_CFG CYREG_PM_STBY_CFG11
#define MAD_2_ADC_SAR__PM_STBY_MSK 0x01u
#define MAD_2_ADC_SAR__SW0 CYREG_SAR0_SW0
#define MAD_2_ADC_SAR__SW2 CYREG_SAR0_SW2
#define MAD_2_ADC_SAR__SW3 CYREG_SAR0_SW3
#define MAD_2_ADC_SAR__SW4 CYREG_SAR0_SW4
#define MAD_2_ADC_SAR__SW6 CYREG_SAR0_SW6
#define MAD_2_ADC_SAR__TR0 CYREG_SAR0_TR0
#define MAD_2_ADC_SAR__TRIM__TR0 CYREG_FLSHID_MFG_CFG_SAR0_TR0
#define MAD_2_ADC_SAR__TRIM__TR1 CYREG_FLSHID_MFG_CFG_SAR0_TR1
#define MAD_2_ADC_SAR__WRK0 CYREG_SAR0_WRK0
#define MAD_2_ADC_SAR__WRK1 CYREG_SAR0_WRK1

/* MAD_2_theACLK */
#define MAD_2_theACLK__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define MAD_2_theACLK__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define MAD_2_theACLK__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define MAD_2_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define MAD_2_theACLK__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define MAD_2_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define MAD_2_theACLK__INDEX 0x00u
#define MAD_2_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define MAD_2_theACLK__PM_ACT_MSK 0x01u
#define MAD_2_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define MAD_2_theACLK__PM_STBY_MSK 0x01u

/* Timer_TimerHW */
#define Timer_TimerHW__CAP0 CYREG_TMR0_CAP0
#define Timer_TimerHW__CAP1 CYREG_TMR0_CAP1
#define Timer_TimerHW__CFG0 CYREG_TMR0_CFG0
#define Timer_TimerHW__CFG1 CYREG_TMR0_CFG1
#define Timer_TimerHW__CNT_CMP0 CYREG_TMR0_CNT_CMP0
#define Timer_TimerHW__CNT_CMP1 CYREG_TMR0_CNT_CMP1
#define Timer_TimerHW__PER0 CYREG_TMR0_PER0
#define Timer_TimerHW__PER1 CYREG_TMR0_PER1
#define Timer_TimerHW__PM_ACT_CFG CYREG_PM_ACT_CFG3
#define Timer_TimerHW__PM_ACT_MSK 0x01u
#define Timer_TimerHW__PM_STBY_CFG CYREG_PM_STBY_CFG3
#define Timer_TimerHW__PM_STBY_MSK 0x01u
#define Timer_TimerHW__RT0 CYREG_TMR0_RT0
#define Timer_TimerHW__RT1 CYREG_TMR0_RT1
#define Timer_TimerHW__SR0 CYREG_TMR0_SR0

/* MAD_1_Bypass */
#define MAD_1_Bypass__0__MASK 0x04u
#define MAD_1_Bypass__0__PC CYREG_PRT0_PC2
#define MAD_1_Bypass__0__PORT 0u
#define MAD_1_Bypass__0__SHIFT 2
#define MAD_1_Bypass__AG CYREG_PRT0_AG
#define MAD_1_Bypass__AMUX CYREG_PRT0_AMUX
#define MAD_1_Bypass__BIE CYREG_PRT0_BIE
#define MAD_1_Bypass__BIT_MASK CYREG_PRT0_BIT_MASK
#define MAD_1_Bypass__BYP CYREG_PRT0_BYP
#define MAD_1_Bypass__CTL CYREG_PRT0_CTL
#define MAD_1_Bypass__DM0 CYREG_PRT0_DM0
#define MAD_1_Bypass__DM1 CYREG_PRT0_DM1
#define MAD_1_Bypass__DM2 CYREG_PRT0_DM2
#define MAD_1_Bypass__DR CYREG_PRT0_DR
#define MAD_1_Bypass__INP_DIS CYREG_PRT0_INP_DIS
#define MAD_1_Bypass__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define MAD_1_Bypass__LCD_EN CYREG_PRT0_LCD_EN
#define MAD_1_Bypass__MASK 0x04u
#define MAD_1_Bypass__PORT 0u
#define MAD_1_Bypass__PRT CYREG_PRT0_PRT
#define MAD_1_Bypass__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define MAD_1_Bypass__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define MAD_1_Bypass__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define MAD_1_Bypass__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define MAD_1_Bypass__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define MAD_1_Bypass__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define MAD_1_Bypass__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define MAD_1_Bypass__PS CYREG_PRT0_PS
#define MAD_1_Bypass__SHIFT 2
#define MAD_1_Bypass__SLW CYREG_PRT0_SLW

/* MAD_2_Bypass */
#define MAD_2_Bypass__0__MASK 0x10u
#define MAD_2_Bypass__0__PC CYREG_PRT0_PC4
#define MAD_2_Bypass__0__PORT 0u
#define MAD_2_Bypass__0__SHIFT 4
#define MAD_2_Bypass__AG CYREG_PRT0_AG
#define MAD_2_Bypass__AMUX CYREG_PRT0_AMUX
#define MAD_2_Bypass__BIE CYREG_PRT0_BIE
#define MAD_2_Bypass__BIT_MASK CYREG_PRT0_BIT_MASK
#define MAD_2_Bypass__BYP CYREG_PRT0_BYP
#define MAD_2_Bypass__CTL CYREG_PRT0_CTL
#define MAD_2_Bypass__DM0 CYREG_PRT0_DM0
#define MAD_2_Bypass__DM1 CYREG_PRT0_DM1
#define MAD_2_Bypass__DM2 CYREG_PRT0_DM2
#define MAD_2_Bypass__DR CYREG_PRT0_DR
#define MAD_2_Bypass__INP_DIS CYREG_PRT0_INP_DIS
#define MAD_2_Bypass__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define MAD_2_Bypass__LCD_EN CYREG_PRT0_LCD_EN
#define MAD_2_Bypass__MASK 0x10u
#define MAD_2_Bypass__PORT 0u
#define MAD_2_Bypass__PRT CYREG_PRT0_PRT
#define MAD_2_Bypass__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define MAD_2_Bypass__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define MAD_2_Bypass__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define MAD_2_Bypass__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define MAD_2_Bypass__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define MAD_2_Bypass__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define MAD_2_Bypass__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define MAD_2_Bypass__PS CYREG_PRT0_PS
#define MAD_2_Bypass__SHIFT 4
#define MAD_2_Bypass__SLW CYREG_PRT0_SLW

/* MSG_1_viDAC8 */
#define MSG_1_viDAC8__CR0 CYREG_DAC1_CR0
#define MSG_1_viDAC8__CR1 CYREG_DAC1_CR1
#define MSG_1_viDAC8__D CYREG_DAC1_D
#define MSG_1_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define MSG_1_viDAC8__PM_ACT_MSK 0x02u
#define MSG_1_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define MSG_1_viDAC8__PM_STBY_MSK 0x02u
#define MSG_1_viDAC8__STROBE CYREG_DAC1_STROBE
#define MSG_1_viDAC8__SW0 CYREG_DAC1_SW0
#define MSG_1_viDAC8__SW2 CYREG_DAC1_SW2
#define MSG_1_viDAC8__SW3 CYREG_DAC1_SW3
#define MSG_1_viDAC8__SW4 CYREG_DAC1_SW4
#define MSG_1_viDAC8__TR CYREG_DAC1_TR
#define MSG_1_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC1_M1
#define MSG_1_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC1_M2
#define MSG_1_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC1_M3
#define MSG_1_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC1_M4
#define MSG_1_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC1_M5
#define MSG_1_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC1_M6
#define MSG_1_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC1_M7
#define MSG_1_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC1_M8
#define MSG_1_viDAC8__TRIM__TR CYREG_FLSHID_MFG_CFG_DAC1_TR
#define MSG_1_viDAC8__TST CYREG_DAC1_TST

/* LCD_LCDPort */
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PC CYREG_PRT2_PC0
#define LCD_LCDPort__0__PORT 2u
#define LCD_LCDPort__0__SHIFT 0
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PC CYREG_PRT2_PC1
#define LCD_LCDPort__1__PORT 2u
#define LCD_LCDPort__1__SHIFT 1
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PC CYREG_PRT2_PC2
#define LCD_LCDPort__2__PORT 2u
#define LCD_LCDPort__2__SHIFT 2
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PC CYREG_PRT2_PC3
#define LCD_LCDPort__3__PORT 2u
#define LCD_LCDPort__3__SHIFT 3
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PC CYREG_PRT2_PC4
#define LCD_LCDPort__4__PORT 2u
#define LCD_LCDPort__4__SHIFT 4
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PC CYREG_PRT2_PC5
#define LCD_LCDPort__5__PORT 2u
#define LCD_LCDPort__5__SHIFT 5
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PC CYREG_PRT2_PC6
#define LCD_LCDPort__6__PORT 2u
#define LCD_LCDPort__6__SHIFT 6
#define LCD_LCDPort__AG CYREG_PRT2_AG
#define LCD_LCDPort__AMUX CYREG_PRT2_AMUX
#define LCD_LCDPort__BIE CYREG_PRT2_BIE
#define LCD_LCDPort__BIT_MASK CYREG_PRT2_BIT_MASK
#define LCD_LCDPort__BYP CYREG_PRT2_BYP
#define LCD_LCDPort__CTL CYREG_PRT2_CTL
#define LCD_LCDPort__DM0 CYREG_PRT2_DM0
#define LCD_LCDPort__DM1 CYREG_PRT2_DM1
#define LCD_LCDPort__DM2 CYREG_PRT2_DM2
#define LCD_LCDPort__DR CYREG_PRT2_DR
#define LCD_LCDPort__INP_DIS CYREG_PRT2_INP_DIS
#define LCD_LCDPort__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LCD_LCDPort__LCD_EN CYREG_PRT2_LCD_EN
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PORT 2u
#define LCD_LCDPort__PRT CYREG_PRT2_PRT
#define LCD_LCDPort__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LCD_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LCD_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LCD_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LCD_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LCD_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LCD_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LCD_LCDPort__PS CYREG_PRT2_PS
#define LCD_LCDPort__SHIFT 0
#define LCD_LCDPort__SLW CYREG_PRT2_SLW

/* timer_clock */
#define timer_clock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define timer_clock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define timer_clock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define timer_clock__CFG2_SRC_SEL_MASK 0x07u
#define timer_clock__INDEX 0x00u
#define timer_clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define timer_clock__PM_ACT_MSK 0x01u
#define timer_clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define timer_clock__PM_STBY_MSK 0x01u

/* ENT_TORQUE */
#define ENT_TORQUE__0__MASK 0x10u
#define ENT_TORQUE__0__PC CYREG_PRT1_PC4
#define ENT_TORQUE__0__PORT 1u
#define ENT_TORQUE__0__SHIFT 4
#define ENT_TORQUE__AG CYREG_PRT1_AG
#define ENT_TORQUE__AMUX CYREG_PRT1_AMUX
#define ENT_TORQUE__BIE CYREG_PRT1_BIE
#define ENT_TORQUE__BIT_MASK CYREG_PRT1_BIT_MASK
#define ENT_TORQUE__BYP CYREG_PRT1_BYP
#define ENT_TORQUE__CTL CYREG_PRT1_CTL
#define ENT_TORQUE__DM0 CYREG_PRT1_DM0
#define ENT_TORQUE__DM1 CYREG_PRT1_DM1
#define ENT_TORQUE__DM2 CYREG_PRT1_DM2
#define ENT_TORQUE__DR CYREG_PRT1_DR
#define ENT_TORQUE__INP_DIS CYREG_PRT1_INP_DIS
#define ENT_TORQUE__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define ENT_TORQUE__LCD_EN CYREG_PRT1_LCD_EN
#define ENT_TORQUE__MASK 0x10u
#define ENT_TORQUE__PORT 1u
#define ENT_TORQUE__PRT CYREG_PRT1_PRT
#define ENT_TORQUE__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define ENT_TORQUE__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define ENT_TORQUE__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define ENT_TORQUE__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define ENT_TORQUE__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define ENT_TORQUE__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define ENT_TORQUE__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define ENT_TORQUE__PS CYREG_PRT1_PS
#define ENT_TORQUE__SHIFT 4
#define ENT_TORQUE__SLW CYREG_PRT1_SLW

/* MAD_1_IRQ */
#define MAD_1_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define MAD_1_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define MAD_1_IRQ__INTC_MASK 0x01u
#define MAD_1_IRQ__INTC_NUMBER 0u
#define MAD_1_IRQ__INTC_PRIOR_NUM 7u
#define MAD_1_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define MAD_1_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define MAD_1_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* MAD_2_IRQ */
#define MAD_2_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define MAD_2_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define MAD_2_IRQ__INTC_MASK 0x02u
#define MAD_2_IRQ__INTC_NUMBER 1u
#define MAD_2_IRQ__INTC_PRIOR_NUM 7u
#define MAD_2_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define MAD_2_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define MAD_2_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* SAIDA_VEL */
#define SAIDA_VEL__0__MASK 0x40u
#define SAIDA_VEL__0__PC CYREG_PRT1_PC6
#define SAIDA_VEL__0__PORT 1u
#define SAIDA_VEL__0__SHIFT 6
#define SAIDA_VEL__AG CYREG_PRT1_AG
#define SAIDA_VEL__AMUX CYREG_PRT1_AMUX
#define SAIDA_VEL__BIE CYREG_PRT1_BIE
#define SAIDA_VEL__BIT_MASK CYREG_PRT1_BIT_MASK
#define SAIDA_VEL__BYP CYREG_PRT1_BYP
#define SAIDA_VEL__CTL CYREG_PRT1_CTL
#define SAIDA_VEL__DM0 CYREG_PRT1_DM0
#define SAIDA_VEL__DM1 CYREG_PRT1_DM1
#define SAIDA_VEL__DM2 CYREG_PRT1_DM2
#define SAIDA_VEL__DR CYREG_PRT1_DR
#define SAIDA_VEL__INP_DIS CYREG_PRT1_INP_DIS
#define SAIDA_VEL__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define SAIDA_VEL__LCD_EN CYREG_PRT1_LCD_EN
#define SAIDA_VEL__MASK 0x40u
#define SAIDA_VEL__PORT 1u
#define SAIDA_VEL__PRT CYREG_PRT1_PRT
#define SAIDA_VEL__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define SAIDA_VEL__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define SAIDA_VEL__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define SAIDA_VEL__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define SAIDA_VEL__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define SAIDA_VEL__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define SAIDA_VEL__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define SAIDA_VEL__PS CYREG_PRT1_PS
#define SAIDA_VEL__SHIFT 6
#define SAIDA_VEL__SLW CYREG_PRT1_SLW

/* ENT_ALFA */
#define ENT_ALFA__0__MASK 0x04u
#define ENT_ALFA__0__PC CYREG_PRT1_PC2
#define ENT_ALFA__0__PORT 1u
#define ENT_ALFA__0__SHIFT 2
#define ENT_ALFA__AG CYREG_PRT1_AG
#define ENT_ALFA__AMUX CYREG_PRT1_AMUX
#define ENT_ALFA__BIE CYREG_PRT1_BIE
#define ENT_ALFA__BIT_MASK CYREG_PRT1_BIT_MASK
#define ENT_ALFA__BYP CYREG_PRT1_BYP
#define ENT_ALFA__CTL CYREG_PRT1_CTL
#define ENT_ALFA__DM0 CYREG_PRT1_DM0
#define ENT_ALFA__DM1 CYREG_PRT1_DM1
#define ENT_ALFA__DM2 CYREG_PRT1_DM2
#define ENT_ALFA__DR CYREG_PRT1_DR
#define ENT_ALFA__INP_DIS CYREG_PRT1_INP_DIS
#define ENT_ALFA__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define ENT_ALFA__LCD_EN CYREG_PRT1_LCD_EN
#define ENT_ALFA__MASK 0x04u
#define ENT_ALFA__PORT 1u
#define ENT_ALFA__PRT CYREG_PRT1_PRT
#define ENT_ALFA__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define ENT_ALFA__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define ENT_ALFA__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define ENT_ALFA__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define ENT_ALFA__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define ENT_ALFA__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define ENT_ALFA__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define ENT_ALFA__PS CYREG_PRT1_PS
#define ENT_ALFA__SHIFT 2
#define ENT_ALFA__SLW CYREG_PRT1_SLW

/* isr_1 */
#define isr_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_1__INTC_MASK 0x04u
#define isr_1__INTC_NUMBER 2u
#define isr_1__INTC_PRIOR_NUM 7u
#define isr_1__INTC_PRIOR_REG CYREG_NVIC_PRI_2
#define isr_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Miscellaneous */
/* -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release */
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIG_FASTBOOT_ENABLED 0
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_DIE_PANTHER 3u
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_DIE_PANTHER
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 2u
#define CYDEV_CHIP_DIE_PSOC5LP 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x0E13C069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 2u
#define CYDEV_CHIP_MEMBER_5B 4u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5A
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REV_PANTHER_PRODUCTION
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_DATA_CACHE_ENABLED 0
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_REQXRES 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DEBUG_ENABLE_MASK 0x01u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DBG_DBE
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x1000
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000003u
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x4000
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5
#define CYDEV_VIO3_MV 5000
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */

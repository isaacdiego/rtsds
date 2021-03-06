    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; PINO_PROCESSAMENTO
PINO_PROCESSAMENTO__0__MASK EQU 0x01
PINO_PROCESSAMENTO__0__PC EQU CYREG_PRT0_PC0
PINO_PROCESSAMENTO__0__PORT EQU 0
PINO_PROCESSAMENTO__0__SHIFT EQU 0
PINO_PROCESSAMENTO__AG EQU CYREG_PRT0_AG
PINO_PROCESSAMENTO__AMUX EQU CYREG_PRT0_AMUX
PINO_PROCESSAMENTO__BIE EQU CYREG_PRT0_BIE
PINO_PROCESSAMENTO__BIT_MASK EQU CYREG_PRT0_BIT_MASK
PINO_PROCESSAMENTO__BYP EQU CYREG_PRT0_BYP
PINO_PROCESSAMENTO__CTL EQU CYREG_PRT0_CTL
PINO_PROCESSAMENTO__DM0 EQU CYREG_PRT0_DM0
PINO_PROCESSAMENTO__DM1 EQU CYREG_PRT0_DM1
PINO_PROCESSAMENTO__DM2 EQU CYREG_PRT0_DM2
PINO_PROCESSAMENTO__DR EQU CYREG_PRT0_DR
PINO_PROCESSAMENTO__INP_DIS EQU CYREG_PRT0_INP_DIS
PINO_PROCESSAMENTO__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
PINO_PROCESSAMENTO__LCD_EN EQU CYREG_PRT0_LCD_EN
PINO_PROCESSAMENTO__MASK EQU 0x01
PINO_PROCESSAMENTO__PORT EQU 0
PINO_PROCESSAMENTO__PRT EQU CYREG_PRT0_PRT
PINO_PROCESSAMENTO__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
PINO_PROCESSAMENTO__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
PINO_PROCESSAMENTO__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
PINO_PROCESSAMENTO__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
PINO_PROCESSAMENTO__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
PINO_PROCESSAMENTO__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
PINO_PROCESSAMENTO__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
PINO_PROCESSAMENTO__PS EQU CYREG_PRT0_PS
PINO_PROCESSAMENTO__SHIFT EQU 0
PINO_PROCESSAMENTO__SLW EQU CYREG_PRT0_SLW

; MAD_1_ADC_SAR
MAD_1_ADC_SAR__CLK EQU CYREG_SAR1_CLK
MAD_1_ADC_SAR__CSR0 EQU CYREG_SAR1_CSR0
MAD_1_ADC_SAR__CSR1 EQU CYREG_SAR1_CSR1
MAD_1_ADC_SAR__CSR2 EQU CYREG_SAR1_CSR2
MAD_1_ADC_SAR__CSR3 EQU CYREG_SAR1_CSR3
MAD_1_ADC_SAR__CSR4 EQU CYREG_SAR1_CSR4
MAD_1_ADC_SAR__CSR5 EQU CYREG_SAR1_CSR5
MAD_1_ADC_SAR__CSR6 EQU CYREG_SAR1_CSR6
MAD_1_ADC_SAR__CSR7 EQU CYREG_SAR1_CSR7
MAD_1_ADC_SAR__PM_ACT_CFG EQU CYREG_PM_ACT_CFG11
MAD_1_ADC_SAR__PM_ACT_MSK EQU 0x02
MAD_1_ADC_SAR__PM_STBY_CFG EQU CYREG_PM_STBY_CFG11
MAD_1_ADC_SAR__PM_STBY_MSK EQU 0x02
MAD_1_ADC_SAR__SW0 EQU CYREG_SAR1_SW0
MAD_1_ADC_SAR__SW2 EQU CYREG_SAR1_SW2
MAD_1_ADC_SAR__SW3 EQU CYREG_SAR1_SW3
MAD_1_ADC_SAR__SW4 EQU CYREG_SAR1_SW4
MAD_1_ADC_SAR__SW6 EQU CYREG_SAR1_SW6
MAD_1_ADC_SAR__TR0 EQU CYREG_SAR1_TR0
MAD_1_ADC_SAR__TRIM__TR0 EQU CYREG_FLSHID_MFG_CFG_SAR1_TR0
MAD_1_ADC_SAR__TRIM__TR1 EQU CYREG_FLSHID_MFG_CFG_SAR1_TR1
MAD_1_ADC_SAR__WRK0 EQU CYREG_SAR1_WRK0
MAD_1_ADC_SAR__WRK1 EQU CYREG_SAR1_WRK1

; MAD_1_theACLK
MAD_1_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG1_CFG0
MAD_1_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG1_CFG1
MAD_1_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG1_CFG2
MAD_1_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
MAD_1_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG1_CFG3
MAD_1_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
MAD_1_theACLK__INDEX EQU 0x01
MAD_1_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
MAD_1_theACLK__PM_ACT_MSK EQU 0x02
MAD_1_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
MAD_1_theACLK__PM_STBY_MSK EQU 0x02

; MAD_2_ADC_SAR
MAD_2_ADC_SAR__CLK EQU CYREG_SAR0_CLK
MAD_2_ADC_SAR__CSR0 EQU CYREG_SAR0_CSR0
MAD_2_ADC_SAR__CSR1 EQU CYREG_SAR0_CSR1
MAD_2_ADC_SAR__CSR2 EQU CYREG_SAR0_CSR2
MAD_2_ADC_SAR__CSR3 EQU CYREG_SAR0_CSR3
MAD_2_ADC_SAR__CSR4 EQU CYREG_SAR0_CSR4
MAD_2_ADC_SAR__CSR5 EQU CYREG_SAR0_CSR5
MAD_2_ADC_SAR__CSR6 EQU CYREG_SAR0_CSR6
MAD_2_ADC_SAR__CSR7 EQU CYREG_SAR0_CSR7
MAD_2_ADC_SAR__PM_ACT_CFG EQU CYREG_PM_ACT_CFG11
MAD_2_ADC_SAR__PM_ACT_MSK EQU 0x01
MAD_2_ADC_SAR__PM_STBY_CFG EQU CYREG_PM_STBY_CFG11
MAD_2_ADC_SAR__PM_STBY_MSK EQU 0x01
MAD_2_ADC_SAR__SW0 EQU CYREG_SAR0_SW0
MAD_2_ADC_SAR__SW2 EQU CYREG_SAR0_SW2
MAD_2_ADC_SAR__SW3 EQU CYREG_SAR0_SW3
MAD_2_ADC_SAR__SW4 EQU CYREG_SAR0_SW4
MAD_2_ADC_SAR__SW6 EQU CYREG_SAR0_SW6
MAD_2_ADC_SAR__TR0 EQU CYREG_SAR0_TR0
MAD_2_ADC_SAR__TRIM__TR0 EQU CYREG_FLSHID_MFG_CFG_SAR0_TR0
MAD_2_ADC_SAR__TRIM__TR1 EQU CYREG_FLSHID_MFG_CFG_SAR0_TR1
MAD_2_ADC_SAR__WRK0 EQU CYREG_SAR0_WRK0
MAD_2_ADC_SAR__WRK1 EQU CYREG_SAR0_WRK1

; MAD_2_theACLK
MAD_2_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
MAD_2_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
MAD_2_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
MAD_2_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
MAD_2_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
MAD_2_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
MAD_2_theACLK__INDEX EQU 0x00
MAD_2_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
MAD_2_theACLK__PM_ACT_MSK EQU 0x01
MAD_2_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
MAD_2_theACLK__PM_STBY_MSK EQU 0x01

; Timer_TimerHW
Timer_TimerHW__CAP0 EQU CYREG_TMR0_CAP0
Timer_TimerHW__CAP1 EQU CYREG_TMR0_CAP1
Timer_TimerHW__CFG0 EQU CYREG_TMR0_CFG0
Timer_TimerHW__CFG1 EQU CYREG_TMR0_CFG1
Timer_TimerHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
Timer_TimerHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
Timer_TimerHW__PER0 EQU CYREG_TMR0_PER0
Timer_TimerHW__PER1 EQU CYREG_TMR0_PER1
Timer_TimerHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
Timer_TimerHW__PM_ACT_MSK EQU 0x01
Timer_TimerHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
Timer_TimerHW__PM_STBY_MSK EQU 0x01
Timer_TimerHW__RT0 EQU CYREG_TMR0_RT0
Timer_TimerHW__RT1 EQU CYREG_TMR0_RT1
Timer_TimerHW__SR0 EQU CYREG_TMR0_SR0

; MAD_1_Bypass
MAD_1_Bypass__0__MASK EQU 0x04
MAD_1_Bypass__0__PC EQU CYREG_PRT0_PC2
MAD_1_Bypass__0__PORT EQU 0
MAD_1_Bypass__0__SHIFT EQU 2
MAD_1_Bypass__AG EQU CYREG_PRT0_AG
MAD_1_Bypass__AMUX EQU CYREG_PRT0_AMUX
MAD_1_Bypass__BIE EQU CYREG_PRT0_BIE
MAD_1_Bypass__BIT_MASK EQU CYREG_PRT0_BIT_MASK
MAD_1_Bypass__BYP EQU CYREG_PRT0_BYP
MAD_1_Bypass__CTL EQU CYREG_PRT0_CTL
MAD_1_Bypass__DM0 EQU CYREG_PRT0_DM0
MAD_1_Bypass__DM1 EQU CYREG_PRT0_DM1
MAD_1_Bypass__DM2 EQU CYREG_PRT0_DM2
MAD_1_Bypass__DR EQU CYREG_PRT0_DR
MAD_1_Bypass__INP_DIS EQU CYREG_PRT0_INP_DIS
MAD_1_Bypass__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
MAD_1_Bypass__LCD_EN EQU CYREG_PRT0_LCD_EN
MAD_1_Bypass__MASK EQU 0x04
MAD_1_Bypass__PORT EQU 0
MAD_1_Bypass__PRT EQU CYREG_PRT0_PRT
MAD_1_Bypass__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
MAD_1_Bypass__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
MAD_1_Bypass__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
MAD_1_Bypass__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
MAD_1_Bypass__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
MAD_1_Bypass__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
MAD_1_Bypass__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
MAD_1_Bypass__PS EQU CYREG_PRT0_PS
MAD_1_Bypass__SHIFT EQU 2
MAD_1_Bypass__SLW EQU CYREG_PRT0_SLW

; MAD_2_Bypass
MAD_2_Bypass__0__MASK EQU 0x10
MAD_2_Bypass__0__PC EQU CYREG_PRT0_PC4
MAD_2_Bypass__0__PORT EQU 0
MAD_2_Bypass__0__SHIFT EQU 4
MAD_2_Bypass__AG EQU CYREG_PRT0_AG
MAD_2_Bypass__AMUX EQU CYREG_PRT0_AMUX
MAD_2_Bypass__BIE EQU CYREG_PRT0_BIE
MAD_2_Bypass__BIT_MASK EQU CYREG_PRT0_BIT_MASK
MAD_2_Bypass__BYP EQU CYREG_PRT0_BYP
MAD_2_Bypass__CTL EQU CYREG_PRT0_CTL
MAD_2_Bypass__DM0 EQU CYREG_PRT0_DM0
MAD_2_Bypass__DM1 EQU CYREG_PRT0_DM1
MAD_2_Bypass__DM2 EQU CYREG_PRT0_DM2
MAD_2_Bypass__DR EQU CYREG_PRT0_DR
MAD_2_Bypass__INP_DIS EQU CYREG_PRT0_INP_DIS
MAD_2_Bypass__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
MAD_2_Bypass__LCD_EN EQU CYREG_PRT0_LCD_EN
MAD_2_Bypass__MASK EQU 0x10
MAD_2_Bypass__PORT EQU 0
MAD_2_Bypass__PRT EQU CYREG_PRT0_PRT
MAD_2_Bypass__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
MAD_2_Bypass__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
MAD_2_Bypass__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
MAD_2_Bypass__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
MAD_2_Bypass__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
MAD_2_Bypass__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
MAD_2_Bypass__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
MAD_2_Bypass__PS EQU CYREG_PRT0_PS
MAD_2_Bypass__SHIFT EQU 4
MAD_2_Bypass__SLW EQU CYREG_PRT0_SLW

; MSG_1_viDAC8
MSG_1_viDAC8__CR0 EQU CYREG_DAC1_CR0
MSG_1_viDAC8__CR1 EQU CYREG_DAC1_CR1
MSG_1_viDAC8__D EQU CYREG_DAC1_D
MSG_1_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
MSG_1_viDAC8__PM_ACT_MSK EQU 0x02
MSG_1_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
MSG_1_viDAC8__PM_STBY_MSK EQU 0x02
MSG_1_viDAC8__STROBE EQU CYREG_DAC1_STROBE
MSG_1_viDAC8__SW0 EQU CYREG_DAC1_SW0
MSG_1_viDAC8__SW2 EQU CYREG_DAC1_SW2
MSG_1_viDAC8__SW3 EQU CYREG_DAC1_SW3
MSG_1_viDAC8__SW4 EQU CYREG_DAC1_SW4
MSG_1_viDAC8__TR EQU CYREG_DAC1_TR
MSG_1_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M1
MSG_1_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M2
MSG_1_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M3
MSG_1_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M4
MSG_1_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M5
MSG_1_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M6
MSG_1_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M7
MSG_1_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M8
MSG_1_viDAC8__TRIM__TR EQU CYREG_FLSHID_MFG_CFG_DAC1_TR
MSG_1_viDAC8__TST EQU CYREG_DAC1_TST

; LCD_LCDPort
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

; timer_clock
timer_clock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
timer_clock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
timer_clock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
timer_clock__CFG2_SRC_SEL_MASK EQU 0x07
timer_clock__INDEX EQU 0x00
timer_clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
timer_clock__PM_ACT_MSK EQU 0x01
timer_clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
timer_clock__PM_STBY_MSK EQU 0x01

; ENT_TORQUE
ENT_TORQUE__0__MASK EQU 0x10
ENT_TORQUE__0__PC EQU CYREG_PRT1_PC4
ENT_TORQUE__0__PORT EQU 1
ENT_TORQUE__0__SHIFT EQU 4
ENT_TORQUE__AG EQU CYREG_PRT1_AG
ENT_TORQUE__AMUX EQU CYREG_PRT1_AMUX
ENT_TORQUE__BIE EQU CYREG_PRT1_BIE
ENT_TORQUE__BIT_MASK EQU CYREG_PRT1_BIT_MASK
ENT_TORQUE__BYP EQU CYREG_PRT1_BYP
ENT_TORQUE__CTL EQU CYREG_PRT1_CTL
ENT_TORQUE__DM0 EQU CYREG_PRT1_DM0
ENT_TORQUE__DM1 EQU CYREG_PRT1_DM1
ENT_TORQUE__DM2 EQU CYREG_PRT1_DM2
ENT_TORQUE__DR EQU CYREG_PRT1_DR
ENT_TORQUE__INP_DIS EQU CYREG_PRT1_INP_DIS
ENT_TORQUE__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
ENT_TORQUE__LCD_EN EQU CYREG_PRT1_LCD_EN
ENT_TORQUE__MASK EQU 0x10
ENT_TORQUE__PORT EQU 1
ENT_TORQUE__PRT EQU CYREG_PRT1_PRT
ENT_TORQUE__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
ENT_TORQUE__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
ENT_TORQUE__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
ENT_TORQUE__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
ENT_TORQUE__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
ENT_TORQUE__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
ENT_TORQUE__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
ENT_TORQUE__PS EQU CYREG_PRT1_PS
ENT_TORQUE__SHIFT EQU 4
ENT_TORQUE__SLW EQU CYREG_PRT1_SLW

; MAD_1_IRQ
MAD_1_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
MAD_1_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
MAD_1_IRQ__INTC_MASK EQU 0x01
MAD_1_IRQ__INTC_NUMBER EQU 0
MAD_1_IRQ__INTC_PRIOR_NUM EQU 7
MAD_1_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
MAD_1_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
MAD_1_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; MAD_2_IRQ
MAD_2_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
MAD_2_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
MAD_2_IRQ__INTC_MASK EQU 0x02
MAD_2_IRQ__INTC_NUMBER EQU 1
MAD_2_IRQ__INTC_PRIOR_NUM EQU 7
MAD_2_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
MAD_2_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
MAD_2_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; SAIDA_VEL
SAIDA_VEL__0__MASK EQU 0x40
SAIDA_VEL__0__PC EQU CYREG_PRT1_PC6
SAIDA_VEL__0__PORT EQU 1
SAIDA_VEL__0__SHIFT EQU 6
SAIDA_VEL__AG EQU CYREG_PRT1_AG
SAIDA_VEL__AMUX EQU CYREG_PRT1_AMUX
SAIDA_VEL__BIE EQU CYREG_PRT1_BIE
SAIDA_VEL__BIT_MASK EQU CYREG_PRT1_BIT_MASK
SAIDA_VEL__BYP EQU CYREG_PRT1_BYP
SAIDA_VEL__CTL EQU CYREG_PRT1_CTL
SAIDA_VEL__DM0 EQU CYREG_PRT1_DM0
SAIDA_VEL__DM1 EQU CYREG_PRT1_DM1
SAIDA_VEL__DM2 EQU CYREG_PRT1_DM2
SAIDA_VEL__DR EQU CYREG_PRT1_DR
SAIDA_VEL__INP_DIS EQU CYREG_PRT1_INP_DIS
SAIDA_VEL__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
SAIDA_VEL__LCD_EN EQU CYREG_PRT1_LCD_EN
SAIDA_VEL__MASK EQU 0x40
SAIDA_VEL__PORT EQU 1
SAIDA_VEL__PRT EQU CYREG_PRT1_PRT
SAIDA_VEL__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
SAIDA_VEL__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
SAIDA_VEL__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
SAIDA_VEL__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
SAIDA_VEL__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
SAIDA_VEL__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
SAIDA_VEL__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
SAIDA_VEL__PS EQU CYREG_PRT1_PS
SAIDA_VEL__SHIFT EQU 6
SAIDA_VEL__SLW EQU CYREG_PRT1_SLW

; ENT_ALFA
ENT_ALFA__0__MASK EQU 0x04
ENT_ALFA__0__PC EQU CYREG_PRT1_PC2
ENT_ALFA__0__PORT EQU 1
ENT_ALFA__0__SHIFT EQU 2
ENT_ALFA__AG EQU CYREG_PRT1_AG
ENT_ALFA__AMUX EQU CYREG_PRT1_AMUX
ENT_ALFA__BIE EQU CYREG_PRT1_BIE
ENT_ALFA__BIT_MASK EQU CYREG_PRT1_BIT_MASK
ENT_ALFA__BYP EQU CYREG_PRT1_BYP
ENT_ALFA__CTL EQU CYREG_PRT1_CTL
ENT_ALFA__DM0 EQU CYREG_PRT1_DM0
ENT_ALFA__DM1 EQU CYREG_PRT1_DM1
ENT_ALFA__DM2 EQU CYREG_PRT1_DM2
ENT_ALFA__DR EQU CYREG_PRT1_DR
ENT_ALFA__INP_DIS EQU CYREG_PRT1_INP_DIS
ENT_ALFA__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
ENT_ALFA__LCD_EN EQU CYREG_PRT1_LCD_EN
ENT_ALFA__MASK EQU 0x04
ENT_ALFA__PORT EQU 1
ENT_ALFA__PRT EQU CYREG_PRT1_PRT
ENT_ALFA__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
ENT_ALFA__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
ENT_ALFA__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
ENT_ALFA__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
ENT_ALFA__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
ENT_ALFA__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
ENT_ALFA__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
ENT_ALFA__PS EQU CYREG_PRT1_PS
ENT_ALFA__SHIFT EQU 2
ENT_ALFA__SLW EQU CYREG_PRT1_SLW

; isr_1
isr_1__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_1__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_1__INTC_MASK EQU 0x04
isr_1__INTC_NUMBER EQU 2
isr_1__INTC_PRIOR_NUM EQU 7
isr_1__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
isr_1__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_1__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; Miscellaneous
; -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 0
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_DIE_PANTHER EQU 3
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_DIE_PANTHER
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 2
CYDEV_CHIP_DIE_PSOC5LP EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x0E13C069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 2
CYDEV_CHIP_MEMBER_5B EQU 4
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5A
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REV_PANTHER_PRODUCTION
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_DATA_CACHE_ENABLED EQU 0
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_REQXRES EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DEBUG_ENABLE_MASK EQU 0x01
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DBG_DBE
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x1000
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000003
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x4000
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0 EQU 5
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1 EQU 5
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2 EQU 5
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3 EQU 5
CYDEV_VIO3_MV EQU 5000
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END

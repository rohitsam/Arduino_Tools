/* Dual pad pin name */
  PC_2_C       = PC_2  | ALTC,
  PC_3_C       = PC_3  | ALTC,

/* Alternate pin name */
  PA_1_ALT0    = PA_1    | ALT0,
  PA_5_ALT0    = PA_5    | ALT0,
  PA_6_ALT0    = PA_6    | ALT0,
  PA_7_ALT0    = PA_7    | ALT0,
  PA_7_ALT1    = PA_7    | ALT1,
  PA_7_ALT2    = PA_7    | ALT2,
  PB_0_ALT0    = PB_0    | ALT0,
  PB_0_ALT1    = PB_0    | ALT1,
  PB_0_ALT2    = PB_0    | ALT2,
  PB_1_ALT0    = PB_1    | ALT0,
  PC_0_ALT0    = PC_0    | ALT0,
  PC_1_ALT0    = PC_1    | ALT0,
  PC_1_ALT1    = PC_1    | ALT1,
  PC_1_ALT2    = PC_1    | ALT2,
  PC_2_C_ALT0  = PC_2_C  | ALT0,
  PC_4_ALT0    = PC_4    | ALT0,
  PC_5_ALT0    = PC_5    | ALT0,
  PC_5_ALT1    = PC_5    | ALT1,
  PC_5_ALT2    = PC_5    | ALT2,
  PF_12_ALT0   = PF_12   | ALT0,
  PF_14_ALT0   = PF_14   | ALT0,
  PB_7_ALT0    = PB_7    | ALT0,
  PB_9_ALT0    = PB_9    | ALT0,
  PB_6_ALT0    = PB_6    | ALT0,
  PB_8_ALT0    = PB_8    | ALT0,
  PA_0_ALT0    = PA_0    | ALT0,
  PA_1_ALT1    = PA_1    | ALT1,
  PA_2_ALT0    = PA_2    | ALT0,
  PA_2_ALT1    = PA_2    | ALT1,
  PA_3_ALT0    = PA_3    | ALT0,
  PA_3_ALT1    = PA_3    | ALT1,
  PB_1_ALT1    = PB_1    | ALT1,
  PB_14_ALT0   = PB_14   | ALT0,
  PB_14_ALT1   = PB_14   | ALT1,
  PB_15_ALT0   = PB_15   | ALT0,
  PB_15_ALT1   = PB_15   | ALT1,
  PC_6_ALT0    = PC_6    | ALT0,
  PC_7_ALT0    = PC_7    | ALT0,
  PC_8_ALT0    = PC_8    | ALT0,
  PC_9_ALT0    = PC_9    | ALT0,
  PF_8_ALT0    = PF_8    | ALT0,
  PF_9_ALT0    = PF_9    | ALT0,
  PJ_8_ALT0    = PJ_8    | ALT0,
  PJ_9_ALT0    = PJ_9    | ALT0,
  PJ_10_ALT0   = PJ_10   | ALT0,
  PJ_11_ALT0   = PJ_11   | ALT0,
  PK_0_ALT0    = PK_0    | ALT0,
  PK_1_ALT0    = PK_1    | ALT0,
  PA_9_ALT0    = PA_9    | ALT0,
  PB_6_ALT1    = PB_6    | ALT1,
  PC_10_ALT0   = PC_10   | ALT0,
  PA_10_ALT0   = PA_10   | ALT0,
  PC_11_ALT0   = PC_11   | ALT0,
  PA_12_ALT0   = PA_12   | ALT0,
  PA_11_ALT0   = PA_11   | ALT0,
  PG_13_ALT0   = PG_13   | ALT0,
  PB_5_ALT0    = PB_5    | ALT0,
  PB_5_ALT1    = PB_5    | ALT1,
  PB_4_ALT0    = PB_4    | ALT0,
  PB_4_ALT1    = PB_4    | ALT1,
  PB_3_ALT0    = PB_3    | ALT0,
  PB_3_ALT1    = PB_3    | ALT1,
  PA_4_ALT0    = PA_4    | ALT0,
  PA_4_ALT1    = PA_4    | ALT1,
  PA_15_ALT0   = PA_15   | ALT0,
  PA_15_ALT1   = PA_15   | ALT1,

/* SYS_WKUP */
#ifdef PWR_WAKEUP_PIN1
  SYS_WKUP1 = PA_0,
#endif
#ifdef PWR_WAKEUP_PIN2
  SYS_WKUP2 = PA_2,
#endif
#ifdef PWR_WAKEUP_PIN3
  SYS_WKUP3 = NC,
#endif
#ifdef PWR_WAKEUP_PIN4
  SYS_WKUP4 = PC_13,
#endif
#ifdef PWR_WAKEUP_PIN5
  SYS_WKUP5 = NC,
#endif
#ifdef PWR_WAKEUP_PIN6
  SYS_WKUP6 = PC_1,
#endif
#ifdef PWR_WAKEUP_PIN7
  SYS_WKUP7 = NC,
#endif
#ifdef PWR_WAKEUP_PIN8
  SYS_WKUP8 = NC,
#endif
/* USB */
#ifdef USBCON
  USB_OTG_HS_ULPI_D0 = PA_3,
  USB_OTG_HS_ULPI_CK = PA_5,
  USB_OTG_HS_SOF = PA_8,
  USB_OTG_HS_VBUS = PA_9,
  USB_OTG_HS_ID = PA_10,
  USB_OTG_HS_DM = PA_11,
  USB_OTG_HS_DP = PA_12,
  USB_OTG_HS_ULPI_D1 = PB_0,
  USB_OTG_HS_ULPI_D2 = PB_1,
  USB_OTG_HS_ULPI_D7 = PB_5,
  USB_OTG_HS_ULPI_D3 = PB_10,
  USB_OTG_HS_ULPI_D4 = PB_11,
  USB_OTG_HS_ULPI_D5 = PB_12,
  USB_OTG_HS_ULPI_D6 = PB_13,
  USB_OTG_HS_ULPI_STP = PC_0,
#endif

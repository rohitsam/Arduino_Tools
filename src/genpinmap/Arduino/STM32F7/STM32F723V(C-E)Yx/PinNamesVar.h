/* Alternate pin name */
  PA_0_ALT0  = PA_0  | ALT0,
  PA_0_ALT1  = PA_0  | ALT1,
  PA_1_ALT0  = PA_1  | ALT0,
  PA_1_ALT1  = PA_1  | ALT1,
  PA_2_ALT0  = PA_2  | ALT0,
  PA_2_ALT1  = PA_2  | ALT1,
  PA_3_ALT0  = PA_3  | ALT0,
  PA_3_ALT1  = PA_3  | ALT1,
  PA_4_ALT0  = PA_4  | ALT0,
  PA_5_ALT0  = PA_5  | ALT0,
  PA_6_ALT0  = PA_6  | ALT0,
  PA_7_ALT0  = PA_7  | ALT0,
  PB_0_ALT0  = PB_0  | ALT0,
  PB_1_ALT0  = PB_1  | ALT0,
  PC_0_ALT0  = PC_0  | ALT0,
  PC_0_ALT1  = PC_0  | ALT1,
  PC_1_ALT0  = PC_1  | ALT0,
  PC_1_ALT1  = PC_1  | ALT1,
  PC_2_ALT0  = PC_2  | ALT0,
  PC_2_ALT1  = PC_2  | ALT1,
  PC_3_ALT0  = PC_3  | ALT0,
  PC_3_ALT1  = PC_3  | ALT1,
  PC_4_ALT0  = PC_4  | ALT0,
  PC_5_ALT0  = PC_5  | ALT0,
  PA_7_ALT1  = PA_7  | ALT1,
  PA_7_ALT2  = PA_7  | ALT2,
  PB_0_ALT1  = PB_0  | ALT1,
  PB_1_ALT1  = PB_1  | ALT1,
  PB_8_ALT0  = PB_8  | ALT0,
  PB_9_ALT0  = PB_9  | ALT0,
  PC_6_ALT0  = PC_6  | ALT0,
  PC_7_ALT0  = PC_7  | ALT0,
  PC_8_ALT0  = PC_8  | ALT0,
  PC_9_ALT0  = PC_9  | ALT0,
  PC_10_ALT0 = PC_10 | ALT0,
  PC_11_ALT0 = PC_11 | ALT0,
  PB_5_ALT0  = PB_5  | ALT0,
  PB_4_ALT0  = PB_4  | ALT0,
  PB_3_ALT0  = PB_3  | ALT0,
  PA_15_ALT0 = PA_15 | ALT0,

/* SYS_WKUP */
#ifdef PWR_WAKEUP_PIN1
  SYS_WKUP1 = PA_0,
#endif
#ifdef PWR_WAKEUP_PIN2
  SYS_WKUP2 = PA_2,
#endif
#ifdef PWR_WAKEUP_PIN3
  SYS_WKUP3 = PC_1,
#endif
#ifdef PWR_WAKEUP_PIN4
  SYS_WKUP4 = PC_13,
#endif
#ifdef PWR_WAKEUP_PIN5
  SYS_WKUP5 = NC,
#endif
#ifdef PWR_WAKEUP_PIN6
  SYS_WKUP6 = NC,
#endif
#ifdef PWR_WAKEUP_PIN7
  SYS_WKUP7 = NC,
#endif
#ifdef PWR_WAKEUP_PIN8
  SYS_WKUP8 = NC,
#endif
/* USB */
#ifdef USBCON
  USB_OTG_FS_SOF = PA_8,
  USB_OTG_FS_VBUS = PA_9,
  USB_OTG_FS_ID = PA_10,
  USB_OTG_FS_DM = PA_11,
  USB_OTG_FS_DP = PA_12,
  USB_OTG_HS_SOF = PA_4,
  USB_OTG_HS_ID = PB_12,
  USB_OTG_HS_VBUS = PB_13,
  USB_OTG_HS_DM = PB_14,
  USB_OTG_HS_DP = PB_15,
#endif

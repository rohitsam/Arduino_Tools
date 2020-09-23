
/* Alternate pin name */
  PB_9_ALT0    = PB_9    | ALT0,
  PA_0_ALT0    = PA_0    | ALT0,
  PA_1_ALT0    = PA_1    | ALT0,
  PA_2_ALT0    = PA_2    | ALT0,
  PA_2_ALT1    = PA_2    | ALT1,
  PA_3_ALT0    = PA_3    | ALT0,
  PA_3_ALT1    = PA_3    | ALT1,
  PA_5_ALT0    = PA_5    | ALT0,
  PA_6_ALT0    = PA_6    | ALT0,
  PA_7_ALT0    = PA_7    | ALT0,
  PA_7_ALT1    = PA_7    | ALT1,
  PA_7_ALT2    = PA_7    | ALT2,
  PB_0_ALT0    = PB_0    | ALT0,
  PB_0_ALT1    = PB_0    | ALT1,
  PB_1_ALT0    = PB_1    | ALT0,
  PB_1_ALT1    = PB_1    | ALT1,
  PB_8_ALT0    = PB_8    | ALT0,
  PB_14_ALT0   = PB_14   | ALT0,
  PB_14_ALT1   = PB_14   | ALT1,
  PB_15_ALT0   = PB_15   | ALT0,
  PB_15_ALT1   = PB_15   | ALT1,
  PB_5_ALT0    = PB_5    | ALT0,
  PB_4_ALT0    = PB_4    | ALT0,
  PB_3_ALT0    = PB_3    | ALT0,
  PB_13_ALT0   = PB_13   | ALT0,
  PA_4_ALT0    = PA_4    | ALT0,
  PA_15_ALT0   = PA_15   | ALT0,
  PB_12_ALT0   = PB_12   | ALT0,

/* SYS_WKUP */
#ifdef PWR_WAKEUP_PIN1
  SYS_WKUP1 = PA_0,
#endif
#ifdef PWR_WAKEUP_PIN2
  SYS_WKUP2 = NC,
#endif
#ifdef PWR_WAKEUP_PIN3
  SYS_WKUP3 = NC,
#endif
#ifdef PWR_WAKEUP_PIN4
  SYS_WKUP4 = NC,
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
#endif

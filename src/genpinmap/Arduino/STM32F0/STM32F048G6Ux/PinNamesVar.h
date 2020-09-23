/* Alternate pin name */
  PA_11_ALTR = PA_11 | ALTR,
  PA_12_ALTR = PA_12 | ALTR,
  PA_6_ALT0  = PA_6  | ALT0,
  PA_7_ALT0  = PA_7  | ALT0,
  PA_7_ALT1  = PA_7  | ALT1,
  PA_7_ALT2  = PA_7  | ALT2,
  PB_0_ALT0  = PB_0  | ALT0,

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
  SYS_WKUP4 = PA_2,
#endif
#ifdef PWR_WAKEUP_PIN5
  SYS_WKUP5 = NC,
#endif
#ifdef PWR_WAKEUP_PIN6
  SYS_WKUP6 = PB_5,
#endif
#ifdef PWR_WAKEUP_PIN7
  SYS_WKUP7 = NC,
#endif
#ifdef PWR_WAKEUP_PIN8
  SYS_WKUP8 = NC,
#endif
/* USB */
#ifdef USBCON
  USB_NOE = PA_4,
  USB_DM = PA_11_ALTR,
  USB_DP = PA_12_ALTR,
  USB_NOE = PA_13,
  USB_NOE = PA_15,
#endif

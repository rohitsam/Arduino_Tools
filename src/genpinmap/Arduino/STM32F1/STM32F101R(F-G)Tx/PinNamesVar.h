/* Alternate pin name */
  PA_0_ALT0  = PA_0  | ALT0,
  PA_1_ALT0  = PA_1  | ALT0,
  PA_2_ALT0  = PA_2  | ALT0,
  PA_2_ALT1  = PA_2  | ALT1,
  PA_3_ALT0  = PA_3  | ALT0,
  PA_3_ALT1  = PA_3  | ALT1,
  PA_6_ALT0  = PA_6  | ALT0,
  PA_7_ALT0  = PA_7  | ALT0,
  PB_8_ALT0  = PB_8  | ALT0,
  PB_9_ALT0  = PB_9  | ALT0,
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

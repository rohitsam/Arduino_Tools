
/* Alternate pin name */
  PA_1_ALT0    = PA_1    | ALT0,
  PA_2_ALT0    = PA_2    | ALT0,
  PA_3_ALT0    = PA_3    | ALT0,
  PA_6_ALT0    = PA_6    | ALT0,
  PA_7_ALT0    = PA_7    | ALT0,
  PA_7_ALT1    = PA_7    | ALT1,
  PA_7_ALT2    = PA_7    | ALT2,
  PB_0_ALT0    = PB_0    | ALT0,
  PB_1_ALT0    = PB_1    | ALT0,
  PB_1_ALT1    = PB_1    | ALT1,
  PB_6_ALT0    = PB_6    | ALT0,
  PB_15_ALT0   = PB_15   | ALT0,
  PB_15_ALT1   = PB_15   | ALT1,
  PC_6_ALT0    = PC_6    | ALT0,

/* SYS_WKUP */
#ifdef PWR_WAKEUP_PIN1
  SYS_WKUP1 = PA_0,
#endif
#ifdef PWR_WAKEUP_PIN2
  SYS_WKUP2 = PA_4,
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
  SYS_WKUP6 = NC,
#endif
#ifdef PWR_WAKEUP_PIN7
  SYS_WKUP7 = NC,
#endif
#ifdef PWR_WAKEUP_PIN8
  SYS_WKUP8 = NC,
#endif

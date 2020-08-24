/* Alternate pin name */
  PA_1_ALT0  = PA_1  | ALT0,
  PA_2_ALT0  = PA_2  | ALT0,
  PA_3_ALT0  = PA_3  | ALT0,
  PA_6_ALT0  = PA_6  | ALT0,
  PA_7_ALT0  = PA_7  | ALT0,
  PA_7_ALT1  = PA_7  | ALT1,
  PA_7_ALT2  = PA_7  | ALT2,
  PB_0_ALT0  = PB_0  | ALT0,
  PB_1_ALT0  = PB_1  | ALT0,
  PB_1_ALT1  = PB_1  | ALT1,
  PB_14_ALT0 = PB_14 | ALT0,
  PB_15_ALT0 = PB_15 | ALT0,
  PB_15_ALT1 = PB_15 | ALT1,
  PC_10_ALT0 = PC_10 | ALT0,
  PC_11_ALT0 = PC_11 | ALT0,

/* SYS_WKUP */
#ifdef PWR_WAKEUP_PIN1
  SYS_WKUP1 = PA_0,
#endif
#ifdef PWR_WAKEUP_PIN2
  SYS_WKUP2 = PC_13,
#endif
#ifdef PWR_WAKEUP_PIN3
  SYS_WKUP3 = PE_6,
#endif
#ifdef PWR_WAKEUP_PIN4
  SYS_WKUP4 = PA_2,
#endif
#ifdef PWR_WAKEUP_PIN5
  SYS_WKUP5 = PC_5,
#endif
#ifdef PWR_WAKEUP_PIN6
  SYS_WKUP6 = PB_5,
#endif
#ifdef PWR_WAKEUP_PIN7
  SYS_WKUP7 = PB_15,
#endif
#ifdef PWR_WAKEUP_PIN8
  SYS_WKUP8 = PF_2,
#endif

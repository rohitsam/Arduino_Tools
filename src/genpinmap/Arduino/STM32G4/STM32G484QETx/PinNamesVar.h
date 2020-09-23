
/* Alternate pin name */
  PA_0_ALT0    = PA_0    | ALT0,
  PA_1_ALT0    = PA_1    | ALT0,
  PB_0_ALT0    = PB_0    | ALT0,
  PB_1_ALT0    = PB_1    | ALT0,
  PB_11_ALT0   = PB_11   | ALT0,
  PB_12_ALT0   = PB_12   | ALT0,
  PB_14_ALT0   = PB_14   | ALT0,
  PB_15_ALT0   = PB_15   | ALT0,
  PC_0_ALT0    = PC_0    | ALT0,
  PC_1_ALT0    = PC_1    | ALT0,
  PC_2_ALT0    = PC_2    | ALT0,
  PC_3_ALT0    = PC_3    | ALT0,
  PD_8_ALT0    = PD_8    | ALT0,
  PD_9_ALT0    = PD_9    | ALT0,
  PD_10_ALT0   = PD_10   | ALT0,
  PD_10_ALT1   = PD_10   | ALT1,
  PD_11_ALT0   = PD_11   | ALT0,
  PD_11_ALT1   = PD_11   | ALT1,
  PD_12_ALT0   = PD_12   | ALT0,
  PD_12_ALT1   = PD_12   | ALT1,
  PD_13_ALT0   = PD_13   | ALT0,
  PD_13_ALT1   = PD_13   | ALT1,
  PD_14_ALT0   = PD_14   | ALT0,
  PD_14_ALT1   = PD_14   | ALT1,
  PE_8_ALT0    = PE_8    | ALT0,
  PE_8_ALT1    = PE_8    | ALT1,
  PE_10_ALT0   = PE_10   | ALT0,
  PE_10_ALT1   = PE_10   | ALT1,
  PE_11_ALT0   = PE_11   | ALT0,
  PE_11_ALT1   = PE_11   | ALT1,
  PE_12_ALT0   = PE_12   | ALT0,
  PE_12_ALT1   = PE_12   | ALT1,
  PB_7_ALT0    = PB_7    | ALT0,
  PA_13_ALT0   = PA_13   | ALT0,
  PA_1_ALT1    = PA_1    | ALT1,
  PA_2_ALT0    = PA_2    | ALT0,
  PA_2_ALT1    = PA_2    | ALT1,
  PA_3_ALT0    = PA_3    | ALT0,
  PA_3_ALT1    = PA_3    | ALT1,
  PA_6_ALT0    = PA_6    | ALT0,
  PA_7_ALT0    = PA_7    | ALT0,
  PA_7_ALT1    = PA_7    | ALT1,
  PA_7_ALT2    = PA_7    | ALT2,
  PA_9_ALT0    = PA_9    | ALT0,
  PA_10_ALT0   = PA_10   | ALT0,
  PA_11_ALT0   = PA_11   | ALT0,
  PA_11_ALT1   = PA_11   | ALT1,
  PA_12_ALT0   = PA_12   | ALT0,
  PA_12_ALT1   = PA_12   | ALT1,
  PA_15_ALT0   = PA_15   | ALT0,
  PB_0_ALT1    = PB_0    | ALT1,
  PB_1_ALT1    = PB_1    | ALT1,
  PB_2_ALT0    = PB_2    | ALT0,
  PB_3_ALT0    = PB_3    | ALT0,
  PB_4_ALT0    = PB_4    | ALT0,
  PB_4_ALT1    = PB_4    | ALT1,
  PB_5_ALT0    = PB_5    | ALT0,
  PB_5_ALT1    = PB_5    | ALT1,
  PB_6_ALT0    = PB_6    | ALT0,
  PB_6_ALT1    = PB_6    | ALT1,
  PB_7_ALT1    = PB_7    | ALT1,
  PB_8_ALT0    = PB_8    | ALT0,
  PB_8_ALT1    = PB_8    | ALT1,
  PB_9_ALT0    = PB_9    | ALT0,
  PB_9_ALT1    = PB_9    | ALT1,
  PB_9_ALT2    = PB_9    | ALT2,
  PB_15_ALT1   = PB_15   | ALT1,
  PC_6_ALT0    = PC_6    | ALT0,
  PC_7_ALT0    = PC_7    | ALT0,
  PC_8_ALT0    = PC_8    | ALT0,
  PC_8_ALT1    = PC_8    | ALT1,
  PC_9_ALT0    = PC_9    | ALT0,
  PC_12_ALT0   = PC_12   | ALT0,
  PC_13_ALT0   = PC_13   | ALT0,
  PE_0_ALT0    = PE_0    | ALT0,
  PE_1_ALT0    = PE_1    | ALT0,
  PE_2_ALT0    = PE_2    | ALT0,
  PE_3_ALT0    = PE_3    | ALT0,
  PE_4_ALT0    = PE_4    | ALT0,
  PE_5_ALT0    = PE_5    | ALT0,
  PE_9_ALT0    = PE_9    | ALT0,
  PF_6_ALT0    = PF_6    | ALT0,
  PF_9_ALT0    = PF_9    | ALT0,
  PC_10_ALT0   = PC_10   | ALT0,
  PC_11_ALT0   = PC_11   | ALT0,
  PB_13_ALT0   = PB_13   | ALT0,
  PA_4_ALT0    = PA_4    | ALT0,

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
  USB_DM = PA_11,
  USB_DP = PA_12,
#endif

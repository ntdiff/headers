typedef struct _RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned char Initialized;
  /* 0x0008 */ unsigned long FaultProbability[16];
  /* 0x0048 */ unsigned long FaultBreak[16];
  /* 0x0088 */ unsigned long TargetMaximumIndex;
  /* 0x008c */ unsigned long FaultTargetStart[128];
  /* 0x028c */ unsigned long FaultTargetEnd[128];
  /* 0x048c */ unsigned long ExclusionMaximumIndex;
  /* 0x0490 */ unsigned long FaultExclusionStart[128];
  /* 0x0690 */ unsigned long FaultExclusionEnd[128];
} RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION, *PRTL_VERIFIER_FAULT_INJECTIONS_INFORMATION; /* size: 0x0890 */


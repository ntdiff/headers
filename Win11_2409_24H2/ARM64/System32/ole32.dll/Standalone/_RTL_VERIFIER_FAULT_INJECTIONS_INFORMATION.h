typedef struct _RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned char Initialized;
  /* 0x0008 */ unsigned long FaultProbability[16];
  /* 0x0048 */ unsigned long FaultBreak[16];
  /* 0x0088 */ unsigned long TargetMaximumIndex;
  /* 0x0090 */ unsigned __int64 FaultTargetStart[128];
  /* 0x0490 */ unsigned __int64 FaultTargetEnd[128];
  /* 0x0890 */ unsigned long ExclusionMaximumIndex;
  /* 0x0898 */ unsigned __int64 FaultExclusionStart[128];
  /* 0x0c98 */ unsigned __int64 FaultExclusionEnd[128];
} RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION, *PRTL_VERIFIER_FAULT_INJECTIONS_INFORMATION; /* size: 0x1098 */


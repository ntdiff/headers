typedef struct _SYSTEM_DIF_VOLATILE_INFORMATION
{
  /* 0x0000 */ unsigned long RuleClasses[2];
  /* 0x0008 */ unsigned long VerifierOption;
  /* 0x000c */ unsigned long TriageContext;
} SYSTEM_DIF_VOLATILE_INFORMATION, *PSYSTEM_DIF_VOLATILE_INFORMATION; /* size: 0x0010 */


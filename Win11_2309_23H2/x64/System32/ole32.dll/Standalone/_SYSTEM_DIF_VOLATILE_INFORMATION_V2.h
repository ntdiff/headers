typedef struct _SYSTEM_DIF_VOLATILE_INFORMATION_V2
{
  /* 0x0000 */ unsigned long RuleClasses[2];
  /* 0x0008 */ unsigned long VerifierOption;
  /* 0x000c */ unsigned long TriageContext;
  /* 0x0010 */ unsigned long PoolTags[10];
} SYSTEM_DIF_VOLATILE_INFORMATION_V2, *PSYSTEM_DIF_VOLATILE_INFORMATION_V2; /* size: 0x0038 */


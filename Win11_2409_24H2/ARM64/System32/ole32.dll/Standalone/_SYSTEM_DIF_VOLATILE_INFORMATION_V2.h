typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SYSTEM_VERIFIER_FAULTS_INFORMATION
{
  /* 0x0000 */ unsigned long Probability;
  /* 0x0004 */ unsigned long MaxProbability;
  /* 0x0008 */ struct _UNICODE_STRING PoolTags;
  /* 0x0018 */ struct _UNICODE_STRING Applications;
} SYSTEM_VERIFIER_FAULTS_INFORMATION, *PSYSTEM_VERIFIER_FAULTS_INFORMATION; /* size: 0x0028 */

typedef struct _SYSTEM_DIF_VOLATILE_INFORMATION_V2
{
  /* 0x0000 */ unsigned long RuleClasses[2];
  /* 0x0008 */ unsigned long VerifierOption;
  /* 0x000c */ unsigned long TriageContext;
  /* 0x0010 */ unsigned long PoolTags[10];
  /* 0x0038 */ struct _SYSTEM_VERIFIER_FAULTS_INFORMATION FaultSetting;
} SYSTEM_DIF_VOLATILE_INFORMATION_V2, *PSYSTEM_DIF_VOLATILE_INFORMATION_V2; /* size: 0x0060 */


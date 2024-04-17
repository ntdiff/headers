typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _SYSTEM_VERIFIER_FAULTS_INFORMATION
{
  /* 0x0000 */ unsigned long Probability;
  /* 0x0004 */ unsigned long MaxProbability;
  /* 0x0008 */ struct _UNICODE_STRING PoolTags;
  /* 0x0010 */ struct _UNICODE_STRING Applications;
} SYSTEM_VERIFIER_FAULTS_INFORMATION, *PSYSTEM_VERIFIER_FAULTS_INFORMATION; /* size: 0x0018 */


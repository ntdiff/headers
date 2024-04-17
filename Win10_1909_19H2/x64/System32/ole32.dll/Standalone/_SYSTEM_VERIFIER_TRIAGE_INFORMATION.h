typedef struct _SYSTEM_VERIFIER_TRIAGE_INFORMATION
{
  /* 0x0000 */ unsigned long ActionTaken;
  /* 0x0008 */ unsigned __int64 CrashData[5];
  /* 0x0030 */ unsigned long VerifierMode;
  /* 0x0034 */ unsigned long VerifierFlags;
  /* 0x0038 */ wchar_t VerifierTargets[256];
} SYSTEM_VERIFIER_TRIAGE_INFORMATION, *PSYSTEM_VERIFIER_TRIAGE_INFORMATION; /* size: 0x0238 */


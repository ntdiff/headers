typedef struct _SYSTEM_VERIFIER_TRIAGE_INFORMATION
{
  /* 0x0000 */ unsigned long ActionTaken;
  /* 0x0004 */ unsigned long CrashData[5];
  /* 0x0018 */ unsigned long VerifierMode;
  /* 0x001c */ unsigned long VerifierFlags;
  /* 0x0020 */ wchar_t VerifierTargets[256];
} SYSTEM_VERIFIER_TRIAGE_INFORMATION, *PSYSTEM_VERIFIER_TRIAGE_INFORMATION; /* size: 0x0220 */


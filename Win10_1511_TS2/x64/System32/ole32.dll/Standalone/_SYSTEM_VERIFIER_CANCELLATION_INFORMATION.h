typedef struct _SYSTEM_VERIFIER_ISSUE
{
  /* 0x0000 */ unsigned __int64 IssueType;
  /* 0x0008 */ void* Address;
  /* 0x0010 */ unsigned __int64 Parameters[2];
} SYSTEM_VERIFIER_ISSUE, *PSYSTEM_VERIFIER_ISSUE; /* size: 0x0020 */

typedef struct _SYSTEM_VERIFIER_CANCELLATION_INFORMATION
{
  /* 0x0000 */ unsigned long CancelProbability;
  /* 0x0004 */ unsigned long CancelThreshold;
  /* 0x0008 */ unsigned long CompletionThreshold;
  /* 0x000c */ unsigned long CancellationVerifierDisabled;
  /* 0x0010 */ unsigned long AvailableIssues;
  /* 0x0018 */ struct _SYSTEM_VERIFIER_ISSUE Issues[128];
} SYSTEM_VERIFIER_CANCELLATION_INFORMATION, *PSYSTEM_VERIFIER_CANCELLATION_INFORMATION; /* size: 0x1018 */


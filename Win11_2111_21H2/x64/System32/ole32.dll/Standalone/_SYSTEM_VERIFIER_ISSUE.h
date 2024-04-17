typedef struct _SYSTEM_VERIFIER_ISSUE
{
  /* 0x0000 */ unsigned __int64 IssueType;
  /* 0x0008 */ void* Address;
  /* 0x0010 */ unsigned __int64 Parameters[2];
} SYSTEM_VERIFIER_ISSUE, *PSYSTEM_VERIFIER_ISSUE; /* size: 0x0020 */


typedef struct _SYSTEM_VERIFIER_ISSUE
{
  /* 0x0000 */ unsigned long IssueType;
  /* 0x0004 */ void* Address;
  /* 0x0008 */ unsigned long Parameters[2];
} SYSTEM_VERIFIER_ISSUE, *PSYSTEM_VERIFIER_ISSUE; /* size: 0x0010 */


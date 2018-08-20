typedef struct _VI_VERIFIER_ISSUE
{
  /* 0x0000 */ unsigned long IssueType;
  /* 0x0004 */ void* Address;
  /* 0x0008 */ unsigned long Parameters[2];
} VI_VERIFIER_ISSUE, *PVI_VERIFIER_ISSUE; /* size: 0x0010 */


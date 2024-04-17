typedef struct _SYSTEM_BASIC_PERFORMANCE_INFORMATION
{
  /* 0x0000 */ unsigned long AvailablePages;
  /* 0x0004 */ unsigned long CommittedPages;
  /* 0x0008 */ unsigned long CommitLimit;
  /* 0x000c */ unsigned long PeakCommitment;
} SYSTEM_BASIC_PERFORMANCE_INFORMATION, *PSYSTEM_BASIC_PERFORMANCE_INFORMATION; /* size: 0x0010 */


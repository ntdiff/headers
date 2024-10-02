typedef struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS
{
  /* 0x0000 */ volatile long Lock;
  /* 0x0004 */ unsigned long EntryCount;
  /* 0x0008 */ struct _MMPFN* Flink;
  /* 0x0010 */ struct _MMPFN* Blink;
} MI_WORKING_SET_PAGE_TABLE_AGE_LINKS, *PMI_WORKING_SET_PAGE_TABLE_AGE_LINKS; /* size: 0x0018 */

typedef struct _MMWSL_INSTANCE
{
  /* 0x0000 */ struct _MMPTE* PteResumePoint[3];
  /* 0x0018 */ unsigned long LastAccessClearingRemainder;
  /* 0x001c */ unsigned long LastAgingRemainder;
  /* 0x0020 */ unsigned __int64 LockedEntries;
  /* 0x0080 */ struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS ActivePageTableLinks[8];
  /* 0x0140 */ long __PADDING__[16];
} MMWSL_INSTANCE, *PMMWSL_INSTANCE; /* size: 0x0180 */


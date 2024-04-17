typedef struct _SYSTEM_MEMORY_LIST_INFORMATION
{
  /* 0x0000 */ unsigned long ZeroPageCount;
  /* 0x0004 */ unsigned long FreePageCount;
  /* 0x0008 */ unsigned long ModifiedPageCount;
  /* 0x000c */ unsigned long ModifiedNoWritePageCount;
  /* 0x0010 */ unsigned long BadPageCount;
  /* 0x0014 */ unsigned long PageCountByPriority[8];
  /* 0x0034 */ unsigned long RepurposedPagesByPriority[8];
} SYSTEM_MEMORY_LIST_INFORMATION, *PSYSTEM_MEMORY_LIST_INFORMATION; /* size: 0x0054 */


typedef struct _SYSTEM_MEMORY_LIST_INFORMATION
{
  /* 0x0000 */ unsigned __int64 ZeroPageCount;
  /* 0x0008 */ unsigned __int64 FreePageCount;
  /* 0x0010 */ unsigned __int64 ModifiedPageCount;
  /* 0x0018 */ unsigned __int64 ModifiedNoWritePageCount;
  /* 0x0020 */ unsigned __int64 BadPageCount;
  /* 0x0028 */ unsigned __int64 PageCountByPriority[8];
  /* 0x0068 */ unsigned __int64 RepurposedPagesByPriority[8];
} SYSTEM_MEMORY_LIST_INFORMATION, *PSYSTEM_MEMORY_LIST_INFORMATION; /* size: 0x00a8 */


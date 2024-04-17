typedef struct _SYSTEM_WORKINGSET_ENTRY
{
  union
  {
    /* 0x0000 */ unsigned long UniqueProcessId;
    /* 0x0000 */ unsigned long SessionId;
  }; /* size: 0x0004 */
  /* 0x0008 */ unsigned __int64 WorkingSetPageCount;
  /* 0x0010 */ unsigned __int64 CommitPageCount;
  union
  {
    /* 0x0018 */ unsigned __int64 PagedPoolPageCount;
    /* 0x0018 */ unsigned __int64 VirtualSizeInPages;
  }; /* size: 0x0008 */
  /* 0x0020 */ unsigned __int64 PrivateWorkingSetPageCount;
} SYSTEM_WORKINGSET_ENTRY, *PSYSTEM_WORKINGSET_ENTRY; /* size: 0x0028 */


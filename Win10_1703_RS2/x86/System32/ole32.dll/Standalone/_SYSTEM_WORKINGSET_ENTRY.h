typedef struct _SYSTEM_WORKINGSET_ENTRY
{
  union
  {
    /* 0x0000 */ unsigned long UniqueProcessId;
    /* 0x0000 */ unsigned long SessionId;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long WorkingSetPageCount;
  /* 0x0008 */ unsigned long CommitPageCount;
  union
  {
    /* 0x000c */ unsigned long PagedPoolPageCount;
    /* 0x000c */ unsigned long VirtualSizeInPages;
  }; /* size: 0x0004 */
  /* 0x0010 */ unsigned long PrivateWorkingSetPageCount;
} SYSTEM_WORKINGSET_ENTRY, *PSYSTEM_WORKINGSET_ENTRY; /* size: 0x0014 */


typedef struct _SYSTEM_MEMORY_INFORMATION
{
  /* 0x0000 */ unsigned long PagedPoolCommitPageCount;
  /* 0x0004 */ unsigned long NonPagedPoolPageCount;
  /* 0x0008 */ unsigned long MdlPageCount;
  /* 0x000c */ unsigned long CommitPageCount;
} SYSTEM_MEMORY_INFORMATION, *PSYSTEM_MEMORY_INFORMATION; /* size: 0x0010 */


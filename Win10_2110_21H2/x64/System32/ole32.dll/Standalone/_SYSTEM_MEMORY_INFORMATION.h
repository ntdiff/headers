typedef struct _SYSTEM_MEMORY_INFORMATION
{
  /* 0x0000 */ unsigned __int64 PagedPoolCommitPageCount;
  /* 0x0008 */ unsigned __int64 NonPagedPoolPageCount;
  /* 0x0010 */ unsigned __int64 MdlPageCount;
  /* 0x0018 */ unsigned __int64 CommitPageCount;
} SYSTEM_MEMORY_INFORMATION, *PSYSTEM_MEMORY_INFORMATION; /* size: 0x0020 */


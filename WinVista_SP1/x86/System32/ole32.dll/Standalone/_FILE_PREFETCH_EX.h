typedef struct _FILE_PREFETCH_EX
{
  /* 0x0000 */ unsigned long Type;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ unsigned __int64 Prefetch[1];
} FILE_PREFETCH_EX, *PFILE_PREFETCH_EX; /* size: 0x0018 */


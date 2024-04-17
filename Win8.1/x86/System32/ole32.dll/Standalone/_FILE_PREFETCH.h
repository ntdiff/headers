typedef struct _FILE_PREFETCH
{
  /* 0x0000 */ unsigned long Type;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ unsigned __int64 Prefetch[1];
} FILE_PREFETCH, *PFILE_PREFETCH; /* size: 0x0010 */


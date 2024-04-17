typedef struct _FILE_REGION_INFO
{
  /* 0x0000 */ __int64 FileOffset;
  /* 0x0008 */ __int64 Length;
  /* 0x0010 */ unsigned long Usage;
  /* 0x0014 */ unsigned long Reserved;
} FILE_REGION_INFO, *PFILE_REGION_INFO; /* size: 0x0018 */


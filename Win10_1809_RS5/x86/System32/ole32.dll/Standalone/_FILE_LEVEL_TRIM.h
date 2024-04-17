typedef struct _FILE_LEVEL_TRIM_RANGE
{
  /* 0x0000 */ unsigned __int64 Offset;
  /* 0x0008 */ unsigned __int64 Length;
} FILE_LEVEL_TRIM_RANGE, *PFILE_LEVEL_TRIM_RANGE; /* size: 0x0010 */

typedef struct _FILE_LEVEL_TRIM
{
  /* 0x0000 */ unsigned long Key;
  /* 0x0004 */ unsigned long NumRanges;
  /* 0x0008 */ struct _FILE_LEVEL_TRIM_RANGE Ranges[1];
} FILE_LEVEL_TRIM, *PFILE_LEVEL_TRIM; /* size: 0x0018 */


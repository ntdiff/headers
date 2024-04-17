typedef struct _FILE_REGION_INFO
{
  /* 0x0000 */ __int64 FileOffset;
  /* 0x0008 */ __int64 Length;
  /* 0x0010 */ unsigned long Usage;
  /* 0x0014 */ unsigned long Reserved;
} FILE_REGION_INFO, *PFILE_REGION_INFO; /* size: 0x0018 */

typedef struct _FILE_REGION_OUTPUT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long TotalRegionEntryCount;
  /* 0x0008 */ unsigned long RegionEntryCount;
  /* 0x000c */ unsigned long Reserved;
  /* 0x0010 */ struct _FILE_REGION_INFO Region[1];
} FILE_REGION_OUTPUT, *PFILE_REGION_OUTPUT; /* size: 0x0028 */


typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _FILE_STORAGE_TIER_REGION
{
  /* 0x0000 */ struct _GUID TierId;
  /* 0x0010 */ unsigned __int64 Offset;
  /* 0x0018 */ unsigned __int64 Length;
} FILE_STORAGE_TIER_REGION, *PFILE_STORAGE_TIER_REGION; /* size: 0x0020 */

typedef struct _FSCTL_QUERY_REGION_INFO_OUTPUT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long Reserved;
  /* 0x0010 */ unsigned __int64 Alignment;
  /* 0x0018 */ unsigned long TotalNumberOfRegions;
  /* 0x001c */ unsigned long NumberOfRegionsReturned;
  /* 0x0020 */ struct _FILE_STORAGE_TIER_REGION Regions[1];
} FSCTL_QUERY_REGION_INFO_OUTPUT, *PFSCTL_QUERY_REGION_INFO_OUTPUT; /* size: 0x0040 */


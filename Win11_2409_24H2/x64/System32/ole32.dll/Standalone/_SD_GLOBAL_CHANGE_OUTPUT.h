typedef struct _SD_CHANGE_MACHINE_SID_OUTPUT
{
  /* 0x0000 */ unsigned __int64 NumSDChangedSuccess;
  /* 0x0008 */ unsigned __int64 NumSDChangedFail;
  /* 0x0010 */ unsigned __int64 NumSDUnused;
  /* 0x0018 */ unsigned __int64 NumSDTotal;
  /* 0x0020 */ unsigned __int64 NumMftSDChangedSuccess;
  /* 0x0028 */ unsigned __int64 NumMftSDChangedFail;
  /* 0x0030 */ unsigned __int64 NumMftSDTotal;
} SD_CHANGE_MACHINE_SID_OUTPUT, *PSD_CHANGE_MACHINE_SID_OUTPUT; /* size: 0x0038 */

typedef struct _SD_QUERY_STATS_OUTPUT
{
  /* 0x0000 */ unsigned __int64 SdsStreamSize;
  /* 0x0008 */ unsigned __int64 SdsAllocationSize;
  /* 0x0010 */ unsigned __int64 SiiStreamSize;
  /* 0x0018 */ unsigned __int64 SiiAllocationSize;
  /* 0x0020 */ unsigned __int64 SdhStreamSize;
  /* 0x0028 */ unsigned __int64 SdhAllocationSize;
  /* 0x0030 */ unsigned __int64 NumSDTotal;
  /* 0x0038 */ unsigned __int64 NumSDUnused;
} SD_QUERY_STATS_OUTPUT, *PSD_QUERY_STATS_OUTPUT; /* size: 0x0040 */

typedef struct _SD_ENUM_SDS_ENTRY
{
  /* 0x0000 */ unsigned long Hash;
  /* 0x0004 */ unsigned long SecurityId;
  /* 0x0008 */ unsigned __int64 Offset;
  /* 0x0010 */ unsigned long Length;
  /* 0x0014 */ unsigned char Descriptor[1];
  /* 0x0015 */ char __PADDING__[3];
} SD_ENUM_SDS_ENTRY, *PSD_ENUM_SDS_ENTRY; /* size: 0x0018 */

typedef struct _SD_ENUM_SDS_OUTPUT
{
  /* 0x0000 */ unsigned __int64 NextOffset;
  /* 0x0008 */ unsigned __int64 NumSDEntriesReturned;
  /* 0x0010 */ unsigned __int64 NumSDBytesReturned;
  /* 0x0018 */ struct _SD_ENUM_SDS_ENTRY SDEntry[1];
} SD_ENUM_SDS_OUTPUT, *PSD_ENUM_SDS_OUTPUT; /* size: 0x0030 */

typedef struct _SD_GLOBAL_CHANGE_OUTPUT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long ChangeType;
  union
  {
    /* 0x0008 */ struct _SD_CHANGE_MACHINE_SID_OUTPUT SdChange;
    /* 0x0008 */ struct _SD_QUERY_STATS_OUTPUT SdQueryStats;
    struct
    {
      /* 0x0008 */ struct _SD_ENUM_SDS_OUTPUT SdEnumSds;
      /* 0x0038 */ long __PADDING__[4];
    }; /* size: 0x0040 */
  }; /* size: 0x0040 */
} SD_GLOBAL_CHANGE_OUTPUT, *PSD_GLOBAL_CHANGE_OUTPUT; /* size: 0x0048 */


typedef struct _SD_CHANGE_MACHINE_SID_INPUT
{
  /* 0x0000 */ unsigned short CurrentMachineSIDOffset;
  /* 0x0002 */ unsigned short CurrentMachineSIDLength;
  /* 0x0004 */ unsigned short NewMachineSIDOffset;
  /* 0x0006 */ unsigned short NewMachineSIDLength;
} SD_CHANGE_MACHINE_SID_INPUT, *PSD_CHANGE_MACHINE_SID_INPUT; /* size: 0x0008 */

typedef struct _SD_QUERY_STATS_INPUT
{
  /* 0x0000 */ unsigned long Reserved;
} SD_QUERY_STATS_INPUT, *PSD_QUERY_STATS_INPUT; /* size: 0x0004 */

typedef struct _SD_ENUM_SDS_INPUT
{
  /* 0x0000 */ unsigned __int64 StartingOffset;
  /* 0x0008 */ unsigned __int64 MaxSDEntriesToReturn;
} SD_ENUM_SDS_INPUT, *PSD_ENUM_SDS_INPUT; /* size: 0x0010 */

typedef struct _SD_GLOBAL_CHANGE_INPUT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long ChangeType;
  union
  {
    /* 0x0008 */ struct _SD_CHANGE_MACHINE_SID_INPUT SdChange;
    /* 0x0008 */ struct _SD_QUERY_STATS_INPUT SdQueryStats;
    /* 0x0008 */ struct _SD_ENUM_SDS_INPUT SdEnumSds;
  }; /* size: 0x0010 */
} SD_GLOBAL_CHANGE_INPUT, *PSD_GLOBAL_CHANGE_INPUT; /* size: 0x0018 */


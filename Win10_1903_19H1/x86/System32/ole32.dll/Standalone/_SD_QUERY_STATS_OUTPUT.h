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


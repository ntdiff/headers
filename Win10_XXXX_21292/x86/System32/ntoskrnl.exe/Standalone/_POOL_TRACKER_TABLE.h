typedef struct _POOL_TRACKER_TABLE
{
  /* 0x0000 */ volatile long Key;
  /* 0x0004 */ unsigned long NonPagedBytes;
  /* 0x0008 */ unsigned __int64 NonPagedAllocs;
  /* 0x0010 */ unsigned __int64 NonPagedFrees;
  /* 0x0018 */ unsigned long PagedBytes;
  /* 0x0020 */ unsigned __int64 PagedAllocs;
  /* 0x0028 */ unsigned __int64 PagedFrees;
  /* 0x0030 */ long AvailableLimit[2];
  /* 0x0038 */ struct _POOL_LIMIT_TABLE_ENTRY* LimitInfo;
  /* 0x003c */ long __PADDING__[1];
} POOL_TRACKER_TABLE, *PPOOL_TRACKER_TABLE; /* size: 0x0040 */


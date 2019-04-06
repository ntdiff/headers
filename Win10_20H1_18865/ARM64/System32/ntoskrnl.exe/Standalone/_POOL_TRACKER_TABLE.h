typedef struct _POOL_TRACKER_TABLE
{
  /* 0x0000 */ volatile long Key;
  /* 0x0008 */ unsigned __int64 NonPagedBytes;
  /* 0x0010 */ unsigned __int64 NonPagedAllocs;
  /* 0x0018 */ unsigned __int64 NonPagedFrees;
  /* 0x0020 */ unsigned __int64 PagedBytes;
  /* 0x0028 */ unsigned __int64 PagedAllocs;
  /* 0x0030 */ unsigned __int64 PagedFrees;
} POOL_TRACKER_TABLE, *PPOOL_TRACKER_TABLE; /* size: 0x0038 */


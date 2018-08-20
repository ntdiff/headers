typedef struct _POOL_TRACKER_TABLE
{
  /* 0x0000 */ volatile long Key;
  /* 0x0004 */ unsigned long NonPagedAllocs;
  /* 0x0008 */ unsigned long NonPagedFrees;
  /* 0x000c */ unsigned long NonPagedBytes;
  /* 0x0010 */ unsigned long PagedAllocs;
  /* 0x0014 */ unsigned long PagedFrees;
  /* 0x0018 */ unsigned long PagedBytes;
} POOL_TRACKER_TABLE, *PPOOL_TRACKER_TABLE; /* size: 0x001c */


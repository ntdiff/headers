typedef struct _EVENT_ENTRY_LOOKUP_TABLE
{
  /* 0x0000 */ struct _EVENT_ENTRY* EntryBuckets[32];
  /* 0x0080 */ unsigned long NumEventEntries;
  /* 0x0084 */ unsigned long NextBucketToFlush;
} EVENT_ENTRY_LOOKUP_TABLE, *PEVENT_ENTRY_LOOKUP_TABLE; /* size: 0x0088 */

typedef struct _RTL_SRWLOCK
{
  /* 0x0000 */ void* Ptr;
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

typedef struct _TLG_AGG_INTERNAL_STATS
{
  /* 0x0000 */ unsigned __int64 TotalEntriesFlushed;
  /* 0x0008 */ unsigned __int64 NumFlushes;
  /* 0x0010 */ unsigned long MaxEntriesStored;
  /* 0x0014 */ unsigned long MaxEntriesFlushed;
  /* 0x0018 */ unsigned long MinEntriesFlushed;
  /* 0x001c */ unsigned long NumBucketLimitReached;
  /* 0x0020 */ unsigned long NumAllocationFailures;
  /* 0x0024 */ unsigned long NumLargeEventFailures;
} TLG_AGG_INTERNAL_STATS, *PTLG_AGG_INTERNAL_STATS; /* size: 0x0028 */

typedef struct _TLG_AGGR_SESSION
{
  /* 0x0000 */ struct _EVENT_ENTRY_LOOKUP_TABLE TlgHashTable;
  /* 0x0088 */ struct _RTL_SRWLOCK SharedLock;
  /* 0x0090 */ struct _TLG_AGG_INTERNAL_STATS InternalStats;
  /* 0x00b8 */ void* pEnableCallback /* function */;
  /* 0x00bc */ void* pCallbackContext;
  /* 0x00c0 */ const struct _TlgProvider_t* hProvider;
  /* 0x00c4 */ struct _TLG_AGGR_SESSION* NextSession;
  /* 0x00c8 */ struct _TP_TIMER* Timer;
  /* 0x00cc */ unsigned int FlushPeriod_ms;
  /* 0x00d0 */ unsigned char CompleteFlushPending;
  /* 0x00d1 */ char __PADDING__[7];
} TLG_AGGR_SESSION, *PTLG_AGGR_SESSION; /* size: 0x00d8 */


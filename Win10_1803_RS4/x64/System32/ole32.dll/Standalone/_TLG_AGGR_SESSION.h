typedef struct _EVENT_ENTRY_LOOKUP_TABLE
{
  /* 0x0000 */ struct _EVENT_ENTRY* EntryBuckets[32];
  /* 0x0100 */ unsigned long NumEventEntries;
  /* 0x0104 */ unsigned long NextBucketToFlush;
} EVENT_ENTRY_LOOKUP_TABLE, *PEVENT_ENTRY_LOOKUP_TABLE; /* size: 0x0108 */

typedef struct _RTL_SRWLOCK
{
  /* 0x0000 */ void* Ptr;
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

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
  /* 0x0108 */ struct _RTL_SRWLOCK SharedLock;
  /* 0x0110 */ struct _TLG_AGG_INTERNAL_STATS InternalStats;
  /* 0x0138 */ void* pEnableCallback /* function */;
  /* 0x0140 */ void* pCallbackContext;
  /* 0x0148 */ const struct _TlgProvider_t* hProvider;
  /* 0x0150 */ struct _TLG_AGGR_SESSION* NextSession;
  /* 0x0158 */ struct _TP_TIMER* Timer;
  /* 0x0160 */ unsigned int FlushPeriod_ms;
  /* 0x0164 */ unsigned char CompleteFlushPending;
  /* 0x0165 */ char __PADDING__[3];
} TLG_AGGR_SESSION, *PTLG_AGGR_SESSION; /* size: 0x0168 */


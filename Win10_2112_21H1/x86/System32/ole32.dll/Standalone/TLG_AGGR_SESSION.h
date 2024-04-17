struct EVENT_ENTRY_LOOKUP_TABLE
{
  /* 0x0000 */ struct EVENT_ENTRY* EntryBuckets[32];
  /* 0x0080 */ unsigned long NumEventEntries;
  /* 0x0084 */ unsigned long NextBucketToFlush;
}; /* size: 0x0088 */

typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

struct TLG_AGG_INTERNAL_STATS
{
  /* 0x0000 */ unsigned __int64 TotalEntriesFlushed;
  /* 0x0008 */ unsigned __int64 NumFlushes;
  /* 0x0010 */ unsigned long MaxEntriesStored;
  /* 0x0014 */ unsigned long MaxEntriesFlushed;
  /* 0x0018 */ unsigned long MinEntriesFlushed;
  /* 0x001c */ unsigned long NumBucketLimitReached;
  /* 0x0020 */ unsigned long NumAllocationFailures;
  /* 0x0024 */ unsigned long NumLargeEventFailures;
}; /* size: 0x0028 */

struct TLG_AGGR_SESSION
{
  /* 0x0000 */ struct EVENT_ENTRY_LOOKUP_TABLE TlgHashTable;
  /* 0x0088 */ struct _RTL_SRWLOCK SharedLock;
  /* 0x0090 */ struct TLG_AGG_INTERNAL_STATS InternalStats;
  /* 0x00b8 */ void* pEnableCallback /* function */;
  /* 0x00bc */ void* pCallbackContext;
  /* 0x00c0 */ const struct _tlgProvider_t* hProvider;
  /* 0x00c4 */ struct TLG_AGGR_SESSION* NextSession;
  /* 0x00c8 */ struct _TP_TIMER* Timer;
  /* 0x00cc */ unsigned int FlushPeriod_ms;
  /* 0x00d0 */ unsigned char CompleteFlushPending;
  /* 0x00d1 */ char __PADDING__[7];
}; /* size: 0x00d8 */


typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _CM_TRANS_PTR
{
  union
  {
    /* 0x0000 */ unsigned __int64 LightWeight : 1; /* bit position: 0 */
    /* 0x0000 */ void* TransPtr;
  }; /* size: 0x0008 */
} CM_TRANS_PTR, *PCM_TRANS_PTR; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _CM_TRANS
{
  /* 0x0000 */ struct _LIST_ENTRY TransactionListEntry;
  /* 0x0010 */ struct _LIST_ENTRY KCBUoWListHead;
  /* 0x0020 */ struct _LIST_ENTRY LazyCommitListEntry;
  union
  {
    struct /* bitfield */
    {
      /* 0x0030 */ unsigned long Prepared : 1; /* bit position: 0 */
      /* 0x0030 */ unsigned long Aborted : 1; /* bit position: 1 */
      /* 0x0030 */ unsigned long Committed : 1; /* bit position: 2 */
      /* 0x0030 */ unsigned long Initializing : 1; /* bit position: 3 */
      /* 0x0030 */ unsigned long Invalid : 1; /* bit position: 4 */
      /* 0x0030 */ unsigned long UseReservation : 1; /* bit position: 5 */
      /* 0x0030 */ unsigned long TmCallbacksActive : 1; /* bit position: 6 */
      /* 0x0030 */ unsigned long LightWeight : 1; /* bit position: 7 */
      /* 0x0030 */ unsigned long Freed1 : 1; /* bit position: 8 */
      /* 0x0030 */ unsigned long Freed2 : 1; /* bit position: 9 */
      /* 0x0030 */ unsigned long Spare1 : 2; /* bit position: 10 */
      /* 0x0030 */ unsigned long Freed : 1; /* bit position: 12 */
      /* 0x0030 */ unsigned long Spare : 19; /* bit position: 13 */
    }; /* bitfield */
    /* 0x0030 */ unsigned long TransState;
  }; /* size: 0x0004 */
  /* 0x0038 */ union _CM_TRANS_PTR Trans;
  /* 0x0040 */ struct _CM_RM* CmRm;
  /* 0x0048 */ struct _KENLISTMENT* KtmEnlistmentObject;
  /* 0x0050 */ void* KtmEnlistmentHandle;
  /* 0x0058 */ struct _GUID KtmUow;
  /* 0x0068 */ unsigned __int64 StartLsn;
  /* 0x0070 */ unsigned long HiveCount;
  /* 0x0078 */ struct _CMHIVE* HiveArray[8];
} CM_TRANS, *PCM_TRANS; /* size: 0x00b8 */


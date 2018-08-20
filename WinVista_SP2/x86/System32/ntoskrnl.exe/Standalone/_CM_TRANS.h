typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
  /* 0x0008 */ struct _LIST_ENTRY KCBUoWListHead;
  /* 0x0010 */ struct _LIST_ENTRY LazyCommitListEntry;
  /* 0x0018 */ void* KtmTrans;
  /* 0x001c */ struct _CM_RM* CmRm;
  /* 0x0020 */ struct _KENLISTMENT* KtmEnlistmentObject;
  /* 0x0024 */ void* KtmEnlistmentHandle;
  /* 0x0028 */ struct _GUID KtmUow;
  /* 0x0038 */ unsigned __int64 StartLsn;
  /* 0x0040 */ unsigned long TransState;
  /* 0x0044 */ unsigned long HiveCount;
  /* 0x0048 */ struct _CMHIVE* HiveArray[8];
} CM_TRANS, *PCM_TRANS; /* size: 0x0068 */


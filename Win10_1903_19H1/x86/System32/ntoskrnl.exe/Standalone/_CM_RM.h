typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _CM_RM
{
  /* 0x0000 */ struct _LIST_ENTRY RmListEntry;
  /* 0x0008 */ struct _LIST_ENTRY TransactionListHead;
  /* 0x0010 */ void* TmHandle;
  /* 0x0014 */ void* Tm;
  /* 0x0018 */ void* RmHandle;
  /* 0x001c */ void* KtmRm;
  /* 0x0020 */ unsigned long RefCount;
  /* 0x0024 */ unsigned long ContainerNum;
  /* 0x0028 */ unsigned __int64 ContainerSize;
  /* 0x0030 */ struct _CMHIVE* CmHive;
  /* 0x0034 */ void* LogFileObject;
  /* 0x0038 */ void* MarshallingContext;
  /* 0x003c */ unsigned long RmFlags;
  /* 0x0040 */ long LogStartStatus1;
  /* 0x0044 */ long LogStartStatus2;
  /* 0x0048 */ unsigned __int64 BaseLsn;
  /* 0x0050 */ struct _ERESOURCE* RmLock;
  /* 0x0054 */ long __PADDING__[1];
} CM_RM, *PCM_RM; /* size: 0x0058 */


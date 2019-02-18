typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _CM_RM
{
  /* 0x0000 */ struct _LIST_ENTRY RmListEntry;
  /* 0x0010 */ struct _LIST_ENTRY TransactionListHead;
  /* 0x0020 */ void* TmHandle;
  /* 0x0028 */ void* Tm;
  /* 0x0030 */ void* RmHandle;
  /* 0x0038 */ void* KtmRm;
  /* 0x0040 */ unsigned long RefCount;
  /* 0x0044 */ unsigned long ContainerNum;
  /* 0x0048 */ unsigned __int64 ContainerSize;
  /* 0x0050 */ struct _CMHIVE* CmHive;
  /* 0x0058 */ void* LogFileObject;
  /* 0x0060 */ void* MarshallingContext;
  /* 0x0068 */ unsigned long RmFlags;
  /* 0x006c */ long LogStartStatus1;
  /* 0x0070 */ long LogStartStatus2;
  /* 0x0078 */ unsigned __int64 BaseLsn;
  /* 0x0080 */ struct _ERESOURCE* RmLock;
} CM_RM, *PCM_RM; /* size: 0x0088 */


typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DEFERRED_WRITE
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteSize;
  /* 0x0004 */ struct _FILE_OBJECT* FileObject;
  /* 0x0008 */ unsigned long BytesToWrite;
  /* 0x000c */ struct _LIST_ENTRY DeferredWriteLinks;
  /* 0x0014 */ struct _KEVENT* Event;
  /* 0x0018 */ void* PostRoutine /* function */;
  /* 0x001c */ void* Context1;
  /* 0x0020 */ void* Context2;
  /* 0x0024 */ struct _CC_PARTITION* Partition;
} DEFERRED_WRITE, *PDEFERRED_WRITE; /* size: 0x0028 */


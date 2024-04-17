typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _DEFERRED_WRITE
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteSize;
  /* 0x0008 */ struct _FILE_OBJECT* FileObject;
  /* 0x0010 */ unsigned long BytesToWrite;
  /* 0x0018 */ struct _LIST_ENTRY DeferredWriteLinks;
  /* 0x0028 */ struct _KEVENT* Event;
  /* 0x0030 */ void* PostRoutine /* function */;
  /* 0x0038 */ void* Context1;
  /* 0x0040 */ void* Context2;
  /* 0x0048 */ struct _CC_PARTITION* Partition;
  /* 0x0050 */ unsigned char SoftThrottle;
  /* 0x0058 */ union _LARGE_INTEGER TimeAdded;
} DEFERRED_WRITE, *PDEFERRED_WRITE; /* size: 0x0060 */


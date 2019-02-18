typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _SLIST_ENTRY
{
  /* 0x0000 */ struct _SLIST_ENTRY* Next;
  /* 0x0008 */ long __PADDING__[2];
} SLIST_ENTRY, *PSLIST_ENTRY; /* size: 0x0010 */

typedef struct _DPH_BLOCK_INFORMATION
{
  /* 0x0000 */ unsigned long StartStamp;
  /* 0x0008 */ void* Heap;
  /* 0x0010 */ unsigned __int64 RequestedSize;
  /* 0x0018 */ unsigned __int64 ActualSize;
  union
  {
    /* 0x0020 */ struct _LIST_ENTRY FreeQueue;
    /* 0x0020 */ struct _SLIST_ENTRY FreePushList;
    /* 0x0020 */ unsigned short TraceIndex;
  }; /* size: 0x0010 */
  /* 0x0030 */ void* StackTrace;
  /* 0x0038 */ unsigned long Padding;
  /* 0x003c */ unsigned long EndStamp;
} DPH_BLOCK_INFORMATION, *PDPH_BLOCK_INFORMATION; /* size: 0x0040 */


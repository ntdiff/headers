typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _DPH_BLOCK_INFORMATION
{
  /* 0x0000 */ unsigned long StartStamp;
  /* 0x0004 */ void* Heap;
  /* 0x0008 */ unsigned long RequestedSize;
  /* 0x000c */ unsigned long ActualSize;
  union
  {
    /* 0x0010 */ struct _LIST_ENTRY FreeQueue;
    /* 0x0010 */ struct _SINGLE_LIST_ENTRY FreePushList;
    /* 0x0010 */ unsigned short TraceIndex;
  }; /* size: 0x0008 */
  /* 0x0018 */ void* StackTrace;
  /* 0x001c */ unsigned long EndStamp;
} DPH_BLOCK_INFORMATION, *PDPH_BLOCK_INFORMATION; /* size: 0x0020 */


typedef struct _RTL_HEAP_INFORMATION
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned short EntryOverhead;
  /* 0x000e */ unsigned short CreatorBackTraceIndex;
  /* 0x0010 */ unsigned __int64 BytesAllocated;
  /* 0x0018 */ unsigned __int64 BytesCommitted;
  /* 0x0020 */ unsigned long NumberOfTags;
  /* 0x0024 */ unsigned long NumberOfEntries;
  /* 0x0028 */ unsigned long NumberOfPseudoTags;
  /* 0x002c */ unsigned long PseudoTagGranularity;
  /* 0x0030 */ unsigned long Reserved[5];
  /* 0x0048 */ struct _RTL_HEAP_TAG* Tags;
  /* 0x0050 */ struct _RTL_HEAP_ENTRY* Entries;
  /* 0x0058 */ unsigned __int64 HeapTag;
} RTL_HEAP_INFORMATION, *PRTL_HEAP_INFORMATION; /* size: 0x0060 */


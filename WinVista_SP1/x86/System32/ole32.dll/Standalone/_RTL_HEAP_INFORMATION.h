typedef struct _RTL_HEAP_INFORMATION
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned short EntryOverhead;
  /* 0x000a */ unsigned short CreatorBackTraceIndex;
  /* 0x000c */ unsigned long BytesAllocated;
  /* 0x0010 */ unsigned long BytesCommitted;
  /* 0x0014 */ unsigned long NumberOfTags;
  /* 0x0018 */ unsigned long NumberOfEntries;
  /* 0x001c */ unsigned long NumberOfPseudoTags;
  /* 0x0020 */ unsigned long PseudoTagGranularity;
  /* 0x0024 */ unsigned long Reserved[5];
  /* 0x0038 */ struct _RTL_HEAP_TAG* Tags;
  /* 0x003c */ struct _RTL_HEAP_ENTRY* Entries;
} RTL_HEAP_INFORMATION, *PRTL_HEAP_INFORMATION; /* size: 0x0040 */


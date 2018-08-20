typedef struct _HEAP_ENTRY
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Size;
      /* 0x0002 */ unsigned short PreviousSize;
    }; /* size: 0x0004 */
    /* 0x0000 */ void* volatile SubSegmentCode;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned char SmallTagIndex;
  /* 0x0005 */ unsigned char Flags;
  /* 0x0006 */ unsigned char UnusedBytes;
  /* 0x0007 */ volatile unsigned char SegmentIndex;
} HEAP_ENTRY, *PHEAP_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_SEGMENT
{
  /* 0x0000 */ struct _HEAP_ENTRY Entry;
  /* 0x0008 */ unsigned long Signature;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ struct _HEAP* Heap;
  /* 0x0014 */ unsigned long LargestUnCommittedRange;
  /* 0x0018 */ void* BaseAddress;
  /* 0x001c */ unsigned long NumberOfPages;
  /* 0x0020 */ struct _HEAP_ENTRY* FirstEntry;
  /* 0x0024 */ struct _HEAP_ENTRY* LastValidEntry;
  /* 0x0028 */ unsigned long NumberOfUnCommittedPages;
  /* 0x002c */ unsigned long NumberOfUnCommittedRanges;
  /* 0x0030 */ struct _HEAP_UNCOMMMTTED_RANGE* UnCommittedRanges;
  /* 0x0034 */ unsigned short AllocatorBackTraceIndex;
  /* 0x0036 */ unsigned short Reserved;
  /* 0x0038 */ struct _HEAP_ENTRY* LastEntryInSegment;
} HEAP_SEGMENT, *PHEAP_SEGMENT; /* size: 0x003c */


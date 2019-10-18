typedef struct _HEAP_UNPACKED_ENTRY
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Size;
      /* 0x0002 */ unsigned char Flags;
      /* 0x0003 */ unsigned char SmallTagIndex;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long SubSegmentCode;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned short PreviousSize;
  union
  {
    /* 0x0006 */ unsigned char SegmentOffset;
    /* 0x0006 */ unsigned char LFHFlags;
  }; /* size: 0x0001 */
  /* 0x0007 */ unsigned char UnusedBytes;
} HEAP_UNPACKED_ENTRY, *PHEAP_UNPACKED_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_EXTENDED_ENTRY
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short FunctionIndex;
      /* 0x0002 */ unsigned short ContextValue;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long InterceptorValue;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned short UnusedBytesLength;
  /* 0x0006 */ unsigned char EntryOffset;
  /* 0x0007 */ unsigned char ExtendedBlockSignature;
} HEAP_EXTENDED_ENTRY, *PHEAP_EXTENDED_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_ENTRY
{
  union
  {
    /* 0x0000 */ struct _HEAP_UNPACKED_ENTRY UnpackedEntry;
    struct
    {
      /* 0x0000 */ unsigned short Size;
      /* 0x0002 */ unsigned char Flags;
      /* 0x0003 */ unsigned char SmallTagIndex;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned long SubSegmentCode;
      /* 0x0004 */ unsigned short PreviousSize;
      union
      {
        /* 0x0006 */ unsigned char SegmentOffset;
        struct
        {
          /* 0x0006 */ unsigned char LFHFlags;
          /* 0x0007 */ unsigned char UnusedBytes;
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0008 */
    /* 0x0000 */ struct _HEAP_EXTENDED_ENTRY ExtendedEntry;
    struct
    {
      /* 0x0000 */ unsigned short FunctionIndex;
      /* 0x0002 */ unsigned short ContextValue;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned long InterceptorValue;
      /* 0x0004 */ unsigned short UnusedBytesLength;
      /* 0x0006 */ unsigned char EntryOffset;
      /* 0x0007 */ unsigned char ExtendedBlockSignature;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long Code1;
      union
      {
        struct
        {
          /* 0x0004 */ unsigned short Code2;
          /* 0x0006 */ unsigned char Code3;
          /* 0x0007 */ unsigned char Code4;
        }; /* size: 0x0004 */
        /* 0x0004 */ unsigned long Code234;
      }; /* size: 0x0004 */
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 AgregateCode;
  }; /* size: 0x0008 */
} HEAP_ENTRY, *PHEAP_ENTRY; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_SEGMENT
{
  /* 0x0000 */ struct _HEAP_ENTRY Entry;
  /* 0x0008 */ unsigned long SegmentSignature;
  /* 0x000c */ unsigned long SegmentFlags;
  /* 0x0010 */ struct _LIST_ENTRY SegmentListEntry;
  /* 0x0018 */ struct _HEAP* Heap;
  /* 0x001c */ void* BaseAddress;
  /* 0x0020 */ unsigned long NumberOfPages;
  /* 0x0024 */ struct _HEAP_ENTRY* FirstEntry;
  /* 0x0028 */ struct _HEAP_ENTRY* LastValidEntry;
  /* 0x002c */ unsigned long NumberOfUnCommittedPages;
  /* 0x0030 */ unsigned long NumberOfUnCommittedRanges;
  /* 0x0034 */ unsigned short SegmentAllocatorBackTraceIndex;
  /* 0x0036 */ unsigned short Reserved;
  /* 0x0038 */ struct _LIST_ENTRY UCRSegmentList;
} HEAP_SEGMENT, *PHEAP_SEGMENT; /* size: 0x0040 */


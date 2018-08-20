typedef struct _RTL_HEAP_WALK_ENTRY
{
  /* 0x0000 */ void* DataAddress;
  /* 0x0004 */ unsigned long DataSize;
  /* 0x0008 */ unsigned char OverheadBytes;
  /* 0x0009 */ unsigned char SegmentIndex;
  /* 0x000a */ unsigned short Flags;
  union
  {
    struct // _TAG_UNNAMED_39
    {
      /* 0x000c */ unsigned long Settable;
      /* 0x0010 */ unsigned short TagIndex;
      /* 0x0012 */ unsigned short AllocatorBackTraceIndex;
      /* 0x0014 */ unsigned long Reserved[2];
    } /* size: 0x0010 */ Block;
    struct // _TAG_UNNAMED_40
    {
      /* 0x000c */ unsigned long CommittedSize;
      /* 0x0010 */ unsigned long UnCommittedSize;
      /* 0x0014 */ void* FirstEntry;
      /* 0x0018 */ void* LastEntry;
    } /* size: 0x0010 */ Segment;
  }; /* size: 0x0010 */
} RTL_HEAP_WALK_ENTRY, *PRTL_HEAP_WALK_ENTRY; /* size: 0x001c */


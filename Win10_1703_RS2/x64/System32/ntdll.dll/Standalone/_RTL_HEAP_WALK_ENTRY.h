typedef struct _RTL_HEAP_WALK_ENTRY
{
  /* 0x0000 */ void* DataAddress;
  /* 0x0008 */ unsigned __int64 DataSize;
  /* 0x0010 */ unsigned char OverheadBytes;
  /* 0x0011 */ unsigned char SegmentIndex;
  /* 0x0012 */ unsigned short Flags;
  union
  {
    struct // _TAG_UNNAMED_88
    {
      /* 0x0018 */ unsigned __int64 Settable;
      /* 0x0020 */ unsigned short TagIndex;
      /* 0x0022 */ unsigned short AllocatorBackTraceIndex;
      /* 0x0024 */ unsigned long Reserved[2];
      /* 0x002c */ long __PADDING__[1];
    } /* size: 0x0018 */ Block;
    struct // _TAG_UNNAMED_89
    {
      /* 0x0018 */ unsigned long CommittedSize;
      /* 0x001c */ unsigned long UnCommittedSize;
      /* 0x0020 */ void* FirstEntry;
      /* 0x0028 */ void* LastEntry;
    } /* size: 0x0018 */ Segment;
  }; /* size: 0x0018 */
} RTL_HEAP_WALK_ENTRY, *PRTL_HEAP_WALK_ENTRY; /* size: 0x0030 */


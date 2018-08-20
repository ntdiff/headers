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


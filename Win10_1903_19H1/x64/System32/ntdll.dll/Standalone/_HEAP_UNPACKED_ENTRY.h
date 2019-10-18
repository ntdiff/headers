typedef struct _HEAP_UNPACKED_ENTRY
{
  /* 0x0000 */ void* PreviousBlockPrivateData;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned short Size;
      /* 0x000a */ unsigned char Flags;
      /* 0x000b */ unsigned char SmallTagIndex;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0008 */ unsigned long SubSegmentCode;
      /* 0x000c */ unsigned short PreviousSize;
      union
      {
        /* 0x000e */ unsigned char SegmentOffset;
        struct
        {
          /* 0x000e */ unsigned char LFHFlags;
          /* 0x000f */ unsigned char UnusedBytes;
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0008 */
    /* 0x0008 */ unsigned __int64 CompactHeader;
  }; /* size: 0x0008 */
} HEAP_UNPACKED_ENTRY, *PHEAP_UNPACKED_ENTRY; /* size: 0x0010 */


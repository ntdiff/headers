typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _HEAP_USERDATA_OFFSETS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short FirstAllocationOffset;
      /* 0x0002 */ unsigned short BlockStride;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long StrideAndOffset;
  }; /* size: 0x0004 */
} HEAP_USERDATA_OFFSETS, *PHEAP_USERDATA_OFFSETS; /* size: 0x0004 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _HEAP_USERDATA_HEADER
{
  union
  {
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SFreeListEntry;
    /* 0x0000 */ struct _HEAP_SUBSEGMENT* SubSegment;
  }; /* size: 0x0004 */
  /* 0x0004 */ void* Reserved;
  union
  {
    /* 0x0008 */ unsigned long SizeIndexAndPadding;
    struct
    {
      /* 0x0008 */ unsigned char SizeIndex;
      /* 0x0009 */ unsigned char GuardPagePresent;
      /* 0x000a */ unsigned short PaddingBytes;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned long Signature;
  /* 0x0010 */ struct _HEAP_USERDATA_OFFSETS EncodedOffsets;
  /* 0x0014 */ struct _RTL_BITMAP BusyBitmap;
  /* 0x001c */ unsigned long BitmapData[1];
} HEAP_USERDATA_HEADER, *PHEAP_USERDATA_HEADER; /* size: 0x0020 */


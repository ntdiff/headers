typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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

typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _HEAP_USERDATA_HEADER
{
  union
  {
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SFreeListEntry;
    /* 0x0000 */ struct _HEAP_SUBSEGMENT* SubSegment;
  }; /* size: 0x0008 */
  /* 0x0008 */ void* Reserved;
  union
  {
    /* 0x0010 */ unsigned long SizeIndexAndPadding;
    struct
    {
      /* 0x0010 */ unsigned char SizeIndex;
      /* 0x0011 */ unsigned char GuardPagePresent;
      /* 0x0012 */ unsigned short PaddingBytes;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long Signature;
  /* 0x0018 */ struct _HEAP_USERDATA_OFFSETS EncodedOffsets;
  /* 0x0020 */ struct _RTL_BITMAP_EX BusyBitmap;
  /* 0x0030 */ unsigned __int64 BitmapData[1];
} HEAP_USERDATA_HEADER, *PHEAP_USERDATA_HEADER; /* size: 0x0038 */


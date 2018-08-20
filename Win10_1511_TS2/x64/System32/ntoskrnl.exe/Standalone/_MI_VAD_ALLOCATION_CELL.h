typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _MI_VAD_ALLOCATION_CELL
{
  /* 0x0000 */ struct _RTL_BITMAP AllocationBitMap;
  /* 0x0010 */ unsigned long BitMapHint;
  /* 0x0014 */ unsigned long LastAllocationSize;
  /* 0x0018 */ unsigned long LastAllocationSizeHint;
  /* 0x001c */ unsigned long LowestBottomUpVadBit;
  /* 0x0020 */ void* LowestBottomUpAllocationAddress;
} MI_VAD_ALLOCATION_CELL, *PMI_VAD_ALLOCATION_CELL; /* size: 0x0028 */


typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _MI_NODE_FREE_PAGE_INFORMATION
{
  /* 0x0000 */ volatile unsigned long PageColorHand;
  /* 0x0008 */ unsigned __int64 FreeCount[2];
  /* 0x0018 */ unsigned __int64 FreeZeroCountByAttribute[4][2];
  /* 0x0080 */ struct _RTL_BITMAP_EX FreePageListHeadsBitmap[2][4][2];
  /* 0x0180 */ unsigned __int64 FreePageListHeadsBitmapBuffer[64];
  /* 0x0380 */ unsigned __int64 LargePageFreeCountHiLow[2][2];
  /* 0x03a0 */ unsigned __int64 LargePageCount[2][2][2];
  /* 0x03e0 */ struct _MMPFNLIST* LargePageEntries[4][2][2][2];
  /* 0x04e0 */ long __PADDING__[8];
} MI_NODE_FREE_PAGE_INFORMATION, *PMI_NODE_FREE_PAGE_INFORMATION; /* size: 0x0500 */


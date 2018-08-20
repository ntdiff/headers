typedef struct _MI_CFG_BITMAP_INFO
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0008 */ unsigned __int64 RegionSize;
  /* 0x0010 */ void* VadBaseAddress;
  /* 0x0018 */ struct _MMVAD* BitmapVad;
} MI_CFG_BITMAP_INFO, *PMI_CFG_BITMAP_INFO; /* size: 0x0020 */


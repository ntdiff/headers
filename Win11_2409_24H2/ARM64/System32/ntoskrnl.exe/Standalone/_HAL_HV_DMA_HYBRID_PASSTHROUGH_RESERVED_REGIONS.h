typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _HAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS
{
  /* 0x0000 */ unsigned __int64 UnitSizePages;
  /* 0x0008 */ struct _RTL_BITMAP ReservedUnitMap;
  /* 0x0018 */ unsigned long ReservedUnitMapBuffer[16];
} HAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS, *PHAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS; /* size: 0x0058 */


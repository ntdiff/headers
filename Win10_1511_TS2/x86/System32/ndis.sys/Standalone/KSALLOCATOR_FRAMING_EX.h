struct KS_COMPRESSION
{
  /* 0x0000 */ unsigned long RatioNumerator;
  /* 0x0004 */ unsigned long RatioDenominator;
  /* 0x0008 */ unsigned long RatioConstantMargin;
}; /* size: 0x000c */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct KS_FRAMING_RANGE
{
  /* 0x0000 */ unsigned long MinFrameSize;
  /* 0x0004 */ unsigned long MaxFrameSize;
  /* 0x0008 */ unsigned long Stepping;
}; /* size: 0x000c */

struct KS_FRAMING_RANGE_WEIGHTED
{
  /* 0x0000 */ struct KS_FRAMING_RANGE Range;
  /* 0x000c */ unsigned long InPlaceWeight;
  /* 0x0010 */ unsigned long NotInPlaceWeight;
}; /* size: 0x0014 */

struct KS_FRAMING_ITEM
{
  /* 0x0000 */ struct _GUID MemoryType;
  /* 0x0010 */ struct _GUID BusType;
  /* 0x0020 */ unsigned long MemoryFlags;
  /* 0x0024 */ unsigned long BusFlags;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ unsigned long Frames;
  /* 0x0030 */ unsigned long FileAlignment;
  /* 0x0034 */ unsigned long MemoryTypeWeight;
  /* 0x0038 */ struct KS_FRAMING_RANGE PhysicalRange;
  /* 0x0044 */ struct KS_FRAMING_RANGE_WEIGHTED FramingRange;
}; /* size: 0x0058 */

struct KSALLOCATOR_FRAMING_EX
{
  /* 0x0000 */ unsigned long CountItems;
  /* 0x0004 */ unsigned long PinFlags;
  /* 0x0008 */ struct KS_COMPRESSION OutputCompression;
  /* 0x0014 */ unsigned long PinWeight;
  /* 0x0018 */ struct KS_FRAMING_ITEM FramingItem[1];
}; /* size: 0x0070 */


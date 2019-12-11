struct KSTIME
{
  /* 0x0000 */ __int64 Time;
  /* 0x0008 */ unsigned long Numerator;
  /* 0x000c */ unsigned long Denominator;
}; /* size: 0x0010 */

struct KSSTREAM_HEADER
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long TypeSpecificFlags;
  /* 0x0008 */ struct KSTIME PresentationTime;
  /* 0x0018 */ __int64 Duration;
  /* 0x0020 */ unsigned long FrameExtent;
  /* 0x0024 */ unsigned long DataUsed;
  /* 0x0028 */ void* Data;
  /* 0x002c */ unsigned long OptionsFlags;
}; /* size: 0x0030 */


struct ARRAY_INFO
{
  /* 0x0000 */ long Dimension;
  /* 0x0008 */ unsigned long* BufferConformanceMark;
  /* 0x0010 */ unsigned long* BufferVarianceMark;
  /* 0x0018 */ unsigned long* MaxCountArray;
  /* 0x0020 */ unsigned long* OffsetArray;
  /* 0x0028 */ unsigned long* ActualCountArray;
}; /* size: 0x0030 */

struct NDR_POINTER_QUEUE_STATE
{
  /* 0x0008 */ class NDR_POINTER_QUEUE* pActiveQueue;
  /* 0x0010 */ struct ARRAY_INFO ArrayInfo;
}; /* size: 0x0040 */


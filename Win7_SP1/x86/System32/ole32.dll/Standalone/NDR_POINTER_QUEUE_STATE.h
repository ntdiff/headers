struct ARRAY_INFO
{
  /* 0x0000 */ long Dimension;
  /* 0x0004 */ unsigned long* BufferConformanceMark;
  /* 0x0008 */ unsigned long* BufferVarianceMark;
  /* 0x000c */ unsigned long* MaxCountArray;
  /* 0x0010 */ unsigned long* OffsetArray;
  /* 0x0014 */ unsigned long* ActualCountArray;
}; /* size: 0x0018 */

struct NDR_POINTER_QUEUE_STATE
{
  /* 0x0004 */ class NDR_POINTER_QUEUE* pActiveQueue;
  /* 0x0008 */ struct ARRAY_INFO ArrayInfo;
}; /* size: 0x0020 */


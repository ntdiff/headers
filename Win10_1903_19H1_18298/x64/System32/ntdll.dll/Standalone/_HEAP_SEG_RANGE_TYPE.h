typedef enum _HEAP_SEG_RANGE_TYPE
{
  HeapSegRangeUser = 0,
  HeapSegRangeInternal = 1,
  HeapSegRangeLFH = 2,
  HeapSegRangeVS = 3,
  HeapSegRangeTypeMax = 3,
} HEAP_SEG_RANGE_TYPE, *PHEAP_SEG_RANGE_TYPE;


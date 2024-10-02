typedef enum _HEAP_LFH_SUBSEGMENT_LOCATION
{
  HeapLfhAvailable = 0,
  HeapLfhFull = 1,
  HeapLfhFullToAvailable = 2,
  HeapLfhNoList = 3,
  HeapLfhLocationMax = 4,
} HEAP_LFH_SUBSEGMENT_LOCATION, *PHEAP_LFH_SUBSEGMENT_LOCATION;


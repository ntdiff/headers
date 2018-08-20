typedef struct _HEAP_STOP_ON_TAG
{
  union
  {
    /* 0x0000 */ unsigned long HeapAndTagIndex;
    struct
    {
      /* 0x0000 */ unsigned short TagIndex;
      /* 0x0002 */ unsigned short HeapIndex;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} HEAP_STOP_ON_TAG, *PHEAP_STOP_ON_TAG; /* size: 0x0004 */

typedef struct _HEAP_STOP_ON_VALUES
{
  /* 0x0000 */ unsigned long AllocAddress;
  /* 0x0004 */ struct _HEAP_STOP_ON_TAG AllocTag;
  /* 0x0008 */ unsigned long ReAllocAddress;
  /* 0x000c */ struct _HEAP_STOP_ON_TAG ReAllocTag;
  /* 0x0010 */ unsigned long FreeAddress;
  /* 0x0014 */ struct _HEAP_STOP_ON_TAG FreeTag;
} HEAP_STOP_ON_VALUES, *PHEAP_STOP_ON_VALUES; /* size: 0x0018 */


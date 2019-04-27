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


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
  /* 0x0000 */ unsigned __int64 AllocAddress;
  /* 0x0008 */ struct _HEAP_STOP_ON_TAG AllocTag;
  /* 0x0010 */ unsigned __int64 ReAllocAddress;
  /* 0x0018 */ struct _HEAP_STOP_ON_TAG ReAllocTag;
  /* 0x0020 */ unsigned __int64 FreeAddress;
  /* 0x0028 */ struct _HEAP_STOP_ON_TAG FreeTag;
  /* 0x002c */ long __PADDING__[1];
} HEAP_STOP_ON_VALUES, *PHEAP_STOP_ON_VALUES; /* size: 0x0030 */


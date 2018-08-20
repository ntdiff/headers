typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _HEAP_USERDATA_HEADER
{
  union
  {
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SFreeListEntry;
    /* 0x0000 */ struct _HEAP_SUBSEGMENT* SubSegment;
  }; /* size: 0x0004 */
  /* 0x0004 */ void* Reserved;
  /* 0x0008 */ unsigned long SizeIndex;
  /* 0x000c */ unsigned long Signature;
} HEAP_USERDATA_HEADER, *PHEAP_USERDATA_HEADER; /* size: 0x0010 */


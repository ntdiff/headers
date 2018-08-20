typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_USERDATA_HEADER
{
  union
  {
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SFreeListEntry;
    /* 0x0000 */ struct _HEAP_SUBSEGMENT* SubSegment;
  }; /* size: 0x0008 */
  /* 0x0008 */ void* Reserved;
  /* 0x0010 */ unsigned __int64 SizeIndex;
  /* 0x0018 */ unsigned __int64 Signature;
} HEAP_USERDATA_HEADER, *PHEAP_USERDATA_HEADER; /* size: 0x0020 */


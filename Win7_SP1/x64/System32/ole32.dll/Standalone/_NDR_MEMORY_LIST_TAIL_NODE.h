typedef struct _NDR_MEMORY_LIST_TAIL_NODE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long AllocationSize;
  /* 0x0008 */ void* ppPointer;
  /* 0x0010 */ struct _NDR_MEMORY_LIST_TAIL_NODE* pNextNode;
} NDR_MEMORY_LIST_TAIL_NODE, *PNDR_MEMORY_LIST_TAIL_NODE; /* size: 0x0018 */


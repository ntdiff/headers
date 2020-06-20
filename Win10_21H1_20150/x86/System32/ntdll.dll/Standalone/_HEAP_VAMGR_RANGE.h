typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _HEAP_VAMGR_RANGE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE RbNode;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned char Allocated : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned char Internal : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned char Standalone : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned char Spare0 : 5; /* bit position: 3 */
      }; /* bitfield */
      /* 0x0001 */ unsigned char AllocatorIndex;
      /* 0x0004 */ unsigned long OwnerCtx[2];
    }; /* size: 0x000a */
  }; /* size: 0x000c */
  union
  {
    /* 0x000c */ unsigned long SizeInChunks;
    struct
    {
      /* 0x000c */ unsigned short ChunkCount;
      /* 0x000e */ unsigned short PrevChunkCount;
    }; /* size: 0x0004 */
    /* 0x000c */ unsigned long Signature;
  }; /* size: 0x0004 */
} HEAP_VAMGR_RANGE, *PHEAP_VAMGR_RANGE; /* size: 0x0010 */


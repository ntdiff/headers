typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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
      /* 0x0008 */ unsigned __int64 OwnerCtx[2];
    }; /* size: 0x0012 */
  }; /* size: 0x0018 */
  union
  {
    /* 0x0018 */ unsigned __int64 SizeInChunks;
    struct
    {
      /* 0x0018 */ unsigned short ChunkCount;
      /* 0x001a */ unsigned short PrevChunkCount;
    }; /* size: 0x0004 */
    /* 0x0018 */ unsigned __int64 Signature;
  }; /* size: 0x0008 */
} HEAP_VAMGR_RANGE, *PHEAP_VAMGR_RANGE; /* size: 0x0020 */


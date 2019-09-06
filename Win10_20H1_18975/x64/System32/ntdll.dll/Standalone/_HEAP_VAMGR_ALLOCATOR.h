typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _HEAP_VAMGR_ALLOCATOR
{
  /* 0x0000 */ unsigned __int64 TreeLock;
  /* 0x0008 */ struct _RTL_RB_TREE FreeRanges;
  /* 0x0018 */ struct _HEAP_VAMGR_VASPACE* VaSpace;
  /* 0x0020 */ void* PartitionHandle;
  /* 0x0028 */ unsigned short ChunksPerRegion;
  /* 0x002a */ unsigned short RefCount;
  /* 0x002c */ unsigned char AllocatorIndex;
  /* 0x002d */ unsigned char NumaNode;
  struct /* bitfield */
  {
    /* 0x002e */ unsigned char LockType : 1; /* bit position: 0 */
    /* 0x002e */ unsigned char MemoryType : 2; /* bit position: 1 */
    /* 0x002e */ unsigned char ConstrainedVA : 1; /* bit position: 3 */
    /* 0x002e */ unsigned char AllowFreeHead : 1; /* bit position: 4 */
    /* 0x002e */ unsigned char Spare0 : 3; /* bit position: 5 */
  }; /* bitfield */
  /* 0x002f */ unsigned char Spare1;
} HEAP_VAMGR_ALLOCATOR, *PHEAP_VAMGR_ALLOCATOR; /* size: 0x0030 */


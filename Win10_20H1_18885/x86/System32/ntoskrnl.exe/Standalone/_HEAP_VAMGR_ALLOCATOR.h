typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _HEAP_VAMGR_ALLOCATOR
{
  /* 0x0000 */ unsigned long TreeLock;
  /* 0x0004 */ struct _RTL_RB_TREE FreeRanges;
  /* 0x000c */ struct _HEAP_VAMGR_VASPACE* VaSpace;
  /* 0x0010 */ void* PartitionHandle;
  /* 0x0014 */ unsigned short ChunksPerRegion;
  /* 0x0016 */ unsigned short RefCount;
  /* 0x0018 */ unsigned char AllocatorIndex;
  /* 0x0019 */ unsigned char NumaNode;
  struct /* bitfield */
  {
    /* 0x001a */ unsigned char LockType : 1; /* bit position: 0 */
    /* 0x001a */ unsigned char MemoryType : 2; /* bit position: 1 */
    /* 0x001a */ unsigned char ConstrainedVA : 1; /* bit position: 3 */
    /* 0x001a */ unsigned char AllowFreeHead : 1; /* bit position: 4 */
    /* 0x001a */ unsigned char Spare0 : 3; /* bit position: 5 */
  }; /* bitfield */
  /* 0x001b */ unsigned char Spare1;
} HEAP_VAMGR_ALLOCATOR, *PHEAP_VAMGR_ALLOCATOR; /* size: 0x001c */


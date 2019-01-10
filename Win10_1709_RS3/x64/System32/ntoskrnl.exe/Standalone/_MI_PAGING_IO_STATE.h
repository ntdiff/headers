typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _MI_PAGING_IO_STATE
{
  /* 0x0000 */ struct _RTL_AVL_TREE PageFileHead;
  /* 0x0008 */ volatile long PageFileHeadSpinLock;
  /* 0x000c */ long PrefetchSeekThreshold;
  /* 0x0010 */ union _SLIST_HEADER InPageSupportSListHead[2];
  /* 0x0030 */ unsigned char InPageSupportSListMinimum[2];
  /* 0x0034 */ unsigned long InPageSinglePages;
  /* 0x0038 */ volatile long DelayPageFaults;
  /* 0x003c */ unsigned long FileCompressionBoundary;
  /* 0x0040 */ unsigned char MdlsAdjusted;
  /* 0x0041 */ char __PADDING__[15];
} MI_PAGING_IO_STATE, *PMI_PAGING_IO_STATE; /* size: 0x0050 */


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
    } /* size: 0x0010 */ HeaderArm64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _MI_PAGING_IO_STATE
{
  /* 0x0000 */ struct _RTL_AVL_TREE PageFileHead;
  /* 0x0008 */ volatile long PageFileHeadSpinLock;
  /* 0x000c */ long PrefetchSeekThreshold;
  /* 0x0010 */ unsigned long InPageSinglePages;
  /* 0x0020 */ union _SLIST_HEADER InPageSupportSListHead[2];
  /* 0x0040 */ union _SLIST_HEADER ReservedInPageSupportSListHead[2];
  /* 0x0060 */ unsigned char InPageSupportSListMinimum[2];
  /* 0x0068 */ struct _MMINPAGE_SUPPORT* FirstReservedInPageBlock[2];
  /* 0x0078 */ struct _MMINPAGE_SUPPORT* LastReservedInPageBlock[2];
  /* 0x0088 */ struct _MMPTE* ReservedPtes;
  /* 0x0090 */ unsigned __int64 ReservedPtesLock;
  /* 0x0098 */ unsigned long ReservedPtesBitBuffer;
  /* 0x009c */ volatile long DelayPageFaults;
  /* 0x00a0 */ unsigned long FileCompressionBoundary;
  /* 0x00a4 */ unsigned char MdlsAdjusted;
  /* 0x00a5 */ char __PADDING__[11];
} MI_PAGING_IO_STATE, *PMI_PAGING_IO_STATE; /* size: 0x00b0 */


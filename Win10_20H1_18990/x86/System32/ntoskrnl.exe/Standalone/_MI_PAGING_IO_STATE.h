typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _MI_PAGING_IO_STATE
{
  /* 0x0000 */ struct _RTL_AVL_TREE PageFileHead;
  /* 0x0004 */ volatile long PageFileHeadSpinLock;
  /* 0x0008 */ long PrefetchSeekThreshold;
  /* 0x000c */ unsigned long InPageSinglePages;
  /* 0x0010 */ union _SLIST_HEADER InPageSupportSListHead[2];
  /* 0x0020 */ union _SLIST_HEADER ReservedInPageSupportSListHead[2];
  /* 0x0030 */ unsigned char InPageSupportSListMinimum[2];
  /* 0x0034 */ struct _MMINPAGE_SUPPORT* FirstReservedInPageBlock[2];
  /* 0x003c */ struct _MMINPAGE_SUPPORT* LastReservedInPageBlock[2];
  /* 0x0044 */ struct _MMPTE* ReservedPtes;
  /* 0x0048 */ unsigned long ReservedPtesLock;
  /* 0x004c */ unsigned long ReservedPtesBitBuffer;
  /* 0x0050 */ volatile long DelayPageFaults;
  /* 0x0054 */ unsigned long FileCompressionBoundary;
  /* 0x0058 */ unsigned char MdlsAdjusted;
  /* 0x0059 */ char __PADDING__[7];
} MI_PAGING_IO_STATE, *PMI_PAGING_IO_STATE; /* size: 0x0060 */


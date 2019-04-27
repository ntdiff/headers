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
  /* 0x0010 */ union _SLIST_HEADER InPageSupportSListHead[2];
  /* 0x0020 */ unsigned char InPageSupportSListMinimum[2];
  /* 0x0024 */ unsigned long InPageSinglePages;
  /* 0x0028 */ volatile long DelayPageFaults;
  /* 0x002c */ unsigned long FileCompressionBoundary;
  /* 0x0030 */ unsigned char MdlsAdjusted;
  /* 0x0031 */ char __PADDING__[7];
} MI_PAGING_IO_STATE, *PMI_PAGING_IO_STATE; /* size: 0x0038 */


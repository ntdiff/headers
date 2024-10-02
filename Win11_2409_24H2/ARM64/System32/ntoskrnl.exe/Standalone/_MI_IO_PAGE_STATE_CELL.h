typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _MI_IO_PAGE_STATE_CELL
{
  /* 0x0000 */ struct _RTL_AVL_TREE PfnRoot;
  /* 0x0008 */ volatile unsigned __int64 UnmappedNodeCount;
  /* 0x0010 */ volatile unsigned __int64 UnmappedHugeIoSpaceNodeCount;
  /* 0x0018 */ volatile unsigned __int64 TotalNodeCount;
  /* 0x0020 */ unsigned __int64 ResumePageForDeleteScans;
  /* 0x0028 */ long __PADDING__[22];
} MI_IO_PAGE_STATE_CELL, *PMI_IO_PAGE_STATE_CELL; /* size: 0x0080 */


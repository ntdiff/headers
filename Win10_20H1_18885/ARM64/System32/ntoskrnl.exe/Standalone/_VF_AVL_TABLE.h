typedef struct _RTL_BALANCED_LINKS
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS* Parent;
  /* 0x0008 */ struct _RTL_BALANCED_LINKS* LeftChild;
  /* 0x0010 */ struct _RTL_BALANCED_LINKS* RightChild;
  /* 0x0018 */ char Balance;
  /* 0x0019 */ unsigned char Reserved[3];
  /* 0x001c */ long __PADDING__[1];
} RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS; /* size: 0x0020 */

typedef struct _RTL_AVL_TABLE
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS BalancedRoot;
  /* 0x0020 */ void* OrderedPointer;
  /* 0x0028 */ unsigned long WhichOrderedElement;
  /* 0x002c */ unsigned long NumberGenericTableElements;
  /* 0x0030 */ unsigned long DepthOfTree;
  /* 0x0038 */ struct _RTL_BALANCED_LINKS* RestartKey;
  /* 0x0040 */ unsigned long DeleteCount;
  /* 0x0048 */ void* CompareRoutine /* function */;
  /* 0x0050 */ void* AllocateRoutine /* function */;
  /* 0x0058 */ void* FreeRoutine /* function */;
  /* 0x0060 */ void* TableContext;
} RTL_AVL_TABLE, *PRTL_AVL_TABLE; /* size: 0x0068 */

typedef struct _VF_AVL_TABLE
{
  /* 0x0000 */ struct _RTL_AVL_TABLE RtlTable;
  /* 0x0068 */ struct _VF_AVL_TREE_NODE* ReservedNode;
  /* 0x0070 */ void* NodeToFree;
  /* 0x0080 */ volatile long Lock;
  /* 0x0084 */ long __PADDING__[31];
} VF_AVL_TABLE, *PVF_AVL_TABLE; /* size: 0x0100 */


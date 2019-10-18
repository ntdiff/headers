typedef struct _RTL_BALANCED_LINKS
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS* Parent;
  /* 0x0004 */ struct _RTL_BALANCED_LINKS* LeftChild;
  /* 0x0008 */ struct _RTL_BALANCED_LINKS* RightChild;
  /* 0x000c */ char Balance;
  /* 0x000d */ unsigned char Reserved[3];
} RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS; /* size: 0x0010 */

typedef struct _RTL_AVL_TABLE
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS BalancedRoot;
  /* 0x0010 */ void* OrderedPointer;
  /* 0x0014 */ unsigned long WhichOrderedElement;
  /* 0x0018 */ unsigned long NumberGenericTableElements;
  /* 0x001c */ unsigned long DepthOfTree;
  /* 0x0020 */ struct _RTL_BALANCED_LINKS* RestartKey;
  /* 0x0024 */ unsigned long DeleteCount;
  /* 0x0028 */ void* CompareRoutine /* function */;
  /* 0x002c */ void* AllocateRoutine /* function */;
  /* 0x0030 */ void* FreeRoutine /* function */;
  /* 0x0034 */ void* TableContext;
} RTL_AVL_TABLE, *PRTL_AVL_TABLE; /* size: 0x0038 */

typedef struct _VF_AVL_TABLE
{
  /* 0x0000 */ struct _RTL_AVL_TABLE RtlTable;
  /* 0x0038 */ struct _VF_AVL_TREE_NODE* ReservedNode;
  /* 0x003c */ void* NodeToFree;
  /* 0x0040 */ volatile long Lock;
  /* 0x0044 */ long __PADDING__[15];
} VF_AVL_TABLE, *PVF_AVL_TABLE; /* size: 0x0080 */


typedef struct _VF_AVL_TREE_NODE
{
  /* 0x0000 */ void* p;
  /* 0x0004 */ unsigned long RangeSize;
} VF_AVL_TREE_NODE, *PVF_AVL_TREE_NODE; /* size: 0x0008 */

typedef struct _VF_AVL_TREE_NODE_EX
{
  /* 0x0000 */ struct _VF_AVL_TREE_NODE Base;
  /* 0x0008 */ unsigned long SessionId;
} VF_AVL_TREE_NODE_EX, *PVF_AVL_TREE_NODE_EX; /* size: 0x000c */


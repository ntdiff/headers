typedef struct _VF_AVL_TREE_NODE
{
  /* 0x0000 */ void* p;
  /* 0x0008 */ unsigned __int64 RangeSize;
} VF_AVL_TREE_NODE, *PVF_AVL_TREE_NODE; /* size: 0x0010 */

typedef struct _VF_AVL_TREE_NODE_EX
{
  /* 0x0000 */ struct _VF_AVL_TREE_NODE Base;
  /* 0x0010 */ unsigned long SessionId;
  /* 0x0014 */ long __PADDING__[1];
} VF_AVL_TREE_NODE_EX, *PVF_AVL_TREE_NODE_EX; /* size: 0x0018 */


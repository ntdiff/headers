typedef struct _MM_AVL_NODE
{
  union // _TAG_UNNAMED_34
  {
    union
    {
      /* 0x0000 */ long Balance : 2; /* bit position: 0 */
      /* 0x0000 */ struct _MM_AVL_NODE* Parent;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0004 */ struct _MM_AVL_NODE* LeftChild;
  /* 0x0008 */ struct _MM_AVL_NODE* RightChild;
} MM_AVL_NODE, *PMM_AVL_NODE; /* size: 0x000c */

typedef struct _MM_AVL_TABLE
{
  /* 0x0000 */ struct _MM_AVL_NODE BalancedRoot;
  struct /* bitfield */
  {
    /* 0x000c */ unsigned long DepthOfTree : 5; /* bit position: 0 */
    /* 0x000c */ unsigned long TableType : 3; /* bit position: 5 */
    /* 0x000c */ unsigned long NumberGenericTableElements : 24; /* bit position: 8 */
  }; /* bitfield */
  /* 0x0010 */ void* NodeHint;
  /* 0x0014 */ void* NodeFreeHint;
} MM_AVL_TABLE, *PMM_AVL_TABLE; /* size: 0x0018 */


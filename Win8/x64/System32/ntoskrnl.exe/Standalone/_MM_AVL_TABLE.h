typedef struct _MM_AVL_NODE
{
  union
  {
    union
    {
      /* 0x0000 */ __int64 Balance : 2; /* bit position: 0 */
      /* 0x0000 */ struct _MM_AVL_NODE* Parent;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  /* 0x0008 */ struct _MM_AVL_NODE* LeftChild;
  /* 0x0010 */ struct _MM_AVL_NODE* RightChild;
} MM_AVL_NODE, *PMM_AVL_NODE; /* size: 0x0018 */

typedef struct _MM_AVL_TABLE
{
  /* 0x0000 */ struct _MM_AVL_NODE BalancedRoot;
  struct /* bitfield */
  {
    /* 0x0018 */ unsigned __int64 DepthOfTree : 5; /* bit position: 0 */
    /* 0x0018 */ unsigned __int64 TableType : 3; /* bit position: 5 */
    /* 0x0018 */ unsigned __int64 NumberGenericTableElements : 56; /* bit position: 8 */
  }; /* bitfield */
  /* 0x0020 */ void* NodeHint;
  /* 0x0028 */ void* NodeFreeHint;
} MM_AVL_TABLE, *PMM_AVL_TABLE; /* size: 0x0030 */


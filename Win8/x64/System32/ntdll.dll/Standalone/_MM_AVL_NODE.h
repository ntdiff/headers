typedef struct _MM_AVL_NODE
{
  union // _TAG_UNNAMED_44
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


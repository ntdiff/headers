typedef struct _MMADDRESS_NODE
{
  union // _TAG_UNNAMED_8
  {
    union
    {
      /* 0x0000 */ __int64 Balance : 2; /* bit position: 0 */
      /* 0x0000 */ struct _MMADDRESS_NODE* Parent;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  /* 0x0008 */ struct _MMADDRESS_NODE* LeftChild;
  /* 0x0010 */ struct _MMADDRESS_NODE* RightChild;
  /* 0x0018 */ unsigned __int64 StartingVpn;
  /* 0x0020 */ unsigned __int64 EndingVpn;
} MMADDRESS_NODE, *PMMADDRESS_NODE; /* size: 0x0028 */

typedef struct _MM_AVL_TABLE
{
  /* 0x0000 */ struct _MMADDRESS_NODE BalancedRoot;
  struct /* bitfield */
  {
    /* 0x0028 */ unsigned __int64 DepthOfTree : 5; /* bit position: 0 */
    /* 0x0028 */ unsigned __int64 Unused : 3; /* bit position: 5 */
    /* 0x0028 */ unsigned __int64 NumberGenericTableElements : 56; /* bit position: 8 */
  }; /* bitfield */
  /* 0x0030 */ void* NodeHint;
  /* 0x0038 */ void* NodeFreeHint;
} MM_AVL_TABLE, *PMM_AVL_TABLE; /* size: 0x0040 */


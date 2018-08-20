typedef struct _MMADDRESS_NODE
{
  union // _TAG_UNNAMED_73
  {
    union
    {
      /* 0x0000 */ long Balance : 2; /* bit position: 0 */
      /* 0x0000 */ struct _MMADDRESS_NODE* Parent;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0004 */ struct _MMADDRESS_NODE* LeftChild;
  /* 0x0008 */ struct _MMADDRESS_NODE* RightChild;
  /* 0x000c */ unsigned long StartingVpn;
  /* 0x0010 */ unsigned long EndingVpn;
} MMADDRESS_NODE, *PMMADDRESS_NODE; /* size: 0x0014 */

typedef struct _MM_AVL_TABLE
{
  /* 0x0000 */ struct _MMADDRESS_NODE BalancedRoot;
  struct /* bitfield */
  {
    /* 0x0014 */ unsigned long DepthOfTree : 5; /* bit position: 0 */
    /* 0x0014 */ unsigned long Unused : 3; /* bit position: 5 */
    /* 0x0014 */ unsigned long NumberGenericTableElements : 24; /* bit position: 8 */
  }; /* bitfield */
  /* 0x0018 */ void* NodeHint;
  /* 0x001c */ void* NodeFreeHint;
} MM_AVL_TABLE, *PMM_AVL_TABLE; /* size: 0x0020 */


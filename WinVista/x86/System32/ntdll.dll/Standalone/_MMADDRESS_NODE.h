typedef struct _MMADDRESS_NODE
{
  union // _TAG_UNNAMED_8
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


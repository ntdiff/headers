typedef struct _RTL_BALANCED_LINKS
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS* Parent;
  /* 0x0004 */ struct _RTL_BALANCED_LINKS* LeftChild;
  /* 0x0008 */ struct _RTL_BALANCED_LINKS* RightChild;
  /* 0x000c */ char Balance;
  /* 0x000d */ unsigned char Reserved[3];
} RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS; /* size: 0x0010 */

typedef struct _KTMOBJECT_NAMESPACE_LINK
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS Links;
  /* 0x0010 */ unsigned char Expired;
  /* 0x0011 */ char __PADDING__[3];
} KTMOBJECT_NAMESPACE_LINK, *PKTMOBJECT_NAMESPACE_LINK; /* size: 0x0014 */


typedef struct _RTL_BALANCED_LINKS
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS* Parent;
  /* 0x0008 */ struct _RTL_BALANCED_LINKS* LeftChild;
  /* 0x0010 */ struct _RTL_BALANCED_LINKS* RightChild;
  /* 0x0018 */ char Balance;
  /* 0x0019 */ unsigned char Reserved[3];
  /* 0x001c */ long __PADDING__[1];
} RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS; /* size: 0x0020 */

typedef struct _RTL_AVL_ENTRY
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS BalancedLinks;
  /* 0x0020 */ __int64 UserData;
} RTL_AVL_ENTRY, *PRTL_AVL_ENTRY; /* size: 0x0028 */


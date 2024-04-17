typedef struct _RTL_SPLAY_LINKS
{
  /* 0x0000 */ struct _RTL_SPLAY_LINKS* Parent;
  /* 0x0008 */ struct _RTL_SPLAY_LINKS* LeftChild;
  /* 0x0010 */ struct _RTL_SPLAY_LINKS* RightChild;
} RTL_SPLAY_LINKS, *PRTL_SPLAY_LINKS; /* size: 0x0018 */

typedef struct _PREFIX_TABLE_ENTRY
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NameLength;
  /* 0x0008 */ struct _PREFIX_TABLE_ENTRY* NextPrefixTree;
  /* 0x0010 */ struct _RTL_SPLAY_LINKS Links;
  /* 0x0028 */ struct _STRING* Prefix;
} PREFIX_TABLE_ENTRY, *PPREFIX_TABLE_ENTRY; /* size: 0x0030 */


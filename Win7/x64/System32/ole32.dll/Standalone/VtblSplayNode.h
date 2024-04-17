typedef struct _RTL_SPLAY_LINKS
{
  /* 0x0000 */ struct _RTL_SPLAY_LINKS* Parent;
  /* 0x0008 */ struct _RTL_SPLAY_LINKS* LeftChild;
  /* 0x0010 */ struct _RTL_SPLAY_LINKS* RightChild;
} RTL_SPLAY_LINKS, *PRTL_SPLAY_LINKS; /* size: 0x0018 */

struct VtblSplayNode
{
  /* 0x0000 */ struct _RTL_SPLAY_LINKS SplayLinks;
  /* 0x0018 */ void* pvVtbl;
  /* 0x0020 */ unsigned long cRefs;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */


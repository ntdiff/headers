typedef struct _RTL_SPLAY_LINKS
{
  /* 0x0000 */ struct _RTL_SPLAY_LINKS* Parent;
  /* 0x0004 */ struct _RTL_SPLAY_LINKS* LeftChild;
  /* 0x0008 */ struct _RTL_SPLAY_LINKS* RightChild;
} RTL_SPLAY_LINKS, *PRTL_SPLAY_LINKS; /* size: 0x000c */

struct VtblSplayNode
{
  /* 0x0000 */ struct _RTL_SPLAY_LINKS SplayLinks;
  /* 0x000c */ void* pvVtbl;
  /* 0x0010 */ unsigned long cRefs;
}; /* size: 0x0014 */


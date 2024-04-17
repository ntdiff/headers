typedef struct _RTL_SPLAY_LINKS
{
  /* 0x0000 */ struct _RTL_SPLAY_LINKS* Parent;
  /* 0x0008 */ struct _RTL_SPLAY_LINKS* LeftChild;
  /* 0x0010 */ struct _RTL_SPLAY_LINKS* RightChild;
} RTL_SPLAY_LINKS, *PRTL_SPLAY_LINKS; /* size: 0x0018 */

struct ObjectSplayNode
{
  /* 0x0000 */ struct _RTL_SPLAY_LINKS SplayLinks;
  /* 0x0018 */ void* pvObject;
  /* 0x0020 */ void* pvVtblTracking;
}; /* size: 0x0028 */


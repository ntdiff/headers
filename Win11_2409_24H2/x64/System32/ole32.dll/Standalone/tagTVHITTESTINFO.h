struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagTVHITTESTINFO
{
  /* 0x0000 */ struct tagPOINT pt;
  /* 0x0008 */ unsigned int flags;
  /* 0x0010 */ struct _TREEITEM* hItem;
}; /* size: 0x0018 */


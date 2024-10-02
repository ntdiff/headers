struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagLVHITTESTINFO
{
  /* 0x0000 */ struct tagPOINT pt;
  /* 0x0008 */ unsigned int flags;
  /* 0x000c */ int iItem;
  /* 0x0010 */ int iSubItem;
  /* 0x0014 */ int iGroup;
}; /* size: 0x0018 */


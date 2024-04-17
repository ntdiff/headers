struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagALTTABINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ int cItems;
  /* 0x0008 */ int cColumns;
  /* 0x000c */ int cRows;
  /* 0x0010 */ int iColFocus;
  /* 0x0014 */ int iRowFocus;
  /* 0x0018 */ int cxItem;
  /* 0x001c */ int cyItem;
  /* 0x0020 */ struct tagPOINT ptStart;
}; /* size: 0x0028 */


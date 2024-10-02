struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagLVTILEVIEWINFO
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned long dwMask;
  /* 0x0008 */ unsigned long dwFlags;
  /* 0x000c */ struct tagSIZE sizeTile;
  /* 0x0014 */ int cLines;
  /* 0x0018 */ struct tagRECT rcLabelMargin;
}; /* size: 0x0028 */


struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

struct tagExtentInfo
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0004 */ unsigned long dwExtentMode;
  /* 0x0008 */ struct tagSIZE sizelProposed;
}; /* size: 0x0010 */


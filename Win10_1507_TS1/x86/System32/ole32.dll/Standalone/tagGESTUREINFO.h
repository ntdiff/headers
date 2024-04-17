struct tagPOINTS
{
  /* 0x0000 */ short x;
  /* 0x0002 */ short y;
}; /* size: 0x0004 */

struct tagGESTUREINFO
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ unsigned long dwID;
  /* 0x000c */ struct HWND__* hwndTarget;
  /* 0x0010 */ struct tagPOINTS ptsLocation;
  /* 0x0014 */ unsigned long dwInstanceID;
  /* 0x0018 */ unsigned long dwSequenceID;
  /* 0x0020 */ unsigned __int64 ullArguments;
  /* 0x0028 */ unsigned int cbExtraArgs;
  /* 0x002c */ long __PADDING__[1];
}; /* size: 0x0030 */


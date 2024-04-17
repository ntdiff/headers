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
  /* 0x0010 */ struct HWND__* hwndTarget;
  /* 0x0018 */ struct tagPOINTS ptsLocation;
  /* 0x001c */ unsigned long dwInstanceID;
  /* 0x0020 */ unsigned long dwSequenceID;
  /* 0x0028 */ unsigned __int64 ullArguments;
  /* 0x0030 */ unsigned int cbExtraArgs;
  /* 0x0034 */ long __PADDING__[1];
}; /* size: 0x0038 */


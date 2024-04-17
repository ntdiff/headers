struct tagPOINTS
{
  /* 0x0000 */ short x;
  /* 0x0002 */ short y;
}; /* size: 0x0004 */

struct tagGESTURENOTIFYSTRUCT
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ struct HWND__* hwndTarget;
  /* 0x000c */ struct tagPOINTS ptsLocation;
  /* 0x0010 */ unsigned long dwInstanceID;
}; /* size: 0x0014 */


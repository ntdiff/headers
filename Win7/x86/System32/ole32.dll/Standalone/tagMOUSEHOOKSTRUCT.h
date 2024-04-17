struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagMOUSEHOOKSTRUCT
{
  /* 0x0000 */ struct tagPOINT pt;
  /* 0x0008 */ struct HWND__* hwnd;
  /* 0x000c */ unsigned int wHitTestCode;
  /* 0x0010 */ unsigned long dwExtraInfo;
}; /* size: 0x0014 */


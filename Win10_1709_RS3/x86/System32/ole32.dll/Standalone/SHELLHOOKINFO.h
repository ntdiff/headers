struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct SHELLHOOKINFO
{
  /* 0x0000 */ struct HWND__* hwnd;
  /* 0x0004 */ struct tagRECT rc;
}; /* size: 0x0014 */


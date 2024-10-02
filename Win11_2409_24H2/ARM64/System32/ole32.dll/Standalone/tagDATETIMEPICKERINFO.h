struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagDATETIMEPICKERINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct tagRECT rcCheck;
  /* 0x0014 */ unsigned long stateCheck;
  /* 0x0018 */ struct tagRECT rcButton;
  /* 0x0028 */ unsigned long stateButton;
  /* 0x0030 */ struct HWND__* hwndEdit;
  /* 0x0038 */ struct HWND__* hwndUD;
  /* 0x0040 */ struct HWND__* hwndDropDown;
}; /* size: 0x0048 */


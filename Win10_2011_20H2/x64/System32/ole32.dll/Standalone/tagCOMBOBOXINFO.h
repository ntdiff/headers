struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagCOMBOBOXINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct tagRECT rcItem;
  /* 0x0014 */ struct tagRECT rcButton;
  /* 0x0024 */ unsigned long stateButton;
  /* 0x0028 */ struct HWND__* hwndCombo;
  /* 0x0030 */ struct HWND__* hwndItem;
  /* 0x0038 */ struct HWND__* hwndList;
}; /* size: 0x0040 */


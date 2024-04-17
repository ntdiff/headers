struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagGUITHREADINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long flags;
  /* 0x0008 */ struct HWND__* hwndActive;
  /* 0x0010 */ struct HWND__* hwndFocus;
  /* 0x0018 */ struct HWND__* hwndCapture;
  /* 0x0020 */ struct HWND__* hwndMenuOwner;
  /* 0x0028 */ struct HWND__* hwndMoveSize;
  /* 0x0030 */ struct HWND__* hwndCaret;
  /* 0x0038 */ struct tagRECT rcCaret;
}; /* size: 0x0048 */


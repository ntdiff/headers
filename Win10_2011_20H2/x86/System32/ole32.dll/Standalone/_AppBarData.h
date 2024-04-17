struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

typedef struct _AppBarData
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct HWND__* hWnd;
  /* 0x0008 */ unsigned int uCallbackMessage;
  /* 0x000c */ unsigned int uEdge;
  /* 0x0010 */ struct tagRECT rc;
  /* 0x0020 */ long lParam;
} AppBarData, *PAppBarData; /* size: 0x0024 */


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
  /* 0x0008 */ struct HWND__* hWnd;
  /* 0x0010 */ unsigned int uCallbackMessage;
  /* 0x0014 */ unsigned int uEdge;
  /* 0x0018 */ struct tagRECT rc;
  /* 0x0028 */ __int64 lParam;
} AppBarData, *PAppBarData; /* size: 0x0030 */


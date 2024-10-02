struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagDRAGLISTINFO
{
  /* 0x0000 */ unsigned int uNotification;
  /* 0x0008 */ struct HWND__* hWnd;
  /* 0x0010 */ struct tagPOINT ptCursor;
}; /* size: 0x0018 */


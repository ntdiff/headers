typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _NOTIFYICONDATAW
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct HWND__* hWnd;
  /* 0x0008 */ unsigned int uID;
  /* 0x000c */ unsigned int uFlags;
  /* 0x0010 */ unsigned int uCallbackMessage;
  /* 0x0014 */ struct HICON__* hIcon;
  /* 0x0018 */ wchar_t szTip[128];
  /* 0x0118 */ unsigned long dwState;
  /* 0x011c */ unsigned long dwStateMask;
  /* 0x0120 */ wchar_t szInfo[256];
  union
  {
    /* 0x0320 */ unsigned int uTimeout;
    /* 0x0320 */ unsigned int uVersion;
  }; /* size: 0x0004 */
  /* 0x0324 */ wchar_t szInfoTitle[64];
  /* 0x03a4 */ unsigned long dwInfoFlags;
  /* 0x03a8 */ struct _GUID guidItem;
  /* 0x03b8 */ struct HICON__* hBalloonIcon;
} NOTIFYICONDATAW, *PNOTIFYICONDATAW; /* size: 0x03bc */


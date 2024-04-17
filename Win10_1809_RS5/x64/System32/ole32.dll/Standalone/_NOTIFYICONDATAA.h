typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _NOTIFYICONDATAA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct HWND__* hWnd;
  /* 0x0010 */ unsigned int uID;
  /* 0x0014 */ unsigned int uFlags;
  /* 0x0018 */ unsigned int uCallbackMessage;
  /* 0x0020 */ struct HICON__* hIcon;
  /* 0x0028 */ char szTip[128];
  /* 0x00a8 */ unsigned long dwState;
  /* 0x00ac */ unsigned long dwStateMask;
  /* 0x00b0 */ char szInfo[256];
  union
  {
    /* 0x01b0 */ unsigned int uTimeout;
    /* 0x01b0 */ unsigned int uVersion;
  }; /* size: 0x0004 */
  /* 0x01b4 */ char szInfoTitle[64];
  /* 0x01f4 */ unsigned long dwInfoFlags;
  /* 0x01f8 */ struct _GUID guidItem;
  /* 0x0208 */ struct HICON__* hBalloonIcon;
} NOTIFYICONDATAA, *PNOTIFYICONDATAA; /* size: 0x0210 */


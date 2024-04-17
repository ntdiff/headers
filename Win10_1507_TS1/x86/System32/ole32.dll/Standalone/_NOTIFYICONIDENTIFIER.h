typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _NOTIFYICONIDENTIFIER
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct HWND__* hWnd;
  /* 0x0008 */ unsigned int uID;
  /* 0x000c */ struct _GUID guidItem;
} NOTIFYICONIDENTIFIER, *PNOTIFYICONIDENTIFIER; /* size: 0x001c */


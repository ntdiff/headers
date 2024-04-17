struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

typedef struct _DRAGINFOW
{
  /* 0x0000 */ unsigned int uSize;
  /* 0x0004 */ struct tagPOINT pt;
  /* 0x000c */ int fNC;
  /* 0x0010 */ wchar_t* lpFileList;
  /* 0x0018 */ unsigned long grfKeyState;
  /* 0x001c */ long __PADDING__[1];
} DRAGINFOW, *PDRAGINFOW; /* size: 0x0020 */


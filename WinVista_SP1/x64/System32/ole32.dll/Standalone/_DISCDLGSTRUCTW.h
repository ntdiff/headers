typedef struct _DISCDLGSTRUCTW
{
  /* 0x0000 */ unsigned long cbStructure;
  /* 0x0008 */ struct HWND__* hwndOwner;
  /* 0x0010 */ wchar_t* lpLocalName;
  /* 0x0018 */ wchar_t* lpRemoteName;
  /* 0x0020 */ unsigned long dwFlags;
  /* 0x0024 */ long __PADDING__[1];
} DISCDLGSTRUCTW, *PDISCDLGSTRUCTW; /* size: 0x0028 */


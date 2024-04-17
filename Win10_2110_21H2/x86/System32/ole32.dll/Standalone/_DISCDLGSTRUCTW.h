typedef struct _DISCDLGSTRUCTW
{
  /* 0x0000 */ unsigned long cbStructure;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ wchar_t* lpLocalName;
  /* 0x000c */ wchar_t* lpRemoteName;
  /* 0x0010 */ unsigned long dwFlags;
} DISCDLGSTRUCTW, *PDISCDLGSTRUCTW; /* size: 0x0014 */


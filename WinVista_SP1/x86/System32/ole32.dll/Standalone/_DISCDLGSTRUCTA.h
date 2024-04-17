typedef struct _DISCDLGSTRUCTA
{
  /* 0x0000 */ unsigned long cbStructure;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ char* lpLocalName;
  /* 0x000c */ char* lpRemoteName;
  /* 0x0010 */ unsigned long dwFlags;
} DISCDLGSTRUCTA, *PDISCDLGSTRUCTA; /* size: 0x0014 */


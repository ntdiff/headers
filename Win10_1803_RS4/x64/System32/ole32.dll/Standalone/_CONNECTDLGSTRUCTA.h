typedef struct _CONNECTDLGSTRUCTA
{
  /* 0x0000 */ unsigned long cbStructure;
  /* 0x0008 */ struct HWND__* hwndOwner;
  /* 0x0010 */ struct _NETRESOURCEA* lpConnRes;
  /* 0x0018 */ unsigned long dwFlags;
  /* 0x001c */ unsigned long dwDevNum;
} CONNECTDLGSTRUCTA, *PCONNECTDLGSTRUCTA; /* size: 0x0020 */


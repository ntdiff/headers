typedef struct _CONNECTDLGSTRUCTW
{
  /* 0x0000 */ unsigned long cbStructure;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ struct _NETRESOURCEW* lpConnRes;
  /* 0x000c */ unsigned long dwFlags;
  /* 0x0010 */ unsigned long dwDevNum;
} CONNECTDLGSTRUCTW, *PCONNECTDLGSTRUCTW; /* size: 0x0014 */


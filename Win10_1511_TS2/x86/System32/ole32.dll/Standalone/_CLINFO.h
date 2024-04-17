typedef struct _CLINFO
{
  /* 0x0000 */ struct HWND__* hwnd;
  /* 0x0004 */ int bnative;
  /* 0x0008 */ int format;
  /* 0x000c */ int options;
  /* 0x0010 */ int bdata;
  /* 0x0014 */ void* hdevInfo;
  /* 0x0018 */ int bnewDevInfo;
} CLINFO, *PCLINFO; /* size: 0x001c */


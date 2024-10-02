typedef struct _CLINFO
{
  /* 0x0000 */ struct HWND__* hwnd;
  /* 0x0008 */ int bnative;
  /* 0x000c */ int format;
  /* 0x0010 */ int options;
  /* 0x0014 */ int bdata;
  /* 0x0018 */ void* hdevInfo;
  /* 0x0020 */ int bnewDevInfo;
  /* 0x0024 */ long __PADDING__[1];
} CLINFO, *PCLINFO; /* size: 0x0028 */


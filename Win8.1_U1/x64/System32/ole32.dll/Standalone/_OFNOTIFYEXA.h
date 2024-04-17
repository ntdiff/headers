struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

typedef struct _OFNOTIFYEXA
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ struct tagOFNA* lpOFN;
  /* 0x0020 */ void* psf;
  /* 0x0028 */ void* pidl;
} OFNOTIFYEXA, *POFNOTIFYEXA; /* size: 0x0030 */


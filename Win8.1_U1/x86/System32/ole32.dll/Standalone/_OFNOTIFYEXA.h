struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0004 */ unsigned int idFrom;
  /* 0x0008 */ unsigned int code;
}; /* size: 0x000c */

typedef struct _OFNOTIFYEXA
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x000c */ struct tagOFNA* lpOFN;
  /* 0x0010 */ void* psf;
  /* 0x0014 */ void* pidl;
} OFNOTIFYEXA, *POFNOTIFYEXA; /* size: 0x0018 */


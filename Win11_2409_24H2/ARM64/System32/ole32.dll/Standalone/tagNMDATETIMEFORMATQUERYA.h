struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

struct tagNMDATETIMEFORMATQUERYA
{
  /* 0x0000 */ struct tagNMHDR nmhdr;
  /* 0x0018 */ const char* pszFormat;
  /* 0x0020 */ struct tagSIZE szMax;
}; /* size: 0x0028 */


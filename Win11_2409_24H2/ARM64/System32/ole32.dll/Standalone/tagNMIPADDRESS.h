struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagNMIPADDRESS
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ int iField;
  /* 0x001c */ int iValue;
}; /* size: 0x0020 */


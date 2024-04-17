struct tagEXCEPINFO
{
  /* 0x0000 */ unsigned short wCode;
  /* 0x0002 */ unsigned short wReserved;
  /* 0x0008 */ wchar_t* bstrSource;
  /* 0x0010 */ wchar_t* bstrDescription;
  /* 0x0018 */ wchar_t* bstrHelpFile;
  /* 0x0020 */ unsigned long dwHelpContext;
  /* 0x0028 */ void* pvReserved;
  /* 0x0030 */ void* pfnDeferredFillIn /* function */;
  /* 0x0038 */ long scode;
  /* 0x003c */ long __PADDING__[1];
}; /* size: 0x0040 */


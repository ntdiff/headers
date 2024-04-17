struct tagEXCEPINFO
{
  /* 0x0000 */ unsigned short wCode;
  /* 0x0002 */ unsigned short wReserved;
  /* 0x0004 */ wchar_t* bstrSource;
  /* 0x0008 */ wchar_t* bstrDescription;
  /* 0x000c */ wchar_t* bstrHelpFile;
  /* 0x0010 */ unsigned long dwHelpContext;
  /* 0x0014 */ void* pvReserved;
  /* 0x0018 */ void* pfnDeferredFillIn /* function */;
  /* 0x001c */ long scode;
}; /* size: 0x0020 */


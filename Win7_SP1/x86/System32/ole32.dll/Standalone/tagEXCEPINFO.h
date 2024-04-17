struct tagEXCEPINFO
{
  /* 0x0000 */ unsigned short wCode;
  /* 0x0002 */ unsigned short wReserved;
  /* 0x0004 */ unsigned short* bstrSource;
  /* 0x0008 */ unsigned short* bstrDescription;
  /* 0x000c */ unsigned short* bstrHelpFile;
  /* 0x0010 */ unsigned long dwHelpContext;
  /* 0x0014 */ void* pvReserved;
  /* 0x0018 */ void* pfnDeferredFillIn /* function */;
  /* 0x001c */ long scode;
}; /* size: 0x0020 */


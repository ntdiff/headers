struct SCARD_READERSTATEW
{
  /* 0x0000 */ const wchar_t* szReader;
  /* 0x0004 */ void* pvUserData;
  /* 0x0008 */ unsigned long dwCurrentState;
  /* 0x000c */ unsigned long dwEventState;
  /* 0x0010 */ unsigned long cbAtr;
  /* 0x0014 */ unsigned char rgbAtr[36];
}; /* size: 0x0038 */


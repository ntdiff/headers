struct SCARD_READERSTATEA
{
  /* 0x0000 */ const char* szReader;
  /* 0x0008 */ void* pvUserData;
  /* 0x0010 */ unsigned long dwCurrentState;
  /* 0x0014 */ unsigned long dwEventState;
  /* 0x0018 */ unsigned long cbAtr;
  /* 0x001c */ unsigned char rgbAtr[36];
}; /* size: 0x0040 */


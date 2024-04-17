struct tagFONTSIGNATURE
{
  /* 0x0000 */ unsigned long fsUsb[4];
  /* 0x0010 */ unsigned long fsCsb[2];
}; /* size: 0x0018 */

struct tagCHARSETINFO
{
  /* 0x0000 */ unsigned int ciCharset;
  /* 0x0004 */ unsigned int ciACP;
  /* 0x0008 */ struct tagFONTSIGNATURE fs;
}; /* size: 0x0020 */


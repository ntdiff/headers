typedef struct _cpinfoexW
{
  /* 0x0000 */ unsigned int MaxCharSize;
  /* 0x0004 */ unsigned char DefaultChar[2];
  /* 0x0006 */ unsigned char LeadByte[12];
  /* 0x0012 */ wchar_t UnicodeDefaultChar;
  /* 0x0014 */ unsigned int CodePage;
  /* 0x0018 */ wchar_t CodePageName[260];
} cpinfoexW, *PcpinfoexW; /* size: 0x0220 */


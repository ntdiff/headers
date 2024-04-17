typedef struct _CPTABLEINFO
{
  /* 0x0000 */ unsigned short CodePage;
  /* 0x0002 */ unsigned short MaximumCharacterSize;
  /* 0x0004 */ unsigned short DefaultChar;
  /* 0x0006 */ unsigned short UniDefaultChar;
  /* 0x0008 */ unsigned short TransDefaultChar;
  /* 0x000a */ unsigned short TransUniDefaultChar;
  /* 0x000c */ unsigned short DBCSCodePage;
  /* 0x000e */ unsigned char LeadByte[12];
  /* 0x0020 */ wchar_t* MultiByteTable;
  /* 0x0028 */ void* WideCharTable;
  /* 0x0030 */ wchar_t* DBCSRanges;
  /* 0x0038 */ wchar_t* DBCSOffsets;
} CPTABLEINFO, *PCPTABLEINFO; /* size: 0x0040 */


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
  /* 0x001c */ unsigned short* MultiByteTable;
  /* 0x0020 */ void* WideCharTable;
  /* 0x0024 */ unsigned short* DBCSRanges;
  /* 0x0028 */ unsigned short* DBCSOffsets;
} CPTABLEINFO, *PCPTABLEINFO; /* size: 0x002c */

typedef struct _NLSTABLEINFO
{
  /* 0x0000 */ struct _CPTABLEINFO OemTableInfo;
  /* 0x002c */ struct _CPTABLEINFO AnsiTableInfo;
  /* 0x0058 */ unsigned short* UpperCaseTable;
  /* 0x005c */ unsigned short* LowerCaseTable;
} NLSTABLEINFO, *PNLSTABLEINFO; /* size: 0x0060 */


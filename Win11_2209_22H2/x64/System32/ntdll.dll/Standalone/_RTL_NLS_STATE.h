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
  /* 0x0020 */ unsigned short* MultiByteTable;
  /* 0x0028 */ void* WideCharTable;
  /* 0x0030 */ unsigned short* DBCSRanges;
  /* 0x0038 */ unsigned short* DBCSOffsets;
} CPTABLEINFO, *PCPTABLEINFO; /* size: 0x0040 */

typedef struct _RTL_NLS_STATE
{
  /* 0x0000 */ struct _CPTABLEINFO DefaultAcpTableInfo;
  /* 0x0040 */ struct _CPTABLEINFO DefaultOemTableInfo;
  /* 0x0080 */ unsigned short* ActiveCodePageData;
  /* 0x0088 */ unsigned short* OemCodePageData;
  /* 0x0090 */ unsigned short* LeadByteInfo;
  /* 0x0098 */ unsigned short* OemLeadByteInfo;
  /* 0x00a0 */ unsigned short* CaseMappingData;
  /* 0x00a8 */ unsigned short* UnicodeUpcaseTable844;
  /* 0x00b0 */ unsigned short* UnicodeLowercaseTable844;
} RTL_NLS_STATE, *PRTL_NLS_STATE; /* size: 0x00b8 */


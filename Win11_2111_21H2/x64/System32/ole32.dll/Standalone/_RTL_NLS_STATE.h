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

typedef struct _RTL_NLS_STATE
{
  /* 0x0000 */ struct _CPTABLEINFO DefaultAcpTableInfo;
  /* 0x0040 */ struct _CPTABLEINFO DefaultOemTableInfo;
  /* 0x0080 */ wchar_t* ActiveCodePageData;
  /* 0x0088 */ wchar_t* OemCodePageData;
  /* 0x0090 */ wchar_t* LeadByteInfo;
  /* 0x0098 */ wchar_t* OemLeadByteInfo;
  /* 0x00a0 */ wchar_t* CaseMappingData;
  /* 0x00a8 */ wchar_t* UnicodeUpcaseTable844;
  /* 0x00b0 */ wchar_t* UnicodeLowercaseTable844;
} RTL_NLS_STATE, *PRTL_NLS_STATE; /* size: 0x00b8 */


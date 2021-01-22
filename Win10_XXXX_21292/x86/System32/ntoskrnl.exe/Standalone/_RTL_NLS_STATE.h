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
  /* 0x001c */ wchar_t* MultiByteTable;
  /* 0x0020 */ void* WideCharTable;
  /* 0x0024 */ wchar_t* DBCSRanges;
  /* 0x0028 */ wchar_t* DBCSOffsets;
} CPTABLEINFO, *PCPTABLEINFO; /* size: 0x002c */

typedef struct _RTL_NLS_STATE
{
  /* 0x0000 */ struct _CPTABLEINFO DefaultAcpTableInfo;
  /* 0x002c */ struct _CPTABLEINFO DefaultOemTableInfo;
  /* 0x0058 */ wchar_t* ActiveCodePageData;
  /* 0x005c */ wchar_t* OemCodePageData;
  /* 0x0060 */ wchar_t* LeadByteInfo;
  /* 0x0064 */ wchar_t* OemLeadByteInfo;
  /* 0x0068 */ wchar_t* CaseMappingData;
  /* 0x006c */ wchar_t* UnicodeUpcaseTable844;
  /* 0x0070 */ wchar_t* UnicodeLowercaseTable844;
} RTL_NLS_STATE, *PRTL_NLS_STATE; /* size: 0x0074 */


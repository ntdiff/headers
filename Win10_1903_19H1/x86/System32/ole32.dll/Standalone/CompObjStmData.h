typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct CompObjHdr
{
  /* 0x0000 */ unsigned long m_dwFirstDword;
  /* 0x0004 */ unsigned long m_dwOSVer;
  /* 0x0008 */ unsigned long m_unused;
  /* 0x000c */ struct _GUID m_clsClass;
}; /* size: 0x001c */

enum TXTTYPE
{
  TT_UNICODE = 0,
  TT_ANSI = 1,
};

class CompObjStmData
{
  /* 0x0000 */ struct CompObjHdr m_hdr;
  /* 0x001c */ unsigned long m_cchUserType;
  /* 0x0020 */ unsigned long m_cchProgID;
  /* 0x0024 */ unsigned long m_dwFormatTag;
  /* 0x0028 */ unsigned long m_ulFormatID;
  /* 0x002c */ wchar_t* m_pszOUserType;
  /* 0x0030 */ wchar_t* m_pszOProgID;
  /* 0x0034 */ char* m_pszAUserType;
  /* 0x0038 */ char* m_pszAProgID;
  /* 0x003c */ enum TXTTYPE ttClipString;
}; /* size: 0x0040 */


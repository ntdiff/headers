struct tagSTGMEDIUM
{
  /* 0x0000 */ unsigned long tymed;
  union
  {
    /* 0x0008 */ struct HBITMAP__* hBitmap;
    /* 0x0008 */ void* hMetaFilePict;
    /* 0x0008 */ struct HENHMETAFILE__* hEnhMetaFile;
    /* 0x0008 */ void* hGlobal;
    /* 0x0008 */ wchar_t* lpszFileName;
    /* 0x0008 */ struct IStream* pstm;
    /* 0x0008 */ struct IStorage* pstg;
  }; /* size: 0x0008 */
  /* 0x0010 */ struct IUnknown* pUnkForRelease;
}; /* size: 0x0018 */

typedef struct _SECURITY_ATTRIBUTES
{
  /* 0x0000 */ unsigned long nLength;
  /* 0x0008 */ void* lpSecurityDescriptor;
  /* 0x0010 */ int bInheritHandle;
  /* 0x0014 */ long __PADDING__[1];
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES; /* size: 0x0018 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _tagBINDINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ wchar_t* szExtraInfo;
  /* 0x0010 */ struct tagSTGMEDIUM stgmedData;
  /* 0x0028 */ unsigned long grfBindInfoF;
  /* 0x002c */ unsigned long dwBindVerb;
  /* 0x0030 */ wchar_t* szCustomVerb;
  /* 0x0038 */ unsigned long cbstgmedData;
  /* 0x003c */ unsigned long dwOptions;
  /* 0x0040 */ unsigned long dwOptionsFlags;
  /* 0x0044 */ unsigned long dwCodePage;
  /* 0x0048 */ struct _SECURITY_ATTRIBUTES securityAttributes;
  /* 0x0060 */ struct _GUID iid;
  /* 0x0070 */ struct IUnknown* pUnk;
  /* 0x0078 */ unsigned long dwReserved;
  /* 0x007c */ long __PADDING__[1];
} tagBINDINFO, *PtagBINDINFO; /* size: 0x0080 */


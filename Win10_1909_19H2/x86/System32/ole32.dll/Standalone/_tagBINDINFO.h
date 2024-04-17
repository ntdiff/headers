struct tagSTGMEDIUM
{
  /* 0x0000 */ unsigned long tymed;
  union
  {
    /* 0x0004 */ struct HBITMAP__* hBitmap;
    /* 0x0004 */ void* hMetaFilePict;
    /* 0x0004 */ struct HENHMETAFILE__* hEnhMetaFile;
    /* 0x0004 */ void* hGlobal;
    /* 0x0004 */ wchar_t* lpszFileName;
    /* 0x0004 */ struct IStream* pstm;
    /* 0x0004 */ struct IStorage* pstg;
  }; /* size: 0x0004 */
  /* 0x0008 */ struct IUnknown* pUnkForRelease;
}; /* size: 0x000c */

typedef struct _SECURITY_ATTRIBUTES
{
  /* 0x0000 */ unsigned long nLength;
  /* 0x0004 */ void* lpSecurityDescriptor;
  /* 0x0008 */ int bInheritHandle;
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES; /* size: 0x000c */

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
  /* 0x0004 */ wchar_t* szExtraInfo;
  /* 0x0008 */ struct tagSTGMEDIUM stgmedData;
  /* 0x0014 */ unsigned long grfBindInfoF;
  /* 0x0018 */ unsigned long dwBindVerb;
  /* 0x001c */ wchar_t* szCustomVerb;
  /* 0x0020 */ unsigned long cbstgmedData;
  /* 0x0024 */ unsigned long dwOptions;
  /* 0x0028 */ unsigned long dwOptionsFlags;
  /* 0x002c */ unsigned long dwCodePage;
  /* 0x0030 */ struct _SECURITY_ATTRIBUTES securityAttributes;
  /* 0x003c */ struct _GUID iid;
  /* 0x004c */ struct IUnknown* pUnk;
  /* 0x0050 */ unsigned long dwReserved;
} tagBINDINFO, *PtagBINDINFO; /* size: 0x0054 */


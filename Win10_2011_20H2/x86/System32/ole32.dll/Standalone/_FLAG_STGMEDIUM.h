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

typedef struct _FLAG_STGMEDIUM
{
  /* 0x0000 */ long ContextFlags;
  /* 0x0004 */ long fPassOwnership;
  /* 0x0008 */ struct tagSTGMEDIUM Stgmed;
} FLAG_STGMEDIUM, *PFLAG_STGMEDIUM; /* size: 0x0014 */


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

class CPunkForRelease
{
  /* 0x0004 */ unsigned long _cRefs;
  /* 0x0008 */ unsigned long _fTopLayerMFP : 1; /* bit position: 0 */
  /* 0x000c */ struct tagSTGMEDIUM _stgmed;
  /* 0x0018 */ struct IUnknown* _pUnkForRelease;
}; /* size: 0x001c */


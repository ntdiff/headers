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

class CPunkForRelease
{
  /* 0x0008 */ unsigned long _cRefs;
  /* 0x000c */ unsigned long _fTopLayerMFP : 1; /* bit position: 0 */
  /* 0x0010 */ struct tagSTGMEDIUM _stgmed;
  /* 0x0028 */ struct IUnknown* _pUnkForRelease;
}; /* size: 0x0030 */


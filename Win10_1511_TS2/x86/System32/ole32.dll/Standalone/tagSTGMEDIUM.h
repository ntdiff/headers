struct tagSTGMEDIUM
{
  /* 0x0000 */ unsigned long tymed;
  union
  {
    /* 0x0004 */ struct HBITMAP__* hBitmap;
    /* 0x0004 */ void* hMetaFilePict;
    /* 0x0004 */ struct HENHMETAFILE__* hEnhMetaFile;
    /* 0x0004 */ void* hGlobal;
    /* 0x0004 */ unsigned short* lpszFileName;
    /* 0x0004 */ struct IStream* pstm;
    /* 0x0004 */ struct IStorage* pstg;
  }; /* size: 0x0004 */
  /* 0x0008 */ struct IUnknown* pUnkForRelease;
}; /* size: 0x000c */


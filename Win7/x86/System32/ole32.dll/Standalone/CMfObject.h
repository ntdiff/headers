class CMfObject
{
  /* 0x0004 */ unsigned long m_ulRefs;
  /* 0x0008 */ struct HMETAFILE__* m_hPres;
  /* 0x000c */ struct _METAINFO* m_pMetaInfo;
  /* 0x0010 */ struct _METADC* m_pCurMdc;
  /* 0x0014 */ int m_fMetaDC;
  /* 0x0018 */ int m_nRecord;
  /* 0x001c */ HRESULT m_error;
  /* 0x0020 */ struct tagLOGPALETTE* m_pColorSet;
  /* 0x0024 */ int m_fConvert;
  /* 0x0028 */ void* m_pfnContinue /* function */;
  /* 0x002c */ unsigned long m_dwContinue;
  /* 0x0030 */ unsigned long m_dwAspect;
  /* 0x0034 */ unsigned long m_dwSize;
  /* 0x0038 */ long m_lWidth;
  /* 0x003c */ long m_lHeight;
  /* 0x0040 */ class CCacheNode* m_pCacheNode;
  /* 0x0044 */ struct HPALETTE__* m_hPalDCOriginal;
  /* 0x0048 */ struct HPALETTE__* m_hPalLast;
}; /* size: 0x004c */


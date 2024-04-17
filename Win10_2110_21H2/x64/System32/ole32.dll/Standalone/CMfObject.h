class CMfObject
{
  /* 0x0008 */ unsigned long m_ulRefs;
  /* 0x0010 */ struct HMETAFILE__* m_hPres;
  /* 0x0018 */ struct _METAINFO* m_pMetaInfo;
  /* 0x0020 */ struct _METADC* m_pCurMdc;
  /* 0x0028 */ int m_fMetaDC;
  /* 0x002c */ int m_nRecord;
  /* 0x0030 */ HRESULT m_error;
  /* 0x0038 */ struct tagLOGPALETTE* m_pColorSet;
  /* 0x0040 */ int m_fConvert;
  /* 0x0048 */ void* m_pfnContinue /* function */;
  /* 0x0050 */ unsigned __int64 m_dwContinue;
  /* 0x0058 */ unsigned long m_dwAspect;
  /* 0x005c */ unsigned long m_dwSize;
  /* 0x0060 */ long m_lWidth;
  /* 0x0064 */ long m_lHeight;
  /* 0x0068 */ class CCacheNode* m_pCacheNode;
  /* 0x0070 */ struct HPALETTE__* m_hPalDCOriginal;
  /* 0x0078 */ struct HPALETTE__* m_hPalLast;
}; /* size: 0x0080 */


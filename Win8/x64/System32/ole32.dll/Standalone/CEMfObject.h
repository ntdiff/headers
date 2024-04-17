class CEMfObject
{
  /* 0x0008 */ unsigned long m_ulRefs;
  /* 0x0010 */ struct HENHMETAFILE__* m_hPres;
  /* 0x0018 */ int m_fMetaDC;
  /* 0x001c */ int m_nRecord;
  /* 0x0020 */ HRESULT m_error;
  /* 0x0028 */ struct tagLOGPALETTE* m_pColorSet;
  /* 0x0030 */ void* m_pfnContinue /* function */;
  /* 0x0038 */ unsigned __int64 m_dwContinue;
  /* 0x0040 */ unsigned long m_dwAspect;
  /* 0x0044 */ unsigned long m_dwSize;
  /* 0x0048 */ long m_lWidth;
  /* 0x004c */ long m_lHeight;
  /* 0x0050 */ class CCacheNode* m_pCacheNode;
}; /* size: 0x0058 */


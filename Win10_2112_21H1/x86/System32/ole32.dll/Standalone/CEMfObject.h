class CEMfObject
{
  /* 0x0004 */ unsigned long m_ulRefs;
  /* 0x0008 */ struct HENHMETAFILE__* m_hPres;
  /* 0x000c */ int m_nRecord;
  /* 0x0010 */ HRESULT m_error;
  /* 0x0014 */ struct tagLOGPALETTE* m_pColorSet;
  /* 0x0018 */ void* m_pfnContinue /* function */;
  /* 0x001c */ unsigned long m_dwContinue;
  /* 0x0020 */ unsigned long m_dwAspect;
  /* 0x0024 */ unsigned long m_dwSize;
  /* 0x0028 */ long m_lWidth;
  /* 0x002c */ long m_lHeight;
  /* 0x0030 */ class CCacheNode* m_pCacheNode;
}; /* size: 0x0034 */


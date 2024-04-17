class CComSxSClassInfo
{
  /* 0x000c */ long m_cRef;
  /* 0x0010 */ long m_cLocks;
  /* 0x0014 */ long m_cLocksExternal;
  /* 0x0018 */ void* m_hActCtx;
  /* 0x001c */ const struct _ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION* m_pData;
  /* 0x0020 */ unsigned long m_ulDataLength;
  /* 0x0024 */ void* m_pSectionBase;
  /* 0x0028 */ unsigned long m_ulSectionLength;
  /* 0x002c */ wchar_t m_bufModulePath[260];
}; /* size: 0x0234 */


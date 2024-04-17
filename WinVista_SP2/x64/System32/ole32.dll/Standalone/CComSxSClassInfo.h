class CComSxSClassInfo
{
  /* 0x0018 */ long m_cRef;
  /* 0x001c */ long m_cLocks;
  /* 0x0020 */ long m_cLocksExternal;
  /* 0x0028 */ void* m_hActCtx;
  /* 0x0030 */ const struct _ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION* m_pData;
  /* 0x0038 */ unsigned long m_ulDataLength;
  /* 0x0040 */ void* m_pSectionBase;
  /* 0x0048 */ unsigned long m_ulSectionLength;
  /* 0x004c */ wchar_t m_bufModulePath[260];
}; /* size: 0x0258 */


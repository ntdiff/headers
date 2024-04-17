class CEndpointEntry
{
  /* 0x0000 */ class CEndpointEntry* m_pNext;
  /* 0x0008 */ unsigned short m_wTowerId;
  /* 0x0010 */ wchar_t* m_pszEndpoint;
  /* 0x0018 */ wchar_t* m_pszProtSeq;
  /* 0x0020 */ unsigned long m_dwFlags;
  /* 0x0024 */ int m_fProcessed;
}; /* size: 0x0028 */


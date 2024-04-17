class CEndpointEntry
{
  /* 0x0000 */ class CEndpointEntry* m_pNext;
  /* 0x0004 */ unsigned short m_wTowerId;
  /* 0x0008 */ wchar_t* m_pszEndpoint;
  /* 0x000c */ wchar_t* m_pszProtSeq;
  /* 0x0010 */ unsigned long m_dwFlags;
  /* 0x0014 */ int m_fProcessed;
}; /* size: 0x0018 */


class CPackagerMoniker
{
  /* 0x0004 */ unsigned long m_refs;
  /* 0x0008 */ wchar_t* m_szFile;
  /* 0x000c */ struct IMoniker* m_pmk;
  /* 0x0010 */ int m_fLink;
}; /* size: 0x0014 */


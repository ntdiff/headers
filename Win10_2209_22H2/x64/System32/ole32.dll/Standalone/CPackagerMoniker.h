class CPackagerMoniker
{
  /* 0x0008 */ unsigned long m_refs;
  /* 0x0010 */ wchar_t* m_szFile;
  /* 0x0018 */ struct IMoniker* m_pmk;
  /* 0x0020 */ int m_fLink;
}; /* size: 0x0028 */


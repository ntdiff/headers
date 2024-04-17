class CRefExportCount
{
  /* 0x0004 */ unsigned long m_cRefs;
  /* 0x0008 */ unsigned long m_cExportCount;
  /* 0x000c */ unsigned long m_IsZombie;
  /* 0x0010 */ unsigned long m_Status;
  /* 0x0014 */ struct IUnknown* m_pUnkOuter;
}; /* size: 0x0018 */


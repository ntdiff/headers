class CRgPv
{
  /* 0x0000 */ unsigned int m_cElems;
  union
  {
    /* 0x0004 */ void* m_pv;
    /* 0x0004 */ void** m_rgpv;
  }; /* size: 0x0004 */
}; /* size: 0x0008 */

class CNotifyCP
{
  /* 0x0004 */ long m_cRefs;
  /* 0x0008 */ struct IConnectionPointContainer* m_pcpc;
  /* 0x000c */ class CRgPv m_rgpv;
  /* 0x0014 */ long m_lFreezeCount;
}; /* size: 0x0018 */


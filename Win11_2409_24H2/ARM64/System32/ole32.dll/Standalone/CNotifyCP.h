class CRgPv
{
  /* 0x0000 */ unsigned int m_cElems;
  union
  {
    /* 0x0008 */ void* m_pv;
    /* 0x0008 */ void** m_rgpv;
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

class CNotifyCP
{
  /* 0x0008 */ long m_cRefs;
  /* 0x0010 */ struct IConnectionPointContainer* m_pcpc;
  /* 0x0018 */ class CRgPv m_rgpv;
  /* 0x0028 */ long m_lFreezeCount;
}; /* size: 0x0030 */


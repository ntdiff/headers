class CRgPv
{
  /* 0x0000 */ unsigned int m_cElems;
  union
  {
    /* 0x0008 */ void* m_pv;
    /* 0x0008 */ void** m_rgpv;
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

class CEnumConnectionsImpl
{
  /* 0x0008 */ long m_cRefs;
  /* 0x000c */ long m_curidx;
  /* 0x0010 */ class CRgPv m_rgpv;
}; /* size: 0x0020 */


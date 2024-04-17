class CMarshalImplPStream
{
  /* 0x0004 */ struct IPersistStream* m_pPS;
}; /* size: 0x0008 */

class CBaseMoniker
{
  /* 0x0008 */ unsigned long m_refs;
  /* 0x000c */ class CMarshalImplPStream m_marshal;
}; /* size: 0x0014 */


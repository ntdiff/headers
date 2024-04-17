class CMarshalImplPStream
{
  /* 0x0008 */ struct IPersistStream* m_pPS;
}; /* size: 0x0010 */

class CBaseMoniker
{
  /* 0x0010 */ unsigned long m_refs;
  /* 0x0018 */ class CMarshalImplPStream m_marshal;
}; /* size: 0x0028 */


class CCompositeMonikerEnum
{
  /* 0x0008 */ unsigned long m_refs;
  /* 0x0010 */ class CCompositeMoniker* m_pCM;
  /* 0x0018 */ int m_fForward;
  /* 0x0020 */ struct CCompositeMonikerEnum::se* m_pBase;
  /* 0x0028 */ struct CCompositeMonikerEnum::se* m_pTop;
  /* 0x0030 */ struct IMoniker* m_pNext;
}; /* size: 0x0038 */


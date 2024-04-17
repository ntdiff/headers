class CCompositeMonikerEnum
{
  /* 0x0004 */ unsigned long m_refs;
  /* 0x0008 */ class CCompositeMoniker* m_pCM;
  /* 0x000c */ int m_fForward;
  /* 0x0010 */ struct CCompositeMonikerEnum::se* m_pBase;
  /* 0x0014 */ struct CCompositeMonikerEnum::se* m_pTop;
  /* 0x0018 */ struct IMoniker* m_pNext;
}; /* size: 0x001c */


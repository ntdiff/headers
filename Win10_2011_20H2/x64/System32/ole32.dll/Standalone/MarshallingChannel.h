struct MarshallingChannel
{
  /* 0x0018 */ struct IMarshallingManager* m_pMarshaller;
  /* 0x0020 */ unsigned long m_dwDestContext;
  /* 0x0028 */ void* m_pvDestContext;
  /* 0x0030 */ struct IUnknown* m_punkOuter;
  /* 0x0038 */ long m_refs;
  /* 0x003c */ long __PADDING__[1];
}; /* size: 0x0040 */


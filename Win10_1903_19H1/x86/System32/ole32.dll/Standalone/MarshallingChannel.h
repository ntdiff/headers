struct MarshallingChannel
{
  /* 0x000c */ struct IMarshallingManager* m_pMarshaller;
  /* 0x0010 */ unsigned long m_dwDestContext;
  /* 0x0014 */ void* m_pvDestContext;
  /* 0x0018 */ struct IUnknown* m_punkOuter;
  /* 0x001c */ long m_refs;
}; /* size: 0x0020 */


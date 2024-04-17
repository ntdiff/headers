class Microsoft::WRL::ComPtr<IDataObject>
{
  /* 0x0000 */ struct IDataObject* ptr_;
}; /* size: 0x0008 */

class Windows::Internal::GitPtr
{
}; /* size: 0x0010 */

class CClipClientDataWrapper
{
  /* 0x0030 */ unsigned long m_refs;
  /* 0x0038 */ class Microsoft::WRL::ComPtr<IDataObject> m_pBrokerClipData;
  /* 0x0040 */ class Windows::Internal::GitPtr m_pGitInnerClipData;
  /* 0x0050 */ BOOL m_fLoaded;
}; /* size: 0x0058 */


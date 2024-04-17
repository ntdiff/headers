class Microsoft::WRL::ComPtr<IDataObject>
{
  /* 0x0000 */ struct IDataObject* ptr_;
}; /* size: 0x0004 */

class Windows::Internal::GitPtr
{
}; /* size: 0x000c */

class CClipClientDataWrapper
{
  /* 0x0014 */ unsigned long m_refs;
  /* 0x0018 */ class Microsoft::WRL::ComPtr<IDataObject> m_pBrokerClipData;
  /* 0x001c */ class Windows::Internal::GitPtr m_pGitInnerClipData;
}; /* size: 0x0028 */


class Microsoft::WRL::ComPtr<IDataObject>
{
  /* 0x0000 */ struct IDataObject* ptr_;
}; /* size: 0x0008 */

class Windows::Internal::GitPtr
{
}; /* size: 0x0010 */

class CClipClientDataWrapper
{
  /* 0x0028 */ unsigned long m_refs;
  /* 0x0030 */ class Microsoft::WRL::ComPtr<IDataObject> m_pBrokerClipData;
  /* 0x0038 */ class Windows::Internal::GitPtr m_pGitInnerClipData;
}; /* size: 0x0048 */


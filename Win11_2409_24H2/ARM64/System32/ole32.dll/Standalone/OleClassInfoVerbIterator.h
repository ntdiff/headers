class wil::com_ptr_t<IMrtResourceManager,wil::err_returncode_policy>
{
  /* 0x0000 */ struct IMrtResourceManager* m_ptr;
}; /* size: 0x0008 */

class wil::com_ptr_t<IResourceContext,wil::err_returncode_policy>
{
  /* 0x0000 */ struct IResourceContext* m_ptr;
}; /* size: 0x0008 */

class wil::com_ptr_t<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,wil::err_returncode_policy>
{
  /* 0x0000 */ struct Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>* m_ptr;
}; /* size: 0x0008 */

class OleClassInfoVerbIterator
{
  /* 0x0010 */ class wil::com_ptr_t<IMrtResourceManager,wil::err_returncode_policy> m_resourceManager;
  /* 0x0018 */ class wil::com_ptr_t<IResourceContext,wil::err_returncode_policy> m_resourceContext;
  /* 0x0020 */ class wil::com_ptr_t<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,wil::err_returncode_policy> m_verbIterator;
  /* 0x0028 */ unsigned int m_verbCount;
}; /* size: 0x0030 */


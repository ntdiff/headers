class wil::com_ptr_t<IMrtResourceManager,wil::err_returncode_policy>
{
  /* 0x0000 */ struct IMrtResourceManager* m_ptr;
}; /* size: 0x0008 */

class wil::com_ptr_t<IResourceContext,wil::err_returncode_policy>
{
  /* 0x0000 */ struct IResourceContext* m_ptr;
}; /* size: 0x0008 */

class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (__cdecl*)(HSTRING__ *),&WindowsDeleteString,wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t> > >
{
}; /* size: 0x0008 */

class OleClassInfoVerb
{
  /* 0x0010 */ class wil::com_ptr_t<IMrtResourceManager,wil::err_returncode_policy> m_resourceManager;
  /* 0x0018 */ class wil::com_ptr_t<IResourceContext,wil::err_returncode_policy> m_resourceContext;
  /* 0x0020 */ long m_id;
  /* 0x0028 */ class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (__cdecl*)(HSTRING__ *),&WindowsDeleteString,wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t> > > m_nameStringOrResourceReference;
  /* 0x0030 */ unsigned long m_flags;
  /* 0x0034 */ unsigned long m_attributes;
}; /* size: 0x0038 */


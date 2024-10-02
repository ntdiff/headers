class RegistryKey
{
  union
  {
    /* 0x0000 */ const HRESULT NotFound;
    /* 0x0000 */ const HRESULT InsufficientBuffer;
    /* 0x0000 */ const HRESULT InvalidData;
    /* 0x0000 */ const HRESULT UnsupportedType;
    /* 0x0000 */ const HRESULT NoMoreItems;
    /* 0x0000 */ const HRESULT NameCollision;
    /* 0x0000 */ const HRESULT ErrorMoreData;
    /* 0x0000 */ const HRESULT KeyDeleted;
    /* 0x0000 */ const HRESULT AccessDenied;
    /* 0x0000 */ struct HKEY__* volatile _hkey;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (__cdecl*)(HSTRING__ *),&WindowsDeleteString,wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t> > >
{
}; /* size: 0x0008 */

class RegistryVerb
{
  /* 0x0010 */ long m_id;
  /* 0x0018 */ class RegistryKey m_verbKey;
  /* 0x0020 */ class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (__cdecl*)(HSTRING__ *),&WindowsDeleteString,wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t> > > m_name;
  /* 0x0028 */ unsigned long m_flags;
  /* 0x002c */ unsigned long m_attributes;
}; /* size: 0x0030 */


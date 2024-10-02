class wil::com_ptr_t<IMrtResourceManager,wil::err_returncode_policy>
{
  /* 0x0000 */ struct IMrtResourceManager* m_ptr;
}; /* size: 0x0008 */

class wil::com_ptr_t<IResourceContext,wil::err_returncode_policy>
{
  /* 0x0000 */ struct IResourceContext* m_ptr;
}; /* size: 0x0008 */

class wil::com_ptr_t<IComProgIdIterator,wil::err_returncode_policy>
{
  /* 0x0000 */ struct IComProgIdIterator* m_ptr;
}; /* size: 0x0008 */

class InsertableCandidateIterator
{
  /* 0x0010 */ class wil::com_ptr_t<IMrtResourceManager,wil::err_returncode_policy> m_resourceManager;
  /* 0x0018 */ class wil::com_ptr_t<IResourceContext,wil::err_returncode_policy> m_resourceContext;
  /* 0x0020 */ class wil::com_ptr_t<IComProgIdIterator,wil::err_returncode_policy> m_progIdIterator;
}; /* size: 0x0028 */


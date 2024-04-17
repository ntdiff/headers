typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class wil::com_ptr_t<IOleClassInfo,wil::err_returncode_policy>
{
  /* 0x0000 */ struct IOleClassInfo* m_ptr;
}; /* size: 0x0008 */

class wil::com_ptr_t<IMrtResourceManager,wil::err_returncode_policy>
{
  /* 0x0000 */ struct IMrtResourceManager* m_ptr;
}; /* size: 0x0008 */

class wil::com_ptr_t<IResourceContext,wil::err_returncode_policy>
{
  /* 0x0000 */ struct IResourceContext* m_ptr;
}; /* size: 0x0008 */

class OleClassInfoInsertableCandidate
{
  /* 0x0010 */ struct _GUID m_classId;
  /* 0x0020 */ class wil::com_ptr_t<IOleClassInfo,wil::err_returncode_policy> m_oleClassInfo;
  /* 0x0028 */ class wil::com_ptr_t<IMrtResourceManager,wil::err_returncode_policy> m_resourceManager;
  /* 0x0030 */ class wil::com_ptr_t<IResourceContext,wil::err_returncode_policy> m_resourceContext;
  /* 0x0038 */ BOOL m_insertable;
  /* 0x0039 */ BOOL m_isControl;
}; /* size: 0x0040 */


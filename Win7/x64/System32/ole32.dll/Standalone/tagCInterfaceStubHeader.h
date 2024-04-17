struct tagCInterfaceStubHeader
{
  /* 0x0000 */ const struct _GUID* piid;
  /* 0x0008 */ const struct _MIDL_SERVER_INFO_* pServerInfo;
  /* 0x0010 */ unsigned long DispatchTableCount;
  /* 0x0018 */ void* const* pDispatchTable /* function */;
}; /* size: 0x0020 */


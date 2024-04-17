struct tagCInterfaceStubHeader
{
  /* 0x0000 */ const struct _GUID* piid;
  /* 0x0004 */ const struct _MIDL_SERVER_INFO_* pServerInfo;
  /* 0x0008 */ unsigned long DispatchTableCount;
  /* 0x000c */ void* const* pDispatchTable /* function */;
}; /* size: 0x0010 */


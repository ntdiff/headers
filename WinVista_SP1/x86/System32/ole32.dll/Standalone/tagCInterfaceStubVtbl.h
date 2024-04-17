struct tagCInterfaceStubHeader
{
  /* 0x0000 */ const struct _GUID* piid;
  /* 0x0004 */ const struct _MIDL_SERVER_INFO_* pServerInfo;
  /* 0x0008 */ unsigned long DispatchTableCount;
  /* 0x000c */ void* const* pDispatchTable /* function */;
}; /* size: 0x0010 */

struct IRpcStubBufferVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* Connect /* function */;
  /* 0x0010 */ void* Disconnect /* function */;
  /* 0x0014 */ void* Invoke /* function */;
  /* 0x0018 */ void* IsIIDSupported /* function */;
  /* 0x001c */ void* CountRefs /* function */;
  /* 0x0020 */ void* DebugServerQueryInterface /* function */;
  /* 0x0024 */ void* DebugServerRelease /* function */;
}; /* size: 0x0028 */

struct tagCInterfaceStubVtbl
{
  /* 0x0000 */ struct tagCInterfaceStubHeader header;
  /* 0x0010 */ struct IRpcStubBufferVtbl Vtbl;
}; /* size: 0x0038 */


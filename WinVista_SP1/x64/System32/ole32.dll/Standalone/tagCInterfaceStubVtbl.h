struct tagCInterfaceStubHeader
{
  /* 0x0000 */ const struct _GUID* piid;
  /* 0x0008 */ const struct _MIDL_SERVER_INFO_* pServerInfo;
  /* 0x0010 */ unsigned long DispatchTableCount;
  /* 0x0018 */ void* const* pDispatchTable /* function */;
}; /* size: 0x0020 */

struct IRpcStubBufferVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* Connect /* function */;
  /* 0x0020 */ void* Disconnect /* function */;
  /* 0x0028 */ void* Invoke /* function */;
  /* 0x0030 */ void* IsIIDSupported /* function */;
  /* 0x0038 */ void* CountRefs /* function */;
  /* 0x0040 */ void* DebugServerQueryInterface /* function */;
  /* 0x0048 */ void* DebugServerRelease /* function */;
}; /* size: 0x0050 */

struct tagCInterfaceStubVtbl
{
  /* 0x0000 */ struct tagCInterfaceStubHeader header;
  /* 0x0020 */ struct IRpcStubBufferVtbl Vtbl;
}; /* size: 0x0070 */


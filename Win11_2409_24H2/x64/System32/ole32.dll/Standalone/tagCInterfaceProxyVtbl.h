struct tagCInterfaceProxyHeader
{
  /* 0x0000 */ const void* pStublessProxyInfo;
  /* 0x0008 */ const struct _GUID* piid;
}; /* size: 0x0010 */

struct tagCInterfaceProxyVtbl
{
  /* 0x0000 */ struct tagCInterfaceProxyHeader header;
  /* 0x0010 */ void** Vtbl /* zero-length array */;
}; /* size: 0x0010 */


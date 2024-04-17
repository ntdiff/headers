struct tagCInterfaceProxyHeader
{
  /* 0x0000 */ const struct _GUID* piid;
}; /* size: 0x0008 */

struct tagCInterfaceProxyVtbl
{
  /* 0x0000 */ struct tagCInterfaceProxyHeader header;
  /* 0x0008 */ void** Vtbl /* zero-length array */;
}; /* size: 0x0008 */


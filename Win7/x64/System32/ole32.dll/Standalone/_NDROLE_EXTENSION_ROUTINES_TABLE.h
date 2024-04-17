typedef struct _NDROLE_EXTENSION_ROUTINES_TABLE
{
  /* 0x0000 */ void* NdrExtGetCallMethod /* function */;
  /* 0x0008 */ void* NdrExtGetServerObject /* function */;
  /* 0x0010 */ void* NdrExtStubInitialize /* function */;
  /* 0x0018 */ void* NdrExtStubGetBuffer /* function */;
  /* 0x0020 */ void* NdrExtSetErrorStatus /* function */;
  /* 0x0028 */ void* NdrExtInterfacePointerBufferSize /* function */;
  /* 0x0030 */ void* NdrExtProxyInitialize /* function */;
  /* 0x0038 */ void* NdrExtFreeInterfacePointer /* function */;
  /* 0x0040 */ void* NdrExtInterfacePointerMemorySize /* function */;
  /* 0x0048 */ void* NdrExtInterfacePointerMarshall /* function */;
  /* 0x0050 */ void* NdrExtInterfacePointerUnmarshall /* function */;
  /* 0x0058 */ void* NdrExtGetUDTFormat /* function */;
  /* 0x0060 */ void* NdrExtProxyGetBuffer /* function */;
  /* 0x0068 */ void* NdrExtProxySendReceive /* function */;
  /* 0x0070 */ void* NdrExtFreeBuffer /* function */;
  /* 0x0078 */ void* NdrExtGetComProtocolVersion /* function */;
  /* 0x0080 */ void* Ndr64ExtInterfacePointerBufferSize /* function */;
  /* 0x0088 */ void* Ndr64ExtInterfacePointerMemorySize /* function */;
  /* 0x0090 */ void* Ndr64ExtInterfacePointerMarshall /* function */;
  /* 0x0098 */ void* Ndr64ExtInterfacePointerUnmarshall /* function */;
  /* 0x00a0 */ void* Ndr64ExtProxyInitialize /* function */;
  /* 0x00a8 */ void* NdrExtSetupClientInterface /* function */;
  /* 0x00b0 */ void* NdrExtNegotiateTransferSyntax /* function */;
} NDROLE_EXTENSION_ROUTINES_TABLE, *PNDROLE_EXTENSION_ROUTINES_TABLE; /* size: 0x00b8 */


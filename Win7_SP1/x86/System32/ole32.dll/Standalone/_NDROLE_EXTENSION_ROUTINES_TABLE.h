typedef struct _NDROLE_EXTENSION_ROUTINES_TABLE
{
  /* 0x0000 */ void* NdrExtGetCallMethod /* function */;
  /* 0x0004 */ void* NdrExtGetServerObject /* function */;
  /* 0x0008 */ void* NdrExtStubInitialize /* function */;
  /* 0x000c */ void* NdrExtStubGetBuffer /* function */;
  /* 0x0010 */ void* NdrExtSetErrorStatus /* function */;
  /* 0x0014 */ void* NdrExtInterfacePointerBufferSize /* function */;
  /* 0x0018 */ void* NdrExtProxyInitialize /* function */;
  /* 0x001c */ void* NdrExtFreeInterfacePointer /* function */;
  /* 0x0020 */ void* NdrExtInterfacePointerMemorySize /* function */;
  /* 0x0024 */ void* NdrExtInterfacePointerMarshall /* function */;
  /* 0x0028 */ void* NdrExtInterfacePointerUnmarshall /* function */;
  /* 0x002c */ void* NdrExtGetUDTFormat /* function */;
  /* 0x0030 */ void* NdrExtProxyGetBuffer /* function */;
  /* 0x0034 */ void* NdrExtProxySendReceive /* function */;
  /* 0x0038 */ void* NdrExtFreeBuffer /* function */;
  /* 0x003c */ void* NdrExtGetComProtocolVersion /* function */;
} NDROLE_EXTENSION_ROUTINES_TABLE, *PNDROLE_EXTENSION_ROUTINES_TABLE; /* size: 0x0040 */


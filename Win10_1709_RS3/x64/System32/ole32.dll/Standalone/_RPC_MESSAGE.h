typedef struct _RPC_MESSAGE
{
  /* 0x0000 */ void* Handle;
  /* 0x0008 */ unsigned long DataRepresentation;
  /* 0x0010 */ void* Buffer;
  /* 0x0018 */ unsigned int BufferLength;
  /* 0x001c */ unsigned int ProcNum;
  /* 0x0020 */ struct _RPC_SYNTAX_IDENTIFIER* TransferSyntax;
  /* 0x0028 */ void* RpcInterfaceInformation;
  /* 0x0030 */ void* ReservedForRuntime;
  /* 0x0038 */ void* ManagerEpv;
  /* 0x0040 */ void* ImportContext;
  /* 0x0048 */ unsigned long RpcFlags;
  /* 0x004c */ long __PADDING__[1];
} RPC_MESSAGE, *PRPC_MESSAGE; /* size: 0x0050 */


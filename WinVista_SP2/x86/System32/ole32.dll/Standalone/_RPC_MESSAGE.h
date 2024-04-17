typedef struct _RPC_MESSAGE
{
  /* 0x0000 */ void* Handle;
  /* 0x0004 */ unsigned long DataRepresentation;
  /* 0x0008 */ void* Buffer;
  /* 0x000c */ unsigned int BufferLength;
  /* 0x0010 */ unsigned int ProcNum;
  /* 0x0014 */ struct _RPC_SYNTAX_IDENTIFIER* TransferSyntax;
  /* 0x0018 */ void* RpcInterfaceInformation;
  /* 0x001c */ void* ReservedForRuntime;
  /* 0x0020 */ void* ManagerEpv;
  /* 0x0024 */ void* ImportContext;
  /* 0x0028 */ unsigned long RpcFlags;
} RPC_MESSAGE, *PRPC_MESSAGE; /* size: 0x002c */


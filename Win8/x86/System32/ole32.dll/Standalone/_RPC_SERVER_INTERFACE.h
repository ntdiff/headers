typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RPC_VERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
} RPC_VERSION, *PRPC_VERSION; /* size: 0x0004 */

typedef struct _RPC_SYNTAX_IDENTIFIER
{
  /* 0x0000 */ struct _GUID SyntaxGUID;
  /* 0x0010 */ struct _RPC_VERSION SyntaxVersion;
} RPC_SYNTAX_IDENTIFIER, *PRPC_SYNTAX_IDENTIFIER; /* size: 0x0014 */

typedef struct _RPC_SERVER_INTERFACE
{
  /* 0x0000 */ unsigned int Length;
  /* 0x0004 */ struct _RPC_SYNTAX_IDENTIFIER InterfaceId;
  /* 0x0018 */ struct _RPC_SYNTAX_IDENTIFIER TransferSyntax;
  /* 0x002c */ struct RPC_DISPATCH_TABLE* DispatchTable;
  /* 0x0030 */ unsigned int RpcProtseqEndpointCount;
  /* 0x0034 */ struct _RPC_PROTSEQ_ENDPOINT* RpcProtseqEndpoint;
  /* 0x0038 */ void* DefaultManagerEpv;
  /* 0x003c */ const void* InterpreterInfo;
  /* 0x0040 */ unsigned int Flags;
} RPC_SERVER_INTERFACE, *PRPC_SERVER_INTERFACE; /* size: 0x0044 */


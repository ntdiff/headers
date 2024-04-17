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

typedef struct _MIDL_SYNTAX_INFO
{
  /* 0x0000 */ struct _RPC_SYNTAX_IDENTIFIER TransferSyntax;
  /* 0x0018 */ struct RPC_DISPATCH_TABLE* DispatchTable;
  /* 0x0020 */ const unsigned char* ProcString;
  /* 0x0028 */ const unsigned short* FmtStringOffset;
  /* 0x0030 */ const unsigned char* TypeString;
  /* 0x0038 */ const void* aUserMarshalQuadruple;
  /* 0x0040 */ const struct _MIDL_INTERFACE_METHOD_PROPERTIES* pMethodProperties;
  /* 0x0048 */ unsigned __int64 pReserved2;
} MIDL_SYNTAX_INFO, *PMIDL_SYNTAX_INFO; /* size: 0x0050 */


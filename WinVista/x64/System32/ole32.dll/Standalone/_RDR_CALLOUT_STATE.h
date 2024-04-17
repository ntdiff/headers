typedef enum _RPC_HTTP_REDIRECTOR_STAGE
{
  RPCHTTP_RS_REDIRECT = 1,
  RPCHTTP_RS_ACCESS_1 = 2,
  RPCHTTP_RS_SESSION = 3,
  RPCHTTP_RS_ACCESS_2 = 4,
  RPCHTTP_RS_INTERFACE = 5,
} RPC_HTTP_REDIRECTOR_STAGE, *PRPC_HTTP_REDIRECTOR_STAGE;

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RPC_C_OPT_METADATA_DESCRIPTOR
{
  /* 0x0000 */ unsigned long BufferSize;
  /* 0x0008 */ char* Buffer;
} RPC_C_OPT_METADATA_DESCRIPTOR, *PRPC_C_OPT_METADATA_DESCRIPTOR; /* size: 0x0010 */

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

typedef struct _RDR_CALLOUT_STATE
{
  /* 0x0000 */ long LastError;
  /* 0x0008 */ void* LastEEInfo;
  /* 0x0010 */ enum _RPC_HTTP_REDIRECTOR_STAGE LastCalledStage;
  /* 0x0018 */ unsigned short* ServerName;
  /* 0x0020 */ unsigned short* ServerPort;
  /* 0x0028 */ unsigned short* RemoteUser;
  /* 0x0030 */ unsigned short* AuthType;
  /* 0x0038 */ unsigned char ResourceTypePresent;
  /* 0x0039 */ unsigned char MetadataPresent;
  /* 0x003a */ unsigned char SessionIdPresent;
  /* 0x003b */ unsigned char InterfacePresent;
  /* 0x003c */ struct _GUID ResourceType;
  /* 0x0050 */ struct _RPC_C_OPT_METADATA_DESCRIPTOR Metadata;
  /* 0x0060 */ struct _GUID SessionId;
  /* 0x0070 */ struct _RPC_SYNTAX_IDENTIFIER Interface;
  /* 0x0088 */ void* CertContext;
} RDR_CALLOUT_STATE, *PRDR_CALLOUT_STATE; /* size: 0x0090 */


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
  /* 0x0018 */ wchar_t* ServerName;
  /* 0x0020 */ wchar_t* ServerPort;
  /* 0x0028 */ wchar_t* RemoteUser;
  /* 0x0030 */ wchar_t* AuthType;
  /* 0x0038 */ unsigned char ResourceTypePresent;
  /* 0x0039 */ unsigned char SessionIdPresent;
  /* 0x003a */ unsigned char InterfacePresent;
  /* 0x003c */ struct _GUID ResourceType;
  /* 0x004c */ struct _GUID SessionId;
  /* 0x005c */ struct _RPC_SYNTAX_IDENTIFIER Interface;
  /* 0x0070 */ void* CertContext;
} RDR_CALLOUT_STATE, *PRDR_CALLOUT_STATE; /* size: 0x0078 */


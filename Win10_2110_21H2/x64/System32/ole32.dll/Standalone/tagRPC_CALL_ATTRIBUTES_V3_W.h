enum tagRpcCallClientLocality
{
  rcclInvalid = 0,
  rcclLocal = 1,
  rcclRemote = 2,
  rcclClientUnknownLocality = 3,
};

enum tagRpcCallType
{
  rctInvalid = 0,
  rctNormal = 1,
  rctTraining = 2,
  rctGuaranteed = 3,
};

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagRPC_CALL_ATTRIBUTES_V3_W
{
  /* 0x0000 */ unsigned int Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long ServerPrincipalNameBufferLength;
  /* 0x0010 */ wchar_t* ServerPrincipalName;
  /* 0x0018 */ unsigned long ClientPrincipalNameBufferLength;
  /* 0x0020 */ wchar_t* ClientPrincipalName;
  /* 0x0028 */ unsigned long AuthenticationLevel;
  /* 0x002c */ unsigned long AuthenticationService;
  /* 0x0030 */ int NullSession;
  /* 0x0034 */ int KernelModeCaller;
  /* 0x0038 */ unsigned long ProtocolSequence;
  /* 0x003c */ enum tagRpcCallClientLocality IsClientLocal;
  /* 0x0040 */ void* ClientPID;
  /* 0x0048 */ unsigned long CallStatus;
  /* 0x004c */ enum tagRpcCallType CallType;
  /* 0x0050 */ struct _RPC_CALL_LOCAL_ADDRESS_V1* CallLocalAddress;
  /* 0x0058 */ unsigned short OpNum;
  /* 0x005c */ struct _GUID InterfaceUuid;
  /* 0x006c */ unsigned long ClientIdentifierBufferLength;
  /* 0x0070 */ unsigned char* ClientIdentifier;
}; /* size: 0x0078 */


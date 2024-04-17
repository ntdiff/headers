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
  /* 0x000c */ unsigned short* ServerPrincipalName;
  /* 0x0010 */ unsigned long ClientPrincipalNameBufferLength;
  /* 0x0014 */ unsigned short* ClientPrincipalName;
  /* 0x0018 */ unsigned long AuthenticationLevel;
  /* 0x001c */ unsigned long AuthenticationService;
  /* 0x0020 */ int NullSession;
  /* 0x0024 */ int KernelModeCaller;
  /* 0x0028 */ unsigned long ProtocolSequence;
  /* 0x002c */ enum tagRpcCallClientLocality IsClientLocal;
  /* 0x0030 */ void* ClientPID;
  /* 0x0034 */ unsigned long CallStatus;
  /* 0x0038 */ enum tagRpcCallType CallType;
  /* 0x003c */ struct _RPC_CALL_LOCAL_ADDRESS_V1* CallLocalAddress;
  /* 0x0040 */ unsigned short OpNum;
  /* 0x0044 */ struct _GUID InterfaceUuid;
  /* 0x0054 */ unsigned long ClientIdentifierBufferLength;
  /* 0x0058 */ unsigned char* ClientIdentifier;
}; /* size: 0x005c */


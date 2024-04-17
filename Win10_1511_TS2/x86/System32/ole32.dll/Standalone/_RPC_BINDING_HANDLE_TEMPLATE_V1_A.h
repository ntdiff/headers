typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RPC_BINDING_HANDLE_TEMPLATE_V1_A
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long ProtocolSequence;
  /* 0x000c */ unsigned char* NetworkAddress;
  /* 0x0010 */ unsigned char* StringEndpoint;
  union
  {
    /* 0x0014 */ unsigned char* Reserved;
  } /* size: 0x0004 */ u1;
  /* 0x0018 */ struct _GUID ObjectUuid;
} RPC_BINDING_HANDLE_TEMPLATE_V1_A, *PRPC_BINDING_HANDLE_TEMPLATE_V1_A; /* size: 0x0028 */


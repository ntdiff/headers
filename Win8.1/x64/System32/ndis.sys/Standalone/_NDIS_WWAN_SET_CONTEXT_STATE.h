typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _WWAN_ACTIVATION_COMMAND
{
  WwanActivationCommandDeactivate = 0,
  WwanActivationCommandActivate = 1,
  WwanActivationCommandMax = 2,
} WWAN_ACTIVATION_COMMAND, *PWWAN_ACTIVATION_COMMAND;

typedef enum _WWAN_COMPRESSION
{
  WwanCompressionNone = 0,
  WwanCompressionEnable = 1,
  WwanCompressionMax = 2,
} WWAN_COMPRESSION, *PWWAN_COMPRESSION;

typedef enum _WWAN_AUTH_PROTOCOL
{
  WwanAuthProtocolNone = 0,
  WwanAuthProtocolPap = 1,
  WwanAuthProtocolChap = 2,
  WwanAuthProtocolMsChapV2 = 3,
  WwanAuthProtocolMax = 4,
} WWAN_AUTH_PROTOCOL, *PWWAN_AUTH_PROTOCOL;

typedef enum _WWAN_IP_TYPE
{
  WwanIPTypeDefault = 0,
  WwanIPTypeIPv4 = 1,
  WwanIPTypeIPv6 = 2,
  WwanIPTypeIpv4v6 = 3,
} WWAN_IP_TYPE, *PWWAN_IP_TYPE;

typedef struct _WWAN_SET_CONTEXT_STATE
{
  /* 0x0000 */ unsigned long ConnectionId;
  /* 0x0004 */ enum _WWAN_ACTIVATION_COMMAND ActivationCommand;
  /* 0x0008 */ wchar_t AccessString[101];
  /* 0x00d2 */ wchar_t UserName[256];
  /* 0x02d2 */ wchar_t Password[256];
  /* 0x04d4 */ enum _WWAN_COMPRESSION Compression;
  /* 0x04d8 */ enum _WWAN_AUTH_PROTOCOL AuthType;
  /* 0x04dc */ enum _WWAN_IP_TYPE IPType;
} WWAN_SET_CONTEXT_STATE, *PWWAN_SET_CONTEXT_STATE; /* size: 0x04e0 */

typedef struct _NDIS_WWAN_SET_CONTEXT_STATE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _WWAN_SET_CONTEXT_STATE SetContextState;
} NDIS_WWAN_SET_CONTEXT_STATE, *PNDIS_WWAN_SET_CONTEXT_STATE; /* size: 0x04e4 */


typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _WWAN_CONTEXT_TYPE
{
  WwanContextTypeNone = 0,
  WwanContextTypeInternet = 1,
  WwanContextTypeVpn = 2,
  WwanContextTypeVoice = 3,
  WwanContextTypeVideoShare = 4,
  WwanContextTypeCustom = 5,
  WwanContextTypePurchase = 6,
  WwanContextTypeMms = 7,
  WwanContextTypeIms = 8,
  WwanContextTypeAdmin = 9,
  WwanContextTypeApp = 10,
  WwanContextTypeXcap = 11,
  WwanContextTypeTethering = 12,
  WwanContextTypeEmergencyCall = 13,
  WwanContextTypeLteAttach = 14,
  WwanContextTypeMax = 15,
} WWAN_CONTEXT_TYPE, *PWWAN_CONTEXT_TYPE;

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
  WwanAuthProtocolAuto = 4,
  WwanAuthProtocolMax = 5,
} WWAN_AUTH_PROTOCOL, *PWWAN_AUTH_PROTOCOL;

typedef struct _WWAN_SET_CONTEXT
{
  /* 0x0000 */ unsigned long ContextId;
  /* 0x0004 */ enum _WWAN_CONTEXT_TYPE ContextType;
  /* 0x0008 */ wchar_t AccessString[101];
  /* 0x00d2 */ wchar_t UserName[256];
  /* 0x02d2 */ wchar_t Password[256];
  /* 0x04d4 */ enum _WWAN_COMPRESSION Compression;
  /* 0x04d8 */ enum _WWAN_AUTH_PROTOCOL AuthType;
  /* 0x04dc */ wchar_t ProviderId[7];
  /* 0x04ea */ char __PADDING__[2];
} WWAN_SET_CONTEXT, *PWWAN_SET_CONTEXT; /* size: 0x04ec */

typedef struct _NDIS_WWAN_SET_PROVISIONED_CONTEXT
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _WWAN_SET_CONTEXT ProvisionedContext;
} NDIS_WWAN_SET_PROVISIONED_CONTEXT, *PNDIS_WWAN_SET_PROVISIONED_CONTEXT; /* size: 0x04f0 */


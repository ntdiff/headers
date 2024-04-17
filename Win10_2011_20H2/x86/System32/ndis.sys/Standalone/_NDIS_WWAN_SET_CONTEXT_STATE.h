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
  WwanActivationCommandCancel = 2,
  WwanActivationCommandMax = 3,
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
  WwanAuthProtocolAuto = 4,
  WwanAuthProtocolMax = 5,
} WWAN_AUTH_PROTOCOL, *PWWAN_AUTH_PROTOCOL;

typedef enum _WWAN_IP_TYPE
{
  WwanIPTypeDefault = 0,
  WwanIPTypeIPv4 = 1,
  WwanIPTypeIPv6 = 2,
  WwanIPTypeIpv4v6 = 3,
  WwanIPTypeXlat = 4,
  WwanSessionTypeEthernet = 5,
  WwanSessionTypeUnstructured = 6,
  WwanSessionTypeMax = 7,
} WWAN_IP_TYPE, *PWWAN_IP_TYPE;

typedef enum _WWAN_PSMEDIA_PREFERENCE
{
  WwanPsMediaPreferenceNone = 0,
  WwanPsMediaPreferenceCellularOnly = 1,
  WwanPsMediaPreferenceCellularPreferred = 2,
  WwanPsMediaPreferenceWiFiOnly = 3,
  WwanPsMediaPreferenceWiFiPreferred = 4,
  WwanPsMediaPreferenceMax = 5,
} WWAN_PSMEDIA_PREFERENCE, *PWWAN_PSMEDIA_PREFERENCE;

typedef enum _WWAN_CONFIGURATION_SOURCE
{
  WwanUserProvisioned = 0,
  WwanAdminProvisioned = 1,
  WwanOperatorProvisioned = 2,
  WwanDeviceProvisioned = 3,
  WwanModemProvisioned = 4,
  WwanModemOperatorProvisioned = 5,
  WwanMaxProvisionSource = 6,
} WWAN_CONFIGURATION_SOURCE, *PWWAN_CONFIGURATION_SOURCE;

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
  /* 0x04e0 */ enum _WWAN_PSMEDIA_PREFERENCE MediaPreference;
  /* 0x04e4 */ enum _WWAN_CONFIGURATION_SOURCE ConnectionMediaSource;
} WWAN_SET_CONTEXT_STATE, *PWWAN_SET_CONTEXT_STATE; /* size: 0x04e8 */

typedef struct _NDIS_WWAN_SET_CONTEXT_STATE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _WWAN_SET_CONTEXT_STATE SetContextState;
} NDIS_WWAN_SET_CONTEXT_STATE, *PNDIS_WWAN_SET_CONTEXT_STATE; /* size: 0x04ec */


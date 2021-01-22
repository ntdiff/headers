typedef struct _NDIS_802_11_SSID
{
  /* 0x0000 */ unsigned long SsidLength;
  /* 0x0004 */ unsigned char Ssid[32];
} NDIS_802_11_SSID, *PNDIS_802_11_SSID; /* size: 0x0024 */

typedef enum _NDIS_802_11_NETWORK_TYPE
{
  Ndis802_11FH = 0,
  Ndis802_11DS = 1,
  Ndis802_11OFDM5 = 2,
  Ndis802_11OFDM24 = 3,
  Ndis802_11Automode = 4,
  Ndis802_11NetworkTypeMax = 5,
} NDIS_802_11_NETWORK_TYPE, *PNDIS_802_11_NETWORK_TYPE;

typedef struct _NDIS_802_11_CONFIGURATION_FH
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long HopPattern;
  /* 0x0008 */ unsigned long HopSet;
  /* 0x000c */ unsigned long DwellTime;
} NDIS_802_11_CONFIGURATION_FH, *PNDIS_802_11_CONFIGURATION_FH; /* size: 0x0010 */

typedef struct _NDIS_802_11_CONFIGURATION
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long BeaconPeriod;
  /* 0x0008 */ unsigned long ATIMWindow;
  /* 0x000c */ unsigned long DSConfig;
  /* 0x0010 */ struct _NDIS_802_11_CONFIGURATION_FH FHConfig;
} NDIS_802_11_CONFIGURATION, *PNDIS_802_11_CONFIGURATION; /* size: 0x0020 */

typedef enum _NDIS_802_11_NETWORK_INFRASTRUCTURE
{
  Ndis802_11IBSS = 0,
  Ndis802_11Infrastructure = 1,
  Ndis802_11AutoUnknown = 2,
  Ndis802_11InfrastructureMax = 3,
} NDIS_802_11_NETWORK_INFRASTRUCTURE, *PNDIS_802_11_NETWORK_INFRASTRUCTURE;

typedef struct _NDIS_WLAN_BSSID_EX
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned char MacAddress[6];
  /* 0x000a */ unsigned char Reserved[2];
  /* 0x000c */ struct _NDIS_802_11_SSID Ssid;
  /* 0x0030 */ unsigned long Privacy;
  /* 0x0034 */ long Rssi;
  /* 0x0038 */ enum _NDIS_802_11_NETWORK_TYPE NetworkTypeInUse;
  /* 0x003c */ struct _NDIS_802_11_CONFIGURATION Configuration;
  /* 0x005c */ enum _NDIS_802_11_NETWORK_INFRASTRUCTURE InfrastructureMode;
  /* 0x0060 */ unsigned char SupportedRates[16];
  /* 0x0070 */ unsigned long IELength;
  /* 0x0074 */ unsigned char IEs[1];
  /* 0x0075 */ char __PADDING__[3];
} NDIS_WLAN_BSSID_EX, *PNDIS_WLAN_BSSID_EX; /* size: 0x0078 */

typedef struct _NDIS_802_11_BSSID_LIST_EX
{
  /* 0x0000 */ unsigned long NumberOfItems;
  /* 0x0004 */ struct _NDIS_WLAN_BSSID_EX Bssid[1];
} NDIS_802_11_BSSID_LIST_EX, *PNDIS_802_11_BSSID_LIST_EX; /* size: 0x007c */


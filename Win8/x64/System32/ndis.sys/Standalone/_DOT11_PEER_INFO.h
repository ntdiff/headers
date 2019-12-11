typedef enum _DOT11_AUTH_ALGORITHM
{
  DOT11_AUTH_ALGO_80211_OPEN = 1,
  DOT11_AUTH_ALGO_80211_SHARED_KEY = 2,
  DOT11_AUTH_ALGO_WPA = 3,
  DOT11_AUTH_ALGO_WPA_PSK = 4,
  DOT11_AUTH_ALGO_WPA_NONE = 5,
  DOT11_AUTH_ALGO_RSNA = 6,
  DOT11_AUTH_ALGO_RSNA_PSK = 7,
  DOT11_AUTH_ALGO_IHV_START = -2147483648,
  DOT11_AUTH_ALGO_IHV_END = -1,
} DOT11_AUTH_ALGORITHM, *PDOT11_AUTH_ALGORITHM;

typedef enum _DOT11_CIPHER_ALGORITHM
{
  DOT11_CIPHER_ALGO_NONE = 0,
  DOT11_CIPHER_ALGO_WEP40 = 1,
  DOT11_CIPHER_ALGO_TKIP = 2,
  DOT11_CIPHER_ALGO_CCMP = 4,
  DOT11_CIPHER_ALGO_WEP104 = 5,
  DOT11_CIPHER_ALGO_BIP = 6,
  DOT11_CIPHER_ALGO_WPA_USE_GROUP = 256,
  DOT11_CIPHER_ALGO_RSN_USE_GROUP = 256,
  DOT11_CIPHER_ALGO_WEP = 257,
  DOT11_CIPHER_ALGO_IHV_START = -2147483648,
  DOT11_CIPHER_ALGO_IHV_END = -1,
} DOT11_CIPHER_ALGORITHM, *PDOT11_CIPHER_ALGORITHM;

typedef enum _DOT11_ASSOCIATION_STATE
{
  dot11_assoc_state_zero = 0,
  dot11_assoc_state_unauth_unassoc = 1,
  dot11_assoc_state_auth_unassoc = 2,
  dot11_assoc_state_auth_assoc = 3,
} DOT11_ASSOCIATION_STATE, *PDOT11_ASSOCIATION_STATE;

typedef enum _DOT11_POWER_MODE
{
  dot11_power_mode_unknown = 0,
  dot11_power_mode_active = 1,
  dot11_power_mode_powersave = 2,
} DOT11_POWER_MODE, *PDOT11_POWER_MODE;

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _DOT11_PEER_STATISTICS
{
  /* 0x0000 */ unsigned __int64 ullDecryptSuccessCount;
  /* 0x0008 */ unsigned __int64 ullDecryptFailureCount;
  /* 0x0010 */ unsigned __int64 ullTxPacketSuccessCount;
  /* 0x0018 */ unsigned __int64 ullTxPacketFailureCount;
  /* 0x0020 */ unsigned __int64 ullRxPacketSuccessCount;
  /* 0x0028 */ unsigned __int64 ullRxPacketFailureCount;
} DOT11_PEER_STATISTICS, *PDOT11_PEER_STATISTICS; /* size: 0x0030 */

typedef struct _DOT11_PEER_INFO
{
  /* 0x0000 */ unsigned char MacAddress[6];
  /* 0x0006 */ unsigned short usCapabilityInformation;
  /* 0x0008 */ enum _DOT11_AUTH_ALGORITHM AuthAlgo;
  /* 0x000c */ enum _DOT11_CIPHER_ALGORITHM UnicastCipherAlgo;
  /* 0x0010 */ enum _DOT11_CIPHER_ALGORITHM MulticastCipherAlgo;
  /* 0x0014 */ unsigned char bWpsEnabled;
  /* 0x0016 */ unsigned short usListenInterval;
  /* 0x0018 */ unsigned char ucSupportedRates[255];
  /* 0x0118 */ unsigned short usAssociationID;
  /* 0x011c */ enum _DOT11_ASSOCIATION_STATE AssociationState;
  /* 0x0120 */ enum _DOT11_POWER_MODE PowerMode;
  /* 0x0128 */ union _LARGE_INTEGER liAssociationUpTime;
  /* 0x0130 */ struct _DOT11_PEER_STATISTICS Statistics;
} DOT11_PEER_INFO, *PDOT11_PEER_INFO; /* size: 0x0160 */


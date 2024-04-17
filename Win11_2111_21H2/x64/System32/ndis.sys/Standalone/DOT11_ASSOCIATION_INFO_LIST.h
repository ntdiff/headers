typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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

typedef struct _DOT11_ASSOCIATION_INFO_EX
{
  /* 0x0000 */ unsigned char PeerMacAddress[6];
  /* 0x0006 */ unsigned char BSSID[6];
  /* 0x000c */ unsigned short usCapabilityInformation;
  /* 0x000e */ unsigned short usListenInterval;
  /* 0x0010 */ unsigned char ucPeerSupportedRates[255];
  /* 0x0110 */ unsigned short usAssociationID;
  /* 0x0114 */ enum _DOT11_ASSOCIATION_STATE dot11AssociationState;
  /* 0x0118 */ enum _DOT11_POWER_MODE dot11PowerMode;
  /* 0x0120 */ union _LARGE_INTEGER liAssociationUpTime;
  /* 0x0128 */ unsigned __int64 ullNumOfTxPacketSuccesses;
  /* 0x0130 */ unsigned __int64 ullNumOfTxPacketFailures;
  /* 0x0138 */ unsigned __int64 ullNumOfRxPacketSuccesses;
  /* 0x0140 */ unsigned __int64 ullNumOfRxPacketFailures;
} DOT11_ASSOCIATION_INFO_EX, *PDOT11_ASSOCIATION_INFO_EX; /* size: 0x0148 */

struct DOT11_ASSOCIATION_INFO_LIST
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uNumOfEntries;
  /* 0x0008 */ unsigned long uTotalNumOfEntries;
  /* 0x0010 */ struct _DOT11_ASSOCIATION_INFO_EX dot11AssocInfo[1];
}; /* size: 0x0158 */


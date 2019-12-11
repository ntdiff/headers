typedef enum _NDIS_PM_PROTOCOL_OFFLOAD_TYPE
{
  NdisPMProtocolOffloadIdUnspecified = 0,
  NdisPMProtocolOffloadIdIPv4ARP = 1,
  NdisPMProtocolOffloadIdIPv6NS = 2,
  NdisPMProtocolOffload80211RSNRekey = 3,
  NdisPMProtocolOffloadIdMaximum = 4,
} NDIS_PM_PROTOCOL_OFFLOAD_TYPE, *PNDIS_PM_PROTOCOL_OFFLOAD_TYPE;


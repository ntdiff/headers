typedef enum _NDIS_PORT_TYPE
{
  NdisPortTypeUndefined = 0,
  NdisPortTypeBridge = 1,
  NdisPortTypeRasConnection = 2,
  NdisPortType8021xSupplicant = 3,
  NdisPortTypeNdisImPlatform = 4,
  NdisPortTypeMax = 5,
} NDIS_PORT_TYPE, *PNDIS_PORT_TYPE;


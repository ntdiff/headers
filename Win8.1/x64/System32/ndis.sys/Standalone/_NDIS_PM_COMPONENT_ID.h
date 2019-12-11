typedef enum _NDIS_PM_COMPONENT_ID
{
  NdisPMComponentUnspecified = 0,
  NdisPMComponentTcpipRs = 1,
  NdisPMComponentDHCPv4 = 2,
  NdisPMComponentDHCPv6 = 3,
  NdisPMComponentWLAN = 4,
  NdisPMComponentWWAN = 5,
  NdisPMComponentWCM = 6,
  NdisPMComponentNCSI = 7,
  NdisPMComponentTest = 8,
  NdisPMComponentEapSim = 9,
  NdisPMComponentTcpipOid = 10,
  NdisPMComponentTcpipData = 11,
  NdisPMComponentTcpipDad = 12,
  NdisPMComponentGeolocation = 13,
  NdisPMComponentMaximum = 14,
} NDIS_PM_COMPONENT_ID, *PNDIS_PM_COMPONENT_ID;


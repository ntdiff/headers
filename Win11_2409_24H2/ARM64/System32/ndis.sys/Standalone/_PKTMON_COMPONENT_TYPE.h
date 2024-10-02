typedef enum _PKTMON_COMPONENT_TYPE
{
  PktMonComp_Ndis = 1,
  PktMonComp_Miniport = 2,
  PktMonComp_Filter = 3,
  PktMonComp_Protocol = 4,
  PktMonComp_VmsVmNic = 5,
  PktMonComp_VmsMiniport = 6,
  PktMonComp_VmsExtMiniport = 7,
  PktMonComp_VmsProtocolNic = 8,
  PktMonComp_NetVsc = 9,
  PktMonComp_HTTP = 10,
  PktMonComp_IpInterface = 11,
  PktMonComp_Slbmux = 12,
  PktMonComp_Ipsec = 13,
  PktMonComp_NetCx = 14,
  PktMonComp_HTTPMessage = 15,
} PKTMON_COMPONENT_TYPE, *PPKTMON_COMPONENT_TYPE;


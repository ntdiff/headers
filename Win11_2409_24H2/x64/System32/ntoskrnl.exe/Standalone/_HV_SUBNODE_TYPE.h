typedef enum _HV_SUBNODE_TYPE
{
  HvSubnodeAny = 0,
  HvSubnodeSocket = 1,
  HvSubnodeCluster = 2,
  HvSubnodeL3 = 3,
  HvSubnodeCount = 4,
  HvSubnodeInvalid = -1,
} HV_SUBNODE_TYPE, *PHV_SUBNODE_TYPE;


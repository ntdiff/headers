typedef enum _PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON
{
  DeviceQueryRebalanceSucceeded = 0,
  DeviceQueryStopFailed = 1,
  DeviceFailedGetNewResourceRequirement = 2,
  DeviceInUnexpectedState = 3,
  DeviceNotSupportQueryRebalance = 4,
} PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON, *PPNP_DEVNODE_QUERY_REBALANCE_VETO_REASON;


typedef enum _PNP_REBALANCE_REASON
{
  RebalanceReasonUnknown = 0,
  RebalanceReasonRequirementsChanged = 1,
  RebalanceReasonNewDevice = 2,
} PNP_REBALANCE_REASON, *PPNP_REBALANCE_REASON;

typedef enum _PNP_REBALANCE_FAILURE
{
  RebalanceFailureNone = 0,
  RebalanceFailureDisabled = 1,
  RebalanceFailureNoMemory = 2,
  RebalanceFailureQueryStopUnexpectedVeto = 3,
  RebalanceFailureNoRequirements = 4,
  RebalanceFailureNoCandidates = 5,
  RebalanceFailureNoConfiguration = 6,
} PNP_REBALANCE_FAILURE, *PPNP_REBALANCE_FAILURE;

typedef enum _PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON
{
  DeviceQueryRebalanceSucceeded = 0,
  DeviceQueryStopFailed = 1,
  DeviceFailedGetNewResourceRequirement = 2,
  DeviceInUnexpectedState = 3,
  DeviceNotSupportQueryRebalance = 4,
} PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON, *PPNP_DEVNODE_QUERY_REBALANCE_VETO_REASON;

typedef struct _PNP_RESOURCE_CONFLICT_TRACE_CONTEXT
{
  /* 0x0000 */ unsigned char ResourceType;
  /* 0x0004 */ unsigned long AlternativeCount;
  /* 0x0008 */ struct _IO_RESOURCE_DESCRIPTOR* ResourceRequests;
  /* 0x000c */ void* ArbiterInstance;
} PNP_RESOURCE_CONFLICT_TRACE_CONTEXT, *PPNP_RESOURCE_CONFLICT_TRACE_CONTEXT; /* size: 0x0010 */

typedef struct _PNP_REBALANCE_TRACE_CONTEXT
{
  /* 0x0000 */ unsigned long DeviceCount;
  /* 0x0004 */ unsigned long RebalancePhase;
  /* 0x0008 */ enum _PNP_REBALANCE_REASON Reason[2];
  /* 0x0010 */ enum _PNP_REBALANCE_FAILURE Failure[2];
  /* 0x0018 */ struct _DEVICE_NODE* SubtreeRoot;
  /* 0x001c */ unsigned char SubtreeIncludesRoot;
  /* 0x0020 */ struct _DEVICE_NODE* TriggerRoot;
  /* 0x0024 */ unsigned char RebalanceDueToDynamicPartitioning;
  /* 0x0028 */ unsigned __int64 BeginTime;
  /* 0x0030 */ struct _DEVICE_NODE* VetoNode[2];
  /* 0x0038 */ enum _PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON VetoQueryRebalanceReason[2];
  /* 0x0040 */ struct _PNP_RESOURCE_CONFLICT_TRACE_CONTEXT ConflictContext;
} PNP_REBALANCE_TRACE_CONTEXT, *PPNP_REBALANCE_TRACE_CONTEXT; /* size: 0x0050 */


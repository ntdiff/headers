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


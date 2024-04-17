typedef enum _PO_S0_DISCONNECTED_REASON
{
  PoS0DisconnectedReasonNone = 0,
  PoS0DisconnectedReasonNonCompliantNic = 1,
  PoS0DisconnectedReasonSettingPolicy = 2,
  PoS0DisconnectedReasonEnforceDsPolicy = 3,
  PoS0DisconnectedReasonCsChecksFailed = 4,
  PoS0DisconnectedReasonOpportunisticDs = 5,
  PoS0DisconnectedReasonAdaptiveCs = 5,
  PoS0DisconnectedReasonMaximum = 6,
} PO_S0_DISCONNECTED_REASON, *PPO_S0_DISCONNECTED_REASON;


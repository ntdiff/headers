typedef enum _NDIS_IDLE_CONDITION
{
  NdisIdleConditionAnyLowLatency = 0,
  NdisIdleConditionAny = 1,
  NdisIdleConditionUnicastOnly = 2,
  NdisIdleConditionL2ConnectedOnly = 3,
} NDIS_IDLE_CONDITION, *PNDIS_IDLE_CONDITION;


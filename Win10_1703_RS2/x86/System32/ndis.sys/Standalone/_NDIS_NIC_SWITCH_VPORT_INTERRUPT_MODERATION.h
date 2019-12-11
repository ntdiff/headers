typedef enum _NDIS_NIC_SWITCH_VPORT_INTERRUPT_MODERATION
{
  NdisNicSwitchVPortInterruptModerationUndefined = 0,
  NdisNicSwitchVPortInterruptModerationAdaptive = 1,
  NdisNicSwitchVPortInterruptModerationOff = 2,
  NdisNicSwitchVPortInterruptModerationLow = 100,
  NdisNicSwitchVPortInterruptModerationMedium = 200,
  NdisNicSwitchVPortInterruptModerationHigh = 300,
} NDIS_NIC_SWITCH_VPORT_INTERRUPT_MODERATION, *PNDIS_NIC_SWITCH_VPORT_INTERRUPT_MODERATION;


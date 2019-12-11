typedef enum _NDIS_PM_WAKE_REASON_TYPE
{
  NdisWakeReasonUnspecified = 0,
  NdisWakeReasonPacket = 1,
  NdisWakeReasonMediaDisconnect = 2,
  NdisWakeReasonMediaConnect = 3,
  NdisWakeReasonWlanNLODiscovery = 4096,
  NdisWakeReasonWlanAPAssociationLost = 4097,
  NdisWakeReasonWlanGTKHandshakeError = 4098,
  NdisWakeReasonWlan4WayHandshakeRequest = 4099,
  NdisWakeReasonWwanRegisterState = 8192,
  NdisWakeReasonWwanSMSReceive = 8193,
  NdisWakeReasonWwanUSSDReceive = 8194,
} NDIS_PM_WAKE_REASON_TYPE, *PNDIS_PM_WAKE_REASON_TYPE;


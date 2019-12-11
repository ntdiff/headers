typedef struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS
{
  /* 0x0000 */ unsigned long WakeReasonUnspec;
  /* 0x0004 */ unsigned long WakeReasonPacket;
  /* 0x0008 */ unsigned long WakeReasonMediaDisconnect;
  /* 0x000c */ unsigned long WakeReasonMediaConnect;
  /* 0x0010 */ unsigned long WakeReasonWlanNLODiscovery;
  /* 0x0014 */ unsigned long WakeReasonWlanApAssociationLost;
  /* 0x0018 */ unsigned long WakeReasonWlanGTKHandshakeError;
  /* 0x001c */ unsigned long WakeReasonWlan4WayHandshakeRequest;
  /* 0x0020 */ unsigned long WakeReasonWwanRegisterState;
  /* 0x0024 */ unsigned long WakeReasonWwanSMSReceive;
  /* 0x0028 */ unsigned long WakeReasonWwanUSSDReceive;
} NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS, *PNDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS; /* size: 0x002c */


typedef enum _ALPC_PORT_INFORMATION_CLASS
{
  AlpcBasicInformation = 0,
  AlpcPortInformation = 1,
  AlpcAssociateCompletionPortInformation = 2,
  AlpcConnectedSIDInformation = 3,
  AlpcServerInformation = 4,
  AlpcMessageZoneInformation = 5,
  AlpcRegisterCompletionListInformation = 6,
  AlpcUnregisterCompletionListInformation = 7,
  AlpcAdjustCompletionListConcurrencyCountInformation = 8,
} ALPC_PORT_INFORMATION_CLASS, *PALPC_PORT_INFORMATION_CLASS;


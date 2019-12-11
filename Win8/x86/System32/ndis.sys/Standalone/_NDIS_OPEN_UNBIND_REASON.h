typedef enum _NDIS_OPEN_UNBIND_REASON
{
  UnbindReasonNotUnbinding = 0,
  UnbindReasonCloseMiniportBindings = 1,
  UnbindReasonCloseAllBindingsOnProtocol = 2,
  UnbindReasonCloseMiniportBindingsForPause = 3,
  UnbindReasonHandleProtocolReconfigNotification = 4,
  UnbindReasonHandleProtocolUnbindNotification = 5,
  UnbindReasonPnPNotifyAllTransports = 6,
  UnbindReasonPnPNotifyBinding = 7,
} NDIS_OPEN_UNBIND_REASON, *PNDIS_OPEN_UNBIND_REASON;


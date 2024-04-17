typedef enum _RPC_NOTIFICATION_TYPES
{
  RpcNotificationTypeNone = 0,
  RpcNotificationTypeEvent = 1,
  RpcNotificationTypeApc = 2,
  RpcNotificationTypeIoc = 3,
  RpcNotificationTypeHwnd = 4,
  RpcNotificationTypeCallback = 5,
} RPC_NOTIFICATION_TYPES, *PRPC_NOTIFICATION_TYPES;


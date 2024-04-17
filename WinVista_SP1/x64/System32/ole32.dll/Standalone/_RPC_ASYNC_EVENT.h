typedef enum _RPC_ASYNC_EVENT
{
  RpcCallComplete = 0,
  RpcSendComplete = 1,
  RpcReceiveComplete = 2,
  RpcClientDisconnect = 3,
  RpcClientCancel = 4,
} RPC_ASYNC_EVENT, *PRPC_ASYNC_EVENT;


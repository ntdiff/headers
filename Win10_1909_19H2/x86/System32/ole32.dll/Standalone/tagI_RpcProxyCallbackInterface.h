struct tagI_RpcProxyCallbackInterface
{
  /* 0x0000 */ void* IsValidMachineFn /* function */;
  /* 0x0004 */ void* GetClientAddressFn /* function */;
  /* 0x0008 */ void* GetConnectionTimeoutFn /* function */;
  /* 0x000c */ void* PerformCalloutFn /* function */;
  /* 0x0010 */ void* FreeCalloutStateFn /* function */;
  /* 0x0014 */ void* GetClientSessionAndResourceUUIDFn /* function */;
  /* 0x0018 */ void* ProxyFilterIfFn /* function */;
  /* 0x001c */ void* RpcProxyUpdatePerfCounterFn /* function */;
  /* 0x0020 */ void* RpcProxyUpdatePerfCounterBackendServerFn /* function */;
}; /* size: 0x0024 */


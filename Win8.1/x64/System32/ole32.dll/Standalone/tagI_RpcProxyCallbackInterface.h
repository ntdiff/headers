struct tagI_RpcProxyCallbackInterface
{
  /* 0x0000 */ void* IsValidMachineFn /* function */;
  /* 0x0008 */ void* GetClientAddressFn /* function */;
  /* 0x0010 */ void* GetConnectionTimeoutFn /* function */;
  /* 0x0018 */ void* PerformCalloutFn /* function */;
  /* 0x0020 */ void* FreeCalloutStateFn /* function */;
  /* 0x0028 */ void* GetClientSessionAndResourceUUIDFn /* function */;
  /* 0x0030 */ void* ProxyFilterIfFn /* function */;
  /* 0x0038 */ void* RpcProxyUpdatePerfCounterFn /* function */;
  /* 0x0040 */ void* RpcProxyUpdatePerfCounterBackendServerFn /* function */;
}; /* size: 0x0048 */


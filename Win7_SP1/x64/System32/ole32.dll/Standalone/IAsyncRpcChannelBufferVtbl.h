struct IAsyncRpcChannelBufferVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* GetBuffer /* function */;
  /* 0x0020 */ void* SendReceive /* function */;
  /* 0x0028 */ void* FreeBuffer /* function */;
  /* 0x0030 */ void* GetDestCtx /* function */;
  /* 0x0038 */ void* IsConnected /* function */;
  /* 0x0040 */ void* GetProtocolVersion /* function */;
  /* 0x0048 */ void* Send /* function */;
  /* 0x0050 */ void* Receive /* function */;
  /* 0x0058 */ void* GetDestCtxEx /* function */;
}; /* size: 0x0060 */


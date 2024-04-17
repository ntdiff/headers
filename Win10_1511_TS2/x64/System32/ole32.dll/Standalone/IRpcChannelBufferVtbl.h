struct IRpcChannelBufferVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* GetBuffer /* function */;
  /* 0x0020 */ void* SendReceive /* function */;
  /* 0x0028 */ void* FreeBuffer /* function */;
  /* 0x0030 */ void* GetDestCtx /* function */;
  /* 0x0038 */ void* IsConnected /* function */;
}; /* size: 0x0040 */


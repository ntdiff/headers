struct IRpcChannelBufferVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* GetBuffer /* function */;
  /* 0x0010 */ void* SendReceive /* function */;
  /* 0x0014 */ void* FreeBuffer /* function */;
  /* 0x0018 */ void* GetDestCtx /* function */;
  /* 0x001c */ void* IsConnected /* function */;
}; /* size: 0x0020 */


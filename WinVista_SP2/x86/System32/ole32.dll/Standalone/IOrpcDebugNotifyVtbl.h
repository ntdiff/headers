struct IOrpcDebugNotifyVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* ClientGetBufferSize /* function */;
  /* 0x0010 */ void* ClientFillBuffer /* function */;
  /* 0x0014 */ void* ClientNotify /* function */;
  /* 0x0018 */ void* ServerNotify /* function */;
  /* 0x001c */ void* ServerGetBufferSize /* function */;
  /* 0x0020 */ void* ServerFillBuffer /* function */;
}; /* size: 0x0024 */


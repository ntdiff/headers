struct IOrpcDebugNotifyVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* ClientGetBufferSize /* function */;
  /* 0x0020 */ void* ClientFillBuffer /* function */;
  /* 0x0028 */ void* ClientNotify /* function */;
  /* 0x0030 */ void* ServerNotify /* function */;
  /* 0x0038 */ void* ServerGetBufferSize /* function */;
  /* 0x0040 */ void* ServerFillBuffer /* function */;
}; /* size: 0x0048 */


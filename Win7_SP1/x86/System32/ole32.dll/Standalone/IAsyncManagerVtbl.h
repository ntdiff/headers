struct IAsyncManagerVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* CompleteCall /* function */;
  /* 0x0010 */ void* GetCallContext /* function */;
  /* 0x0014 */ void* GetState /* function */;
}; /* size: 0x0018 */


struct IAsyncManagerVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* CompleteCall /* function */;
  /* 0x0020 */ void* GetCallContext /* function */;
  /* 0x0028 */ void* GetState /* function */;
}; /* size: 0x0030 */


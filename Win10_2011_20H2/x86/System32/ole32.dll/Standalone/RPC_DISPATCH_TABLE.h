struct RPC_DISPATCH_TABLE
{
  /* 0x0000 */ unsigned int DispatchTableCount;
  /* 0x0004 */ void** DispatchTable /* function */;
  /* 0x0008 */ long Reserved;
}; /* size: 0x000c */


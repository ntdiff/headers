struct RPC_DISPATCH_TABLE
{
  /* 0x0000 */ unsigned int DispatchTableCount;
  /* 0x0008 */ void** DispatchTable /* function */;
  /* 0x0010 */ __int64 Reserved;
}; /* size: 0x0018 */


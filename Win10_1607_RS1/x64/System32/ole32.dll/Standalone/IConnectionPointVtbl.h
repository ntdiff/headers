struct IConnectionPointVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* GetConnectionInterface /* function */;
  /* 0x0020 */ void* GetConnectionPointContainer /* function */;
  /* 0x0028 */ void* Advise /* function */;
  /* 0x0030 */ void* Unadvise /* function */;
  /* 0x0038 */ void* EnumConnections /* function */;
}; /* size: 0x0040 */


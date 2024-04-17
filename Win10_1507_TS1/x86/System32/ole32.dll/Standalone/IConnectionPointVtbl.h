struct IConnectionPointVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* GetConnectionInterface /* function */;
  /* 0x0010 */ void* GetConnectionPointContainer /* function */;
  /* 0x0014 */ void* Advise /* function */;
  /* 0x0018 */ void* Unadvise /* function */;
  /* 0x001c */ void* EnumConnections /* function */;
}; /* size: 0x0020 */


typedef struct _KTSS64
{
  /* 0x0000 */ unsigned long Reserved0;
  /* 0x0004 */ unsigned __int64 Rsp0;
  /* 0x000c */ unsigned __int64 Rsp1;
  /* 0x0014 */ unsigned __int64 Rsp2;
  /* 0x001c */ unsigned __int64 Ist[8];
  /* 0x005c */ unsigned __int64 Reserved1;
  /* 0x0064 */ unsigned short Reserved2;
  /* 0x0066 */ unsigned short IoMapBase;
} KTSS64, *PKTSS64; /* size: 0x0068 */


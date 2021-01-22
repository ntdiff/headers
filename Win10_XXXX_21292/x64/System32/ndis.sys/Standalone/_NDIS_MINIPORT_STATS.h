typedef struct _NDIS_MINIPORT_STATS
{
  /* 0x0000 */ unsigned __int64 ifHCInOctets;
  /* 0x0008 */ unsigned __int64 ifHCInUcastOctets;
  /* 0x0010 */ unsigned __int64 ifHCInBroadcastOctets;
  /* 0x0018 */ unsigned __int64 ifHCInMulticastOctets;
  /* 0x0020 */ unsigned __int64 ifHCInUcastPkts;
  /* 0x0028 */ unsigned __int64 ifHCInMulticastPkts;
  /* 0x0030 */ unsigned __int64 ifHCInBroadcastPkts;
  /* 0x0038 */ unsigned __int64 ifHCOutOctets;
  /* 0x0040 */ unsigned __int64 ifHCOutUcastPkts;
  /* 0x0048 */ unsigned __int64 ifHCOutMulticastPkts;
  /* 0x0050 */ unsigned __int64 ifHCOutBroadcastPkts;
  /* 0x0058 */ unsigned __int64 ifHCOutUcastOctets;
  /* 0x0060 */ unsigned __int64 ifHCOutMulticastOctets;
  /* 0x0068 */ unsigned __int64 ifHCOutBroadcastOctets;
} NDIS_MINIPORT_STATS, *PNDIS_MINIPORT_STATS; /* size: 0x0070 */


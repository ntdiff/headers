typedef struct _NDIS_MINIPORT_CS_TRAFFIC_STATS
{
  /* 0x0000 */ unsigned __int64 IfInUnicastPackets;
  /* 0x0008 */ unsigned __int64 IfOutUnicastPackets;
  /* 0x0010 */ unsigned __int64 IfInMulticastPackets;
  /* 0x0018 */ unsigned __int64 IfOutMulticastPackets;
  /* 0x0020 */ unsigned __int64 IfInBroadcastPackets;
  /* 0x0028 */ unsigned __int64 IfOutBroadcastPackets;
} NDIS_MINIPORT_CS_TRAFFIC_STATS, *PNDIS_MINIPORT_CS_TRAFFIC_STATS; /* size: 0x0030 */


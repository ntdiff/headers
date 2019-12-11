typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_STATISTICS_INFO
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long SupportedStatistics;
  /* 0x0008 */ unsigned __int64 ifInDiscards;
  /* 0x0010 */ unsigned __int64 ifInErrors;
  /* 0x0018 */ unsigned __int64 ifHCInOctets;
  /* 0x0020 */ unsigned __int64 ifHCInUcastPkts;
  /* 0x0028 */ unsigned __int64 ifHCInMulticastPkts;
  /* 0x0030 */ unsigned __int64 ifHCInBroadcastPkts;
  /* 0x0038 */ unsigned __int64 ifHCOutOctets;
  /* 0x0040 */ unsigned __int64 ifHCOutUcastPkts;
  /* 0x0048 */ unsigned __int64 ifHCOutMulticastPkts;
  /* 0x0050 */ unsigned __int64 ifHCOutBroadcastPkts;
  /* 0x0058 */ unsigned __int64 ifOutErrors;
  /* 0x0060 */ unsigned __int64 ifOutDiscards;
  /* 0x0068 */ unsigned __int64 ifHCInUcastOctets;
  /* 0x0070 */ unsigned __int64 ifHCInMulticastOctets;
  /* 0x0078 */ unsigned __int64 ifHCInBroadcastOctets;
  /* 0x0080 */ unsigned __int64 ifHCOutUcastOctets;
  /* 0x0088 */ unsigned __int64 ifHCOutMulticastOctets;
  /* 0x0090 */ unsigned __int64 ifHCOutBroadcastOctets;
} NDIS_STATISTICS_INFO, *PNDIS_STATISTICS_INFO; /* size: 0x0098 */


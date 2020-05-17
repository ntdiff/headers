typedef struct _IP_OFFLOAD_STATS
{
  /* 0x0000 */ unsigned __int64 InReceives;
  /* 0x0008 */ unsigned __int64 InOctets;
  /* 0x0010 */ unsigned __int64 InDelivers;
  /* 0x0018 */ unsigned __int64 OutRequests;
  /* 0x0020 */ unsigned __int64 OutOctets;
  /* 0x0028 */ unsigned long InHeaderErrors;
  /* 0x002c */ unsigned long InTruncatedPackets;
  /* 0x0030 */ unsigned long InDiscards;
  /* 0x0034 */ unsigned long OutDiscards;
  /* 0x0038 */ unsigned long OutNoRoutes;
  /* 0x003c */ long __PADDING__[1];
} IP_OFFLOAD_STATS, *PIP_OFFLOAD_STATS; /* size: 0x0040 */


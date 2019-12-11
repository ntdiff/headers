typedef struct _NDIS_NDK_PERFORMANCE_COUNTERS
{
  /* 0x0000 */ unsigned __int64 Connect;
  /* 0x0008 */ unsigned __int64 Accept;
  /* 0x0010 */ unsigned __int64 ConnectFailure;
  /* 0x0018 */ unsigned __int64 ConnectionError;
  /* 0x0020 */ unsigned __int64 ActiveConnection;
  /* 0x0028 */ unsigned __int64 Reserved01;
  /* 0x0030 */ unsigned __int64 Reserved02;
  /* 0x0038 */ unsigned __int64 Reserved03;
  /* 0x0040 */ unsigned __int64 Reserved04;
  /* 0x0048 */ unsigned __int64 Reserved05;
  /* 0x0050 */ unsigned __int64 Reserved06;
  /* 0x0058 */ unsigned __int64 Reserved07;
  /* 0x0060 */ unsigned __int64 Reserved08;
  /* 0x0068 */ unsigned __int64 Reserved09;
  /* 0x0070 */ unsigned __int64 Reserved10;
  /* 0x0078 */ unsigned __int64 Reserved11;
  /* 0x0080 */ unsigned __int64 Reserved12;
  /* 0x0088 */ unsigned __int64 Reserved13;
  /* 0x0090 */ unsigned __int64 Reserved14;
  /* 0x0098 */ unsigned __int64 Reserved15;
  /* 0x00a0 */ unsigned __int64 Reserved16;
  /* 0x00a8 */ unsigned __int64 Reserved17;
  /* 0x00b0 */ unsigned __int64 Reserved18;
  /* 0x00b8 */ unsigned __int64 Reserved19;
  /* 0x00c0 */ unsigned __int64 Reserved20;
  /* 0x00c8 */ unsigned __int64 CQError;
  /* 0x00d0 */ unsigned __int64 RDMAInOctets;
  /* 0x00d8 */ unsigned __int64 RDMAOutOctets;
  /* 0x00e0 */ unsigned __int64 RDMAInFrames;
  /* 0x00e8 */ unsigned __int64 RDMAOutFrames;
} NDIS_NDK_PERFORMANCE_COUNTERS, *PNDIS_NDK_PERFORMANCE_COUNTERS; /* size: 0x00f0 */


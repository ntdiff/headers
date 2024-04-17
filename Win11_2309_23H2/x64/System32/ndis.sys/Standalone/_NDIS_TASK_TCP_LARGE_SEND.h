typedef struct _NDIS_TASK_TCP_LARGE_SEND
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long MaxOffLoadSize;
  /* 0x0008 */ unsigned long MinSegmentCount;
  /* 0x000c */ unsigned char TcpOptions;
  /* 0x000d */ unsigned char IpOptions;
  /* 0x000e */ char __PADDING__[2];
} NDIS_TASK_TCP_LARGE_SEND, *PNDIS_TASK_TCP_LARGE_SEND; /* size: 0x0010 */


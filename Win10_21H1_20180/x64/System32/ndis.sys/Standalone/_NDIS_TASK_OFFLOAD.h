typedef enum _NDIS_TASK
{
  TcpIpChecksumNdisTask = 0,
  IpSecNdisTask = 1,
  TcpLargeSendNdisTask = 2,
  MaxNdisTask = 3,
} NDIS_TASK, *PNDIS_TASK;

typedef struct _NDIS_TASK_OFFLOAD
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ enum _NDIS_TASK Task;
  /* 0x000c */ unsigned long OffsetNextTask;
  /* 0x0010 */ unsigned long TaskBufferLength;
  /* 0x0014 */ unsigned char TaskBuffer[1];
  /* 0x0015 */ char __PADDING__[3];
} NDIS_TASK_OFFLOAD, *PNDIS_TASK_OFFLOAD; /* size: 0x0018 */


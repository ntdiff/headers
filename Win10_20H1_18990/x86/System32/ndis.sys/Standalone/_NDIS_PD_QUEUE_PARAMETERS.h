typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

enum NDIS_PD_QUEUE_TYPE
{
  PDQueueTypeUnknown = 0,
  PDQueueTypeReceive = 1,
  PDQueueTypeTransmit = 2,
  PDQueueTypeMax = 3,
};

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef struct _NDIS_PD_QUEUE_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum NDIS_PD_QUEUE_TYPE QueueType;
  /* 0x000c */ unsigned long QueueSize;
  /* 0x0010 */ unsigned long ReceiveDataLength;
  /* 0x0014 */ struct _GROUP_AFFINITY Affinity;
  /* 0x0020 */ unsigned long TrafficClassId;
  /* 0x0024 */ unsigned long MaximumPartialBufferCount;
  /* 0x0028 */ struct NDIS_PD_COUNTER_HANDLE__* CounterHandle;
  /* 0x002c */ long __PADDING__[1];
} NDIS_PD_QUEUE_PARAMETERS, *PNDIS_PD_QUEUE_PARAMETERS; /* size: 0x0030 */


typedef struct _EX_PARTITION
{
  /* 0x0000 */ struct _EPARTITION* PartitionObject;
  /* 0x0008 */ struct _EX_WORK_QUEUE** volatile* WorkQueues;
  /* 0x0010 */ struct _EX_WORK_QUEUE_MANAGER** WorkQueueManagers;
  /* 0x0018 */ volatile long QueueAllocationMask;
  /* 0x001c */ long __PADDING__[1];
} EX_PARTITION, *PEX_PARTITION; /* size: 0x0020 */


typedef struct _HIVE_WRITE_WAIT_QUEUE
{
  /* 0x0000 */ struct _ETHREAD* ActiveThread;
  /* 0x0008 */ struct _HIVE_WAIT_PACKET* WaitList;
  /* 0x0010 */ volatile unsigned long OwnerBoosted;
  /* 0x0014 */ long __PADDING__[1];
} HIVE_WRITE_WAIT_QUEUE, *PHIVE_WRITE_WAIT_QUEUE; /* size: 0x0018 */


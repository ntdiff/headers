typedef struct _NDIS_PD_POST_AND_DRAIN_ARG
{
  /* 0x0000 */ struct _PD_BUFFER* PostBufferListHead;
  /* 0x0004 */ struct _PD_BUFFER** DrainBufferListTail;
  /* 0x0008 */ unsigned long MaxDrainCount;
  /* 0x000c */ unsigned long DrainCount;
  /* 0x0010 */ unsigned long PostCount;
  /* 0x0014 */ unsigned char QueueDepthThresholdReached;
  /* 0x0015 */ char __PADDING__[3];
} NDIS_PD_POST_AND_DRAIN_ARG, *PNDIS_PD_POST_AND_DRAIN_ARG; /* size: 0x0018 */


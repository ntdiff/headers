typedef struct _NDIS_PD_POST_AND_DRAIN_ARG
{
  /* 0x0000 */ struct _PD_BUFFER* PostBufferListHead;
  /* 0x0008 */ struct _PD_BUFFER** DrainBufferListTail;
  /* 0x0010 */ unsigned long MaxDrainCount;
  /* 0x0014 */ unsigned long DrainCount;
  /* 0x0018 */ unsigned long PostCount;
  /* 0x001c */ unsigned char QueueDepthThresholdReached;
  /* 0x001d */ char __PADDING__[3];
} NDIS_PD_POST_AND_DRAIN_ARG, *PNDIS_PD_POST_AND_DRAIN_ARG; /* size: 0x0020 */


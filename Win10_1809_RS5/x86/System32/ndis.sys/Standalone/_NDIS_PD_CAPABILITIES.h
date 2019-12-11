typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_PD_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long MaximumTxPartialBufferCount;
  /* 0x000c */ unsigned long MaximumRxPartialBufferCount;
  /* 0x0010 */ unsigned char RxFilterContextWidth;
  /* 0x0014 */ unsigned long CapabilityFlags;
  /* 0x0018 */ unsigned long MaxNumberOfRxQueues;
  /* 0x001c */ unsigned long MaxNumberOfTxQueues;
  /* 0x0020 */ unsigned long MaxNumberOfRxQueuesForDefaultVport;
  /* 0x0024 */ unsigned long MaxNumberOfTxQueuesForDefaultVport;
  /* 0x0028 */ unsigned long MaxNumberOfRxQueuesPerNonDefaultVport;
  /* 0x002c */ unsigned long MaxNumberOfTxQueuesPerNonDefaultVport;
  /* 0x0030 */ unsigned long ExactMatchProfileArrayOffset;
  /* 0x0034 */ unsigned long ExactMatchProfileArrayNumElements;
  /* 0x0038 */ unsigned long ExactMatchProfileArrayElementSize;
  /* 0x003c */ unsigned long WildcardMatchProfileArrayOffset;
  /* 0x0040 */ unsigned long WildcardMatchProfileArrayNumElements;
  /* 0x0044 */ unsigned long WildcardMatchProfileArrayElementSize;
  /* 0x0048 */ unsigned long MinimumModerationInterval;
  /* 0x004c */ unsigned long MaximumModerationInterval;
  /* 0x0050 */ unsigned long ModerationIntervalGranularity;
  /* 0x0054 */ unsigned long MaxRxQueueSize;
  /* 0x0058 */ unsigned long MaxTxQueueSize;
  /* 0x005c */ long __PADDING__[1];
} NDIS_PD_CAPABILITIES, *PNDIS_PD_CAPABILITIES; /* size: 0x0060 */


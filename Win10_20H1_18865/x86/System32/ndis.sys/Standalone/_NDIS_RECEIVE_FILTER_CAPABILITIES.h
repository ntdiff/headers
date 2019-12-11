typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_RECEIVE_FILTER_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long EnabledFilterTypes;
  /* 0x000c */ unsigned long EnabledQueueTypes;
  /* 0x0010 */ unsigned long NumQueues;
  /* 0x0014 */ unsigned long SupportedQueueProperties;
  /* 0x0018 */ unsigned long SupportedFilterTests;
  /* 0x001c */ unsigned long SupportedHeaders;
  /* 0x0020 */ unsigned long SupportedMacHeaderFields;
  /* 0x0024 */ unsigned long MaxMacHeaderFilters;
  /* 0x0028 */ unsigned long MaxQueueGroups;
  /* 0x002c */ unsigned long MaxQueuesPerQueueGroup;
  /* 0x0030 */ unsigned long MinLookaheadSplitSize;
  /* 0x0034 */ unsigned long MaxLookaheadSplitSize;
  /* 0x0038 */ unsigned long SupportedARPHeaderFields;
  /* 0x003c */ unsigned long SupportedIPv4HeaderFields;
  /* 0x0040 */ unsigned long SupportedIPv6HeaderFields;
  /* 0x0044 */ unsigned long SupportedUdpHeaderFields;
  /* 0x0048 */ unsigned long MaxFieldTestsPerPacketCoalescingFilter;
  /* 0x004c */ unsigned long MaxPacketCoalescingFilters;
  /* 0x0050 */ unsigned long NdisReserved;
} NDIS_RECEIVE_FILTER_CAPABILITIES, *PNDIS_RECEIVE_FILTER_CAPABILITIES; /* size: 0x0054 */


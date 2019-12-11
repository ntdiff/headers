typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_GFT_COUNTER_UPDATE_FREQUENCY
{
  NdisGftCounterUpdateFrequencyUndefined = 0,
  NdisGftCounterUpdateFrequencyOnQuery = 1,
  NdisGftCounterUpdateFrequencyPerUpdatePeriod = 2,
  NdisGftCounterUpdateFrequencyPerPacket = 3,
  NdisGftCounterUpdateFrequencyMax = 4,
} NDIS_GFT_COUNTER_UPDATE_FREQUENCY, *PNDIS_GFT_COUNTER_UPDATE_FREQUENCY;

typedef enum _NDIS_GFT_COUNTER_TYPE
{
  NdisGftCounterTypeUndefined = 0,
  NdisGftCounterTypePacketCounter = 1,
  NdisGftCounterTypeByteCounter = 2,
  NdisGftCounterTypePacketAndByteCounter = 3,
  NdisGftCounterTypeMax = 4,
} NDIS_GFT_COUNTER_TYPE, *PNDIS_GFT_COUNTER_TYPE;

typedef struct _NDIS_GFT_COUNTER_INFO
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long CounterIdStart;
  /* 0x000c */ unsigned long NumCounters;
  /* 0x0010 */ enum _NDIS_GFT_COUNTER_UPDATE_FREQUENCY CounterUpdateFrequency;
  /* 0x0014 */ enum _NDIS_GFT_COUNTER_TYPE CounterType;
  /* 0x0018 */ unsigned long UpdatePeriod;
} NDIS_GFT_COUNTER_INFO, *PNDIS_GFT_COUNTER_INFO; /* size: 0x001c */


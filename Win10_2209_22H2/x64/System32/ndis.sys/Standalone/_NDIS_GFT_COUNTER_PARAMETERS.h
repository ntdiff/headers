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
  NdisGftCounterTypePacket = 1,
  NdisGftCounterTypeByte = 2,
  NdisGftCounterTypePacketByte = 3,
  NdisGftCounterTypePacketByteAndState = 4,
  NdisGftCounterTypeMax = 5,
} NDIS_GFT_COUNTER_TYPE, *PNDIS_GFT_COUNTER_TYPE;

typedef struct _NDIS_GFT_COUNTER_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long TableId;
  /* 0x000c */ enum _NDIS_GFT_COUNTER_UPDATE_FREQUENCY CounterUpdateFrequency;
  /* 0x0010 */ enum _NDIS_GFT_COUNTER_TYPE CounterType;
  /* 0x0014 */ unsigned long CounterIdStart;
  /* 0x0018 */ unsigned long NumCounters;
  /* 0x001c */ unsigned long UpdatePeriod;
  union
  {
    union
    {
      /* 0x0020 */ volatile struct _NDIS_GFT_PACKET_COUNTER_VALUE* PacketCounters;
      /* 0x0020 */ volatile struct _NDIS_GFT_BYTE_COUNTER_VALUE* ByteCounters;
      /* 0x0020 */ volatile struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE* PacketByteCounters;
      /* 0x0020 */ volatile struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE* PacketByteCountersAndState;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ CounterValuesBufferStart;
} NDIS_GFT_COUNTER_PARAMETERS, *PNDIS_GFT_COUNTER_PARAMETERS; /* size: 0x0028 */


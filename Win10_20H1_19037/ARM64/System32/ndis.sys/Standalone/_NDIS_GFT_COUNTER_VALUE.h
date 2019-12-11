typedef enum _NDIS_GFT_COUNTER_TYPE
{
  NdisGftCounterTypeUndefined = 0,
  NdisGftCounterTypePacket = 1,
  NdisGftCounterTypeByte = 2,
  NdisGftCounterTypePacketByte = 3,
  NdisGftCounterTypePacketByteAndState = 4,
  NdisGftCounterTypeMax = 5,
} NDIS_GFT_COUNTER_TYPE, *PNDIS_GFT_COUNTER_TYPE;

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _NDIS_GFT_PACKET_COUNTER_VALUE
{
  /* 0x0000 */ unsigned __int64 Packets;
  /* 0x0008 */ union _LARGE_INTEGER LastUpdate;
} NDIS_GFT_PACKET_COUNTER_VALUE, *PNDIS_GFT_PACKET_COUNTER_VALUE; /* size: 0x0010 */

typedef struct _NDIS_GFT_BYTE_COUNTER_VALUE
{
  /* 0x0000 */ unsigned __int64 Bytes;
  /* 0x0008 */ union _LARGE_INTEGER LastUpdate;
} NDIS_GFT_BYTE_COUNTER_VALUE, *PNDIS_GFT_BYTE_COUNTER_VALUE; /* size: 0x0010 */

typedef struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE
{
  /* 0x0000 */ unsigned __int64 Packets;
  /* 0x0008 */ unsigned __int64 Bytes;
  /* 0x0010 */ union _LARGE_INTEGER LastUpdate;
} NDIS_GFT_PACKET_BYTE_COUNTER_VALUE, *PNDIS_GFT_PACKET_BYTE_COUNTER_VALUE; /* size: 0x0018 */

typedef struct _NDIS_GFT_FLOW_STATE
{
  /* 0x0000 */ unsigned long TcpSeqNum;
  /* 0x0004 */ unsigned long TcpAckNum;
} NDIS_GFT_FLOW_STATE, *PNDIS_GFT_FLOW_STATE; /* size: 0x0008 */

typedef struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE
{
  /* 0x0000 */ volatile struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE PacketByteCounterValue;
  /* 0x0018 */ volatile struct _NDIS_GFT_FLOW_STATE FlowState;
} NDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE, *PNDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE; /* size: 0x0020 */

typedef struct _NDIS_GFT_COUNTER_VALUE
{
  /* 0x0000 */ enum _NDIS_GFT_COUNTER_TYPE CounterType;
  union
  {
    union
    {
      /* 0x0008 */ volatile struct _NDIS_GFT_PACKET_COUNTER_VALUE Packets;
      /* 0x0008 */ volatile struct _NDIS_GFT_BYTE_COUNTER_VALUE Bytes;
      /* 0x0008 */ volatile struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE PacketsBytes;
      /* 0x0008 */ volatile struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE PacketsBytesAndState;
    }; /* size: 0x0020 */
  } /* size: 0x0020 */ CounterValue;
} NDIS_GFT_COUNTER_VALUE, *PNDIS_GFT_COUNTER_VALUE; /* size: 0x0028 */


typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef enum _NDIS_RECEIVE_FILTER_STATE
{
  NdisReceiveFilterStateUndefined = 0,
  NdisReceiveFilterStateAddedToList = 1,
  NdisReceiveFilterStateSet = 2,
  NdisReceiveFilterStateCleared = 3,
  NdisReceiveFilterStateMaximum = 4,
} NDIS_RECEIVE_FILTER_STATE, *PNDIS_RECEIVE_FILTER_STATE;

typedef struct _NDIS_CONNECTION_INFO
{
  /* 0x0000 */ unsigned char MacAddress[6];
  union
  {
    struct
    {
      /* 0x0008 */ unsigned long SourceIPv4Address;
      /* 0x000c */ unsigned long DestinationIPv4Address;
      /* 0x0010 */ unsigned char Protocol;
      /* 0x0011 */ char __PADDING__[3];
    } /* size: 0x000c */ IPv4Info;
    struct
    {
      /* 0x0008 */ unsigned char SourceIPv6Address[16];
      /* 0x0018 */ unsigned char DestinationIPv6Address[16];
      /* 0x0028 */ unsigned char Protocol;
    } /* size: 0x0021 */ IPv6Info;
  }; /* size: 0x0021 */
  union
  {
    struct
    {
      /* 0x002c */ unsigned short SourceTcpPort;
      /* 0x002e */ unsigned short DestinationTcpPort;
    } /* size: 0x0004 */ TcpPortInfo;
    struct
    {
      /* 0x002c */ unsigned short SourceUdpPort;
      /* 0x002e */ unsigned short DestinationUdpPort;
    } /* size: 0x0004 */ UdpPortInfo;
  }; /* size: 0x0004 */
} NDIS_CONNECTION_INFO, *PNDIS_CONNECTION_INFO; /* size: 0x0030 */

typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_RECEIVE_FILTER_TYPE
{
  NdisReceiveFilterTypeUndefined = 0,
  NdisReceiveFilterTypeVMQueue = 1,
  NdisReceiveFilterTypeMaximum = 2,
} NDIS_RECEIVE_FILTER_TYPE, *PNDIS_RECEIVE_FILTER_TYPE;

typedef struct _NDIS_RECEIVE_FILTER_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_RECEIVE_FILTER_TYPE FilterType;
  /* 0x000c */ unsigned long QueueId;
  /* 0x0010 */ unsigned long FilterId;
  /* 0x0014 */ unsigned long FieldParametersArrayOffset;
  /* 0x0018 */ unsigned long FieldParametersArrayNumElements;
  /* 0x001c */ unsigned long FieldParametersArrayElementSize;
  /* 0x0020 */ unsigned long RequestedFilterIdBitCount;
} NDIS_RECEIVE_FILTER_PARAMETERS, *PNDIS_RECEIVE_FILTER_PARAMETERS; /* size: 0x0024 */

typedef struct _NDIS_RECEIVE_FILTER_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY AdapterLink;
  /* 0x0008 */ struct _LIST_ENTRY QueueLink;
  /* 0x0010 */ unsigned long FilterId;
  /* 0x0014 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0018 */ struct _NDIS_OPEN_BLOCK* Open;
  /* 0x001c */ struct _NDIS_RECEIVE_QUEUE_BLOCK* ReceiveQueue;
  /* 0x0020 */ enum _NDIS_RECEIVE_FILTER_STATE FilterState;
  /* 0x0024 */ long Reference;
  /* 0x0028 */ struct _NDIS_CONNECTION_INFO ConnectionInfo;
  /* 0x0058 */ struct _NDIS_RECEIVE_FILTER_PARAMETERS FilterParameters;
} NDIS_RECEIVE_FILTER_BLOCK, *PNDIS_RECEIVE_FILTER_BLOCK; /* size: 0x007c */


typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _PKTMON_PACKET_TYPE
{
  PktMonPayload_Unknown = 0,
  PktMonPayload_Ethernet = 1,
  PktMonPayload_WiFi = 2,
  PktMonPayload_IP = 3,
  PktMonPayload_HTTP = 4,
  PktMonPayload_TCP = 5,
  PktMonPayload_UDP = 6,
  PktMonPayload_ARP = 7,
  PktMonPayload_ICMP = 8,
  PktMonPayload_ESP = 9,
  PktMonPayload_AH = 10,
  PktMonPayload_L4Payload = 11,
} PKTMON_PACKET_TYPE, *PPKTMON_PACKET_TYPE;

typedef struct _PKTMON_EDGE_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY ListLink;
  /* 0x0010 */ void* EdgeHandle;
  /* 0x0018 */ struct _PKTMON_COMPONENT_CONTEXT* CompContext;
  /* 0x0020 */ enum _PKTMON_PACKET_TYPE PacketType;
  /* 0x0024 */ long __PADDING__[1];
} PKTMON_EDGE_CONTEXT, *PPKTMON_EDGE_CONTEXT; /* size: 0x0028 */


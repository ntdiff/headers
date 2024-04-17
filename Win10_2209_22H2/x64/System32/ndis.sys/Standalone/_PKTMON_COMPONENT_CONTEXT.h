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

typedef struct _PKTMON_COMPONENT_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY ListLink;
  /* 0x0010 */ struct _LIST_ENTRY EdgeList;
  /* 0x0020 */ long EdgeCount;
  /* 0x0028 */ void* CompHandle;
  /* 0x0030 */ enum _PKTMON_PACKET_TYPE PacketType;
  struct /* bitfield */
  {
    /* 0x0034 */ int FlowEnabled : 1; /* bit position: 0 */
    /* 0x0034 */ int DropEnabled : 1; /* bit position: 1 */
  }; /* bitfield */
} PKTMON_COMPONENT_CONTEXT, *PPKTMON_COMPONENT_CONTEXT; /* size: 0x0038 */


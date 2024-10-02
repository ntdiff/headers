typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _PKTMON_COMPONENT_TYPE
{
  PktMonComp_Ndis = 1,
  PktMonComp_Miniport = 2,
  PktMonComp_Filter = 3,
  PktMonComp_Protocol = 4,
  PktMonComp_VmsVmNic = 5,
  PktMonComp_VmsMiniport = 6,
  PktMonComp_VmsExtMiniport = 7,
  PktMonComp_VmsProtocolNic = 8,
  PktMonComp_NetVsc = 9,
  PktMonComp_HTTP = 10,
  PktMonComp_IpInterface = 11,
  PktMonComp_Slbmux = 12,
  PktMonComp_Ipsec = 13,
  PktMonComp_NetCx = 14,
  PktMonComp_HTTPMessage = 15,
} PKTMON_COMPONENT_TYPE, *PPKTMON_COMPONENT_TYPE;

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
  /* 0x0030 */ enum _PKTMON_COMPONENT_TYPE CompType;
  /* 0x0034 */ enum _PKTMON_PACKET_TYPE PacketType;
  struct /* bitfield */
  {
    /* 0x0038 */ int FlowEnabled : 1; /* bit position: 0 */
    /* 0x0038 */ int DropEnabled : 1; /* bit position: 1 */
  }; /* bitfield */
  /* 0x003c */ long __PADDING__[1];
} PKTMON_COMPONENT_CONTEXT, *PPKTMON_COMPONENT_CONTEXT; /* size: 0x0040 */


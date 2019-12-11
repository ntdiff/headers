typedef enum _PKTMON_PACKET_TYPE
{
  PktMonPayload_Unknown = 0,
  PktMonPayload_Ethernet = 1,
  PktMonPayload_WiFi = 2,
  PktMonPayload_MBB = 3,
  PktMonPayload_HTTP = 4,
} PKTMON_PACKET_TYPE, *PPKTMON_PACKET_TYPE;

typedef struct _PKTMON_EDGE_CONTEXT
{
  /* 0x0000 */ void* EdgeHandle;
  /* 0x0008 */ struct _PKTMON_COMPONENT_CONTEXT* CompContext;
  /* 0x0010 */ enum _PKTMON_PACKET_TYPE PacketType;
  /* 0x0014 */ long __PADDING__[1];
} PKTMON_EDGE_CONTEXT, *PPKTMON_EDGE_CONTEXT; /* size: 0x0018 */


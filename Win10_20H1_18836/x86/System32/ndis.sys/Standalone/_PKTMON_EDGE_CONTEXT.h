typedef enum _PKTMON_PACKET_TYPE
{
  PktMonPayload_Unknown = 0,
  PktMonPayload_Ethernet = 1,
  PktMonPayload_WiFi = 2,
  PktMonPayload_MBB = 3,
} PKTMON_PACKET_TYPE, *PPKTMON_PACKET_TYPE;

typedef struct _PKTMON_EDGE_CONTEXT
{
  /* 0x0000 */ void* EdgeHandle;
  /* 0x0004 */ struct _PKTMON_COMPONENT_CONTEXT* CompContext;
  /* 0x0008 */ enum _PKTMON_PACKET_TYPE PacketType;
} PKTMON_EDGE_CONTEXT, *PPKTMON_EDGE_CONTEXT; /* size: 0x000c */


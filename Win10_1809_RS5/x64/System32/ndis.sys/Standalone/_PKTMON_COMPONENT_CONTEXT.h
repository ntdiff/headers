typedef enum _PKTMON_PACKET_TYPE
{
  PktMonPayload_Unknown = 0,
  PktMonPayload_Ethernet = 1,
  PktMonPayload_WiFi = 2,
  PktMonPayload_MBB = 3,
} PKTMON_PACKET_TYPE, *PPKTMON_PACKET_TYPE;

typedef struct _PKTMON_COMPONENT_CONTEXT
{
  /* 0x0000 */ void* CompHandle;
  /* 0x0008 */ enum _PKTMON_PACKET_TYPE PacketType;
  struct /* bitfield */
  {
    /* 0x000c */ unsigned long FlowEnabled : 1; /* bit position: 0 */
    /* 0x000c */ unsigned long DropEnabled : 1; /* bit position: 1 */
  }; /* bitfield */
} PKTMON_COMPONENT_CONTEXT, *PPKTMON_COMPONENT_CONTEXT; /* size: 0x0010 */


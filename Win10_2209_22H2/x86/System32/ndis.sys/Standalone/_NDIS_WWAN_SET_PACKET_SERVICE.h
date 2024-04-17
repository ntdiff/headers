typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _WWAN_PACKET_SERVICE_ACTION
{
  WwanPacketServiceActionAttach = 0,
  WwanPacketServiceActionDetach = 1,
} WWAN_PACKET_SERVICE_ACTION, *PWWAN_PACKET_SERVICE_ACTION;

typedef struct _NDIS_WWAN_SET_PACKET_SERVICE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ enum _WWAN_PACKET_SERVICE_ACTION PacketServiceAction;
} NDIS_WWAN_SET_PACKET_SERVICE, *PNDIS_WWAN_SET_PACKET_SERVICE; /* size: 0x0008 */


typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _DOT11_DISASSOCIATE_PEER_REQUEST
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned char PeerMacAddr[6];
  /* 0x000a */ unsigned short usReason;
} DOT11_DISASSOCIATE_PEER_REQUEST, *PDOT11_DISASSOCIATE_PEER_REQUEST; /* size: 0x000c */


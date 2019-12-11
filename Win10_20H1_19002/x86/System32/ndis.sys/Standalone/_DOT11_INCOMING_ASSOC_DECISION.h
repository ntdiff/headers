typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _DOT11_INCOMING_ASSOC_DECISION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned char PeerMacAddr[6];
  /* 0x000a */ unsigned char bAccept;
  /* 0x000c */ unsigned short usReasonCode;
  /* 0x0010 */ unsigned long uAssocResponseIEsOffset;
  /* 0x0014 */ unsigned long uAssocResponseIEsLength;
} DOT11_INCOMING_ASSOC_DECISION, *PDOT11_INCOMING_ASSOC_DECISION; /* size: 0x0018 */


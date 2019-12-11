typedef struct _NDIS_802_11_AI_REQFI
{
  /* 0x0000 */ unsigned short Capabilities;
  /* 0x0002 */ unsigned short ListenInterval;
  /* 0x0004 */ unsigned char CurrentAPAddress[6];
} NDIS_802_11_AI_REQFI, *PNDIS_802_11_AI_REQFI; /* size: 0x000a */

typedef struct _NDIS_802_11_AI_RESFI
{
  /* 0x0000 */ unsigned short Capabilities;
  /* 0x0002 */ unsigned short StatusCode;
  /* 0x0004 */ unsigned short AssociationId;
} NDIS_802_11_AI_RESFI, *PNDIS_802_11_AI_RESFI; /* size: 0x0006 */

typedef struct _NDIS_802_11_ASSOCIATION_INFORMATION
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned short AvailableRequestFixedIEs;
  /* 0x0006 */ struct _NDIS_802_11_AI_REQFI RequestFixedIEs;
  /* 0x0010 */ unsigned long RequestIELength;
  /* 0x0014 */ unsigned long OffsetRequestIEs;
  /* 0x0018 */ unsigned short AvailableResponseFixedIEs;
  /* 0x001a */ struct _NDIS_802_11_AI_RESFI ResponseFixedIEs;
  /* 0x0020 */ unsigned long ResponseIELength;
  /* 0x0024 */ unsigned long OffsetResponseIEs;
} NDIS_802_11_ASSOCIATION_INFORMATION, *PNDIS_802_11_ASSOCIATION_INFORMATION; /* size: 0x0028 */


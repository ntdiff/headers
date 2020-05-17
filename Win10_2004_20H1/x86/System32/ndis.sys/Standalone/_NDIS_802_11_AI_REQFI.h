typedef struct _NDIS_802_11_AI_REQFI
{
  /* 0x0000 */ unsigned short Capabilities;
  /* 0x0002 */ unsigned short ListenInterval;
  /* 0x0004 */ unsigned char CurrentAPAddress[6];
} NDIS_802_11_AI_REQFI, *PNDIS_802_11_AI_REQFI; /* size: 0x000a */


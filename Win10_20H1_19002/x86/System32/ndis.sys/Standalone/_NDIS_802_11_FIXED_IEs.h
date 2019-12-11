typedef struct _NDIS_802_11_FIXED_IEs
{
  /* 0x0000 */ unsigned char Timestamp[8];
  /* 0x0008 */ unsigned short BeaconInterval;
  /* 0x000a */ unsigned short Capabilities;
} NDIS_802_11_FIXED_IEs, *PNDIS_802_11_FIXED_IEs; /* size: 0x000c */


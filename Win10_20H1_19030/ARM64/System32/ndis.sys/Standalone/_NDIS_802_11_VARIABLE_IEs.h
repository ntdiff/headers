typedef struct _NDIS_802_11_VARIABLE_IEs
{
  /* 0x0000 */ unsigned char ElementID;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char data[1];
} NDIS_802_11_VARIABLE_IEs, *PNDIS_802_11_VARIABLE_IEs; /* size: 0x0003 */


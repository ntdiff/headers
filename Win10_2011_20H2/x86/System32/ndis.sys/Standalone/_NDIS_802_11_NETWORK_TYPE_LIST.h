typedef enum _NDIS_802_11_NETWORK_TYPE
{
  Ndis802_11FH = 0,
  Ndis802_11DS = 1,
  Ndis802_11OFDM5 = 2,
  Ndis802_11OFDM24 = 3,
  Ndis802_11Automode = 4,
  Ndis802_11NetworkTypeMax = 5,
} NDIS_802_11_NETWORK_TYPE, *PNDIS_802_11_NETWORK_TYPE;

typedef struct _NDIS_802_11_NETWORK_TYPE_LIST
{
  /* 0x0000 */ unsigned long NumberOfItems;
  /* 0x0004 */ enum _NDIS_802_11_NETWORK_TYPE NetworkType[1];
} NDIS_802_11_NETWORK_TYPE_LIST, *PNDIS_802_11_NETWORK_TYPE_LIST; /* size: 0x0008 */


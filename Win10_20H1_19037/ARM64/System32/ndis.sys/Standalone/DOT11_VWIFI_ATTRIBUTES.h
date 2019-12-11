typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _DOT11_VWIFI_COMBINATION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uNumInfrastructure;
  /* 0x0008 */ unsigned long uNumAdhoc;
  /* 0x000c */ unsigned long uNumSoftAP;
} DOT11_VWIFI_COMBINATION, *PDOT11_VWIFI_COMBINATION; /* size: 0x0010 */

struct DOT11_VWIFI_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uTotalNumOfEntries;
  /* 0x0008 */ struct _DOT11_VWIFI_COMBINATION Combinations[1];
}; /* size: 0x0018 */


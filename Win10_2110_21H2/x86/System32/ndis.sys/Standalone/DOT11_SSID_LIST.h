typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _DOT11_SSID
{
  /* 0x0000 */ unsigned long uSSIDLength;
  /* 0x0004 */ unsigned char ucSSID[32];
} DOT11_SSID, *PDOT11_SSID; /* size: 0x0024 */

struct DOT11_SSID_LIST
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uNumOfEntries;
  /* 0x0008 */ unsigned long uTotalNumOfEntries;
  /* 0x000c */ struct _DOT11_SSID SSIDs[1];
}; /* size: 0x0030 */


typedef struct _NDIS_802_11_CONFIGURATION_FH
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long HopPattern;
  /* 0x0008 */ unsigned long HopSet;
  /* 0x000c */ unsigned long DwellTime;
} NDIS_802_11_CONFIGURATION_FH, *PNDIS_802_11_CONFIGURATION_FH; /* size: 0x0010 */

typedef struct _NDIS_802_11_CONFIGURATION
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long BeaconPeriod;
  /* 0x0008 */ unsigned long ATIMWindow;
  /* 0x000c */ unsigned long DSConfig;
  /* 0x0010 */ struct _NDIS_802_11_CONFIGURATION_FH FHConfig;
} NDIS_802_11_CONFIGURATION, *PNDIS_802_11_CONFIGURATION; /* size: 0x0020 */


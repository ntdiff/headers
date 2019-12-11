typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _WWAN_SET_SIGNAL_INDICATION
{
  /* 0x0000 */ unsigned long RssiInterval;
  /* 0x0004 */ unsigned long RssiThreshold;
} WWAN_SET_SIGNAL_INDICATION, *PWWAN_SET_SIGNAL_INDICATION; /* size: 0x0008 */

typedef struct _NDIS_WWAN_SET_SIGNAL_INDICATION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _WWAN_SET_SIGNAL_INDICATION SignalIndication;
} NDIS_WWAN_SET_SIGNAL_INDICATION, *PNDIS_WWAN_SET_SIGNAL_INDICATION; /* size: 0x000c */


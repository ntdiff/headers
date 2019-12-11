typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _WWAN_DRIVER_CAPS
{
  /* 0x0000 */ unsigned long ulMajorVersion;
  /* 0x0004 */ unsigned long ulMinorVersion;
  /* 0x0008 */ unsigned long ulDriverCaps;
} WWAN_DRIVER_CAPS, *PWWAN_DRIVER_CAPS; /* size: 0x000c */

typedef struct _NDIS_WWAN_DRIVER_CAPS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _WWAN_DRIVER_CAPS DriverCaps;
} NDIS_WWAN_DRIVER_CAPS, *PNDIS_WWAN_DRIVER_CAPS; /* size: 0x0010 */


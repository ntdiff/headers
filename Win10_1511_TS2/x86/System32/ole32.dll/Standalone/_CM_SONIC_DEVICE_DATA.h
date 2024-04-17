typedef struct _CM_SONIC_DEVICE_DATA
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned short DataConfigurationRegister;
  /* 0x0006 */ unsigned char EthernetAddress[8];
} CM_SONIC_DEVICE_DATA, *PCM_SONIC_DEVICE_DATA; /* size: 0x000e */


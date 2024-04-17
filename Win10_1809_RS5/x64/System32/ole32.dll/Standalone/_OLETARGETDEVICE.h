typedef struct _OLETARGETDEVICE
{
  /* 0x0000 */ unsigned short otdDeviceNameOffset;
  /* 0x0002 */ unsigned short otdDriverNameOffset;
  /* 0x0004 */ unsigned short otdPortNameOffset;
  /* 0x0006 */ unsigned short otdExtDevmodeOffset;
  /* 0x0008 */ unsigned short otdExtDevmodeSize;
  /* 0x000a */ unsigned short otdEnvironmentOffset;
  /* 0x000c */ unsigned short otdEnvironmentSize;
  /* 0x000e */ unsigned char otdData[1];
  /* 0x000f */ char __PADDING__[1];
} OLETARGETDEVICE, *POLETARGETDEVICE; /* size: 0x0010 */


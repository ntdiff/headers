typedef struct _DISPLAY_DEVICEA
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0004 */ char DeviceName[32];
  /* 0x0024 */ char DeviceString[128];
  /* 0x00a4 */ unsigned long StateFlags;
  /* 0x00a8 */ char DeviceID[128];
  /* 0x0128 */ char DeviceKey[128];
} DISPLAY_DEVICEA, *PDISPLAY_DEVICEA; /* size: 0x01a8 */


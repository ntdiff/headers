typedef struct _DISPLAY_DEVICEW
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0004 */ wchar_t DeviceName[32];
  /* 0x0044 */ wchar_t DeviceString[128];
  /* 0x0144 */ unsigned long StateFlags;
  /* 0x0148 */ wchar_t DeviceID[128];
  /* 0x0248 */ wchar_t DeviceKey[128];
} DISPLAY_DEVICEW, *PDISPLAY_DEVICEW; /* size: 0x0348 */


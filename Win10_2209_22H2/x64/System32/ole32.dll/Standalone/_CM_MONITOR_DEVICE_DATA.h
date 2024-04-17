typedef struct _CM_MONITOR_DEVICE_DATA
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned short HorizontalScreenSize;
  /* 0x0006 */ unsigned short VerticalScreenSize;
  /* 0x0008 */ unsigned short HorizontalResolution;
  /* 0x000a */ unsigned short VerticalResolution;
  /* 0x000c */ unsigned short HorizontalDisplayTimeLow;
  /* 0x000e */ unsigned short HorizontalDisplayTime;
  /* 0x0010 */ unsigned short HorizontalDisplayTimeHigh;
  /* 0x0012 */ unsigned short HorizontalBackPorchLow;
  /* 0x0014 */ unsigned short HorizontalBackPorch;
  /* 0x0016 */ unsigned short HorizontalBackPorchHigh;
  /* 0x0018 */ unsigned short HorizontalFrontPorchLow;
  /* 0x001a */ unsigned short HorizontalFrontPorch;
  /* 0x001c */ unsigned short HorizontalFrontPorchHigh;
  /* 0x001e */ unsigned short HorizontalSyncLow;
  /* 0x0020 */ unsigned short HorizontalSync;
  /* 0x0022 */ unsigned short HorizontalSyncHigh;
  /* 0x0024 */ unsigned short VerticalBackPorchLow;
  /* 0x0026 */ unsigned short VerticalBackPorch;
  /* 0x0028 */ unsigned short VerticalBackPorchHigh;
  /* 0x002a */ unsigned short VerticalFrontPorchLow;
  /* 0x002c */ unsigned short VerticalFrontPorch;
  /* 0x002e */ unsigned short VerticalFrontPorchHigh;
  /* 0x0030 */ unsigned short VerticalSyncLow;
  /* 0x0032 */ unsigned short VerticalSync;
  /* 0x0034 */ unsigned short VerticalSyncHigh;
} CM_MONITOR_DEVICE_DATA, *PCM_MONITOR_DEVICE_DATA; /* size: 0x0036 */


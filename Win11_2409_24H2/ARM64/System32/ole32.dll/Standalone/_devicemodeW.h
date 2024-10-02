typedef struct _POINTL
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
} POINTL, *PPOINTL; /* size: 0x0008 */

typedef struct _devicemodeW
{
  /* 0x0000 */ wchar_t dmDeviceName[32];
  /* 0x0040 */ unsigned short dmSpecVersion;
  /* 0x0042 */ unsigned short dmDriverVersion;
  /* 0x0044 */ unsigned short dmSize;
  /* 0x0046 */ unsigned short dmDriverExtra;
  /* 0x0048 */ unsigned long dmFields;
  union
  {
    struct
    {
      /* 0x004c */ short dmOrientation;
      /* 0x004e */ short dmPaperSize;
      /* 0x0050 */ short dmPaperLength;
      /* 0x0052 */ short dmPaperWidth;
      /* 0x0054 */ short dmScale;
      /* 0x0056 */ short dmCopies;
      /* 0x0058 */ short dmDefaultSource;
      /* 0x005a */ short dmPrintQuality;
    }; /* size: 0x0010 */
    struct
    {
      /* 0x004c */ struct _POINTL dmPosition;
      /* 0x0054 */ unsigned long dmDisplayOrientation;
      /* 0x0058 */ unsigned long dmDisplayFixedOutput;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x005c */ short dmColor;
  /* 0x005e */ short dmDuplex;
  /* 0x0060 */ short dmYResolution;
  /* 0x0062 */ short dmTTOption;
  /* 0x0064 */ short dmCollate;
  /* 0x0066 */ wchar_t dmFormName[32];
  /* 0x00a6 */ unsigned short dmLogPixels;
  /* 0x00a8 */ unsigned long dmBitsPerPel;
  /* 0x00ac */ unsigned long dmPelsWidth;
  /* 0x00b0 */ unsigned long dmPelsHeight;
  union
  {
    /* 0x00b4 */ unsigned long dmDisplayFlags;
    /* 0x00b4 */ unsigned long dmNup;
  }; /* size: 0x0004 */
  /* 0x00b8 */ unsigned long dmDisplayFrequency;
  /* 0x00bc */ unsigned long dmICMMethod;
  /* 0x00c0 */ unsigned long dmICMIntent;
  /* 0x00c4 */ unsigned long dmMediaType;
  /* 0x00c8 */ unsigned long dmDitherType;
  /* 0x00cc */ unsigned long dmReserved1;
  /* 0x00d0 */ unsigned long dmReserved2;
  /* 0x00d4 */ unsigned long dmPanningWidth;
  /* 0x00d8 */ unsigned long dmPanningHeight;
} devicemodeW, *PdevicemodeW; /* size: 0x00dc */


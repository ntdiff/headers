typedef struct _POINTL
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
} POINTL, *PPOINTL; /* size: 0x0008 */

typedef struct _devicemodeA
{
  /* 0x0000 */ unsigned char dmDeviceName[32];
  /* 0x0020 */ unsigned short dmSpecVersion;
  /* 0x0022 */ unsigned short dmDriverVersion;
  /* 0x0024 */ unsigned short dmSize;
  /* 0x0026 */ unsigned short dmDriverExtra;
  /* 0x0028 */ unsigned long dmFields;
  union
  {
    struct
    {
      /* 0x002c */ short dmOrientation;
      /* 0x002e */ short dmPaperSize;
      /* 0x0030 */ short dmPaperLength;
      /* 0x0032 */ short dmPaperWidth;
      /* 0x0034 */ short dmScale;
      /* 0x0036 */ short dmCopies;
      /* 0x0038 */ short dmDefaultSource;
      /* 0x003a */ short dmPrintQuality;
    }; /* size: 0x0010 */
    struct
    {
      /* 0x002c */ struct _POINTL dmPosition;
      /* 0x0034 */ unsigned long dmDisplayOrientation;
      /* 0x0038 */ unsigned long dmDisplayFixedOutput;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x003c */ short dmColor;
  /* 0x003e */ short dmDuplex;
  /* 0x0040 */ short dmYResolution;
  /* 0x0042 */ short dmTTOption;
  /* 0x0044 */ short dmCollate;
  /* 0x0046 */ unsigned char dmFormName[32];
  /* 0x0066 */ unsigned short dmLogPixels;
  /* 0x0068 */ unsigned long dmBitsPerPel;
  /* 0x006c */ unsigned long dmPelsWidth;
  /* 0x0070 */ unsigned long dmPelsHeight;
  union
  {
    /* 0x0074 */ unsigned long dmDisplayFlags;
    /* 0x0074 */ unsigned long dmNup;
  }; /* size: 0x0004 */
  /* 0x0078 */ unsigned long dmDisplayFrequency;
  /* 0x007c */ unsigned long dmICMMethod;
  /* 0x0080 */ unsigned long dmICMIntent;
  /* 0x0084 */ unsigned long dmMediaType;
  /* 0x0088 */ unsigned long dmDitherType;
  /* 0x008c */ unsigned long dmReserved1;
  /* 0x0090 */ unsigned long dmReserved2;
  /* 0x0094 */ unsigned long dmPanningWidth;
  /* 0x0098 */ unsigned long dmPanningHeight;
} devicemodeA, *PdevicemodeA; /* size: 0x009c */


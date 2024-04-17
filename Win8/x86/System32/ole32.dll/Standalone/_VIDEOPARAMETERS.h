typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _VIDEOPARAMETERS
{
  /* 0x0000 */ struct _GUID Guid;
  /* 0x0010 */ unsigned long dwOffset;
  /* 0x0014 */ unsigned long dwCommand;
  /* 0x0018 */ unsigned long dwFlags;
  /* 0x001c */ unsigned long dwMode;
  /* 0x0020 */ unsigned long dwTVStandard;
  /* 0x0024 */ unsigned long dwAvailableModes;
  /* 0x0028 */ unsigned long dwAvailableTVStandard;
  /* 0x002c */ unsigned long dwFlickerFilter;
  /* 0x0030 */ unsigned long dwOverScanX;
  /* 0x0034 */ unsigned long dwOverScanY;
  /* 0x0038 */ unsigned long dwMaxUnscaledX;
  /* 0x003c */ unsigned long dwMaxUnscaledY;
  /* 0x0040 */ unsigned long dwPositionX;
  /* 0x0044 */ unsigned long dwPositionY;
  /* 0x0048 */ unsigned long dwBrightness;
  /* 0x004c */ unsigned long dwContrast;
  /* 0x0050 */ unsigned long dwCPType;
  /* 0x0054 */ unsigned long dwCPCommand;
  /* 0x0058 */ unsigned long dwCPStandard;
  /* 0x005c */ unsigned long dwCPKey;
  /* 0x0060 */ unsigned long bCP_APSTriggerBits;
  /* 0x0064 */ unsigned char bOEMCopyProtection[256];
} VIDEOPARAMETERS, *PVIDEOPARAMETERS; /* size: 0x0164 */


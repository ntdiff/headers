enum DISPLAYCONFIG_MODE_INFO_TYPE
{
  DISPLAYCONFIG_MODE_INFO_TYPE_SOURCE = 1,
  DISPLAYCONFIG_MODE_INFO_TYPE_TARGET = 2,
  DISPLAYCONFIG_MODE_INFO_TYPE_FORCE_UINT32 = -1,
};

typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

struct DISPLAYCONFIG_RATIONAL
{
  /* 0x0000 */ unsigned int Numerator;
  /* 0x0004 */ unsigned int Denominator;
}; /* size: 0x0008 */

struct DISPLAYCONFIG_2DREGION
{
  /* 0x0000 */ unsigned int cx;
  /* 0x0004 */ unsigned int cy;
}; /* size: 0x0008 */

enum DISPLAYCONFIG_SCANLINE_ORDERING
{
  DISPLAYCONFIG_SCANLINE_ORDERING_UNSPECIFIED = 0,
  DISPLAYCONFIG_SCANLINE_ORDERING_PROGRESSIVE = 1,
  DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED = 2,
  DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_UPPERFIELDFIRST = 2,
  DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_LOWERFIELDFIRST = 3,
  DISPLAYCONFIG_SCANLINE_ORDERING_FORCE_UINT32 = -1,
};

struct DISPLAYCONFIG_VIDEO_SIGNAL_INFO
{
  /* 0x0000 */ unsigned __int64 pixelRate;
  /* 0x0008 */ struct DISPLAYCONFIG_RATIONAL hSyncFreq;
  /* 0x0010 */ struct DISPLAYCONFIG_RATIONAL vSyncFreq;
  /* 0x0018 */ struct DISPLAYCONFIG_2DREGION activeSize;
  /* 0x0020 */ struct DISPLAYCONFIG_2DREGION totalSize;
  /* 0x0028 */ unsigned int videoStandard;
  /* 0x002c */ enum DISPLAYCONFIG_SCANLINE_ORDERING scanLineOrdering;
}; /* size: 0x0030 */

struct DISPLAYCONFIG_TARGET_MODE
{
  /* 0x0000 */ struct DISPLAYCONFIG_VIDEO_SIGNAL_INFO targetVideoSignalInfo;
}; /* size: 0x0030 */

enum DISPLAYCONFIG_PIXELFORMAT
{
  DISPLAYCONFIG_PIXELFORMAT_8BPP = 1,
  DISPLAYCONFIG_PIXELFORMAT_16BPP = 2,
  DISPLAYCONFIG_PIXELFORMAT_24BPP = 3,
  DISPLAYCONFIG_PIXELFORMAT_32BPP = 4,
  DISPLAYCONFIG_PIXELFORMAT_NONGDI = 5,
  DISPLAYCONFIG_PIXELFORMAT_FORCE_UINT32 = -1,
};

typedef struct _POINTL
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
} POINTL, *PPOINTL; /* size: 0x0008 */

struct DISPLAYCONFIG_SOURCE_MODE
{
  /* 0x0000 */ unsigned int width;
  /* 0x0004 */ unsigned int height;
  /* 0x0008 */ enum DISPLAYCONFIG_PIXELFORMAT pixelFormat;
  /* 0x000c */ struct _POINTL position;
}; /* size: 0x0014 */

struct DISPLAYCONFIG_MODE_INFO
{
  /* 0x0000 */ enum DISPLAYCONFIG_MODE_INFO_TYPE infoType;
  /* 0x0004 */ unsigned int id;
  /* 0x0008 */ struct _LUID adapterId;
  union
  {
    /* 0x0010 */ struct DISPLAYCONFIG_TARGET_MODE targetMode;
    struct
    {
      /* 0x0010 */ struct DISPLAYCONFIG_SOURCE_MODE sourceMode;
      /* 0x0024 */ long __PADDING__[7];
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
}; /* size: 0x0040 */


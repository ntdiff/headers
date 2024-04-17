enum DISPLAYCONFIG_MODE_INFO_TYPE
{
  DISPLAYCONFIG_MODE_INFO_TYPE_SOURCE = 1,
  DISPLAYCONFIG_MODE_INFO_TYPE_TARGET = 2,
  DISPLAYCONFIG_MODE_INFO_TYPE_DESKTOP_IMAGE = 3,
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
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0028 */ unsigned int videoStandard : 16; /* bit position: 0 */
        /* 0x0028 */ unsigned int vSyncFreqDivider : 6; /* bit position: 16 */
        /* 0x0028 */ unsigned int reserved : 10; /* bit position: 22 */
      }; /* bitfield */
    } /* size: 0x0004 */ AdditionalSignalInfo;
    /* 0x0028 */ unsigned int videoStandard;
  }; /* size: 0x0004 */
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

typedef struct _RECTL
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
} RECTL, *PRECTL; /* size: 0x0010 */

struct DISPLAYCONFIG_DESKTOP_IMAGE_INFO
{
  /* 0x0000 */ struct _POINTL PathSourceSize;
  /* 0x0008 */ struct _RECTL DesktopImageRegion;
  /* 0x0018 */ struct _RECTL DesktopImageClip;
}; /* size: 0x0028 */

struct DISPLAYCONFIG_MODE_INFO
{
  /* 0x0000 */ enum DISPLAYCONFIG_MODE_INFO_TYPE infoType;
  /* 0x0004 */ unsigned int id;
  /* 0x0008 */ struct _LUID adapterId;
  union
  {
    /* 0x0010 */ struct DISPLAYCONFIG_TARGET_MODE targetMode;
    /* 0x0010 */ struct DISPLAYCONFIG_SOURCE_MODE sourceMode;
    struct
    {
      /* 0x0010 */ struct DISPLAYCONFIG_DESKTOP_IMAGE_INFO desktopImageInfo;
      /* 0x0038 */ long __PADDING__[2];
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
}; /* size: 0x0040 */


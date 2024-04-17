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


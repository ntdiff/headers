typedef struct _POINTL
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
} POINTL, *PPOINTL; /* size: 0x0008 */

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


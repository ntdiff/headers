typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _SYSTEM_PIXEL_FORMAT
{
  SystemPixelFormatUnknown = 0,
  SystemPixelFormatR8G8B8 = 1,
  SystemPixelFormatR8G8B8X8 = 2,
  SystemPixelFormatB8G8R8 = 3,
  SystemPixelFormatB8G8R8X8 = 4,
} SYSTEM_PIXEL_FORMAT, *PSYSTEM_PIXEL_FORMAT;

typedef struct _SYSTEM_BOOT_GRAPHICS_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER FrameBuffer;
  /* 0x0008 */ unsigned long Width;
  /* 0x000c */ unsigned long Height;
  /* 0x0010 */ unsigned long PixelStride;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ enum _SYSTEM_PIXEL_FORMAT Format;
  /* 0x001c */ unsigned long DisplayRotation;
} SYSTEM_BOOT_GRAPHICS_INFORMATION, *PSYSTEM_BOOT_GRAPHICS_INFORMATION; /* size: 0x0020 */


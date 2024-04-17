typedef enum _INBV_PIXEL_FORMAT
{
  PixelFormatUnknown = 0,
  PixelFormat4BitPlanar = 1,
  PixelFormatR8G8B8 = 2,
  PixelFormatR8G8B8X8 = 3,
  PixelFormatB8G8R8 = 4,
  PixelFormatB8G8R8X8 = 5,
} INBV_PIXEL_FORMAT, *PINBV_PIXEL_FORMAT;

typedef struct _INBV_MODE_INFORMATION
{
  /* 0x0000 */ unsigned long Height;
  /* 0x0004 */ unsigned long Width;
  /* 0x0008 */ unsigned long Stride;
  /* 0x000c */ enum _INBV_PIXEL_FORMAT PixelFormat;
} INBV_MODE_INFORMATION, *PINBV_MODE_INFORMATION; /* size: 0x0010 */


typedef enum _INBV_PIXEL_FORMAT
{
  PixelFormatUnknown = 0,
  PixelFormat4BitPlanar = 1,
  PixelFormatR8G8B8 = 2,
  PixelFormatR8G8B8X8 = 3,
  PixelFormatB8G8R8 = 4,
  PixelFormatB8G8R8X8 = 5,
} INBV_PIXEL_FORMAT, *PINBV_PIXEL_FORMAT;

typedef struct _INBV_GRAPHICS_RECTANGLE
{
  /* 0x0000 */ unsigned long Height;
  /* 0x0004 */ unsigned long Width;
  /* 0x0008 */ enum _INBV_PIXEL_FORMAT PixelFormat;
  /* 0x000c */ unsigned long Size;
  /* 0x0010 */ void* Data;
} INBV_GRAPHICS_RECTANGLE, *PINBV_GRAPHICS_RECTANGLE; /* size: 0x0018 */


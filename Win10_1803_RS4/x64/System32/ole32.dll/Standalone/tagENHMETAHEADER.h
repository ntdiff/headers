typedef struct _RECTL
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
} RECTL, *PRECTL; /* size: 0x0010 */

struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

struct tagENHMETAHEADER
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
  /* 0x0008 */ struct _RECTL rclBounds;
  /* 0x0018 */ struct _RECTL rclFrame;
  /* 0x0028 */ unsigned long dSignature;
  /* 0x002c */ unsigned long nVersion;
  /* 0x0030 */ unsigned long nBytes;
  /* 0x0034 */ unsigned long nRecords;
  /* 0x0038 */ unsigned short nHandles;
  /* 0x003a */ unsigned short sReserved;
  /* 0x003c */ unsigned long nDescription;
  /* 0x0040 */ unsigned long offDescription;
  /* 0x0044 */ unsigned long nPalEntries;
  /* 0x0048 */ struct tagSIZE szlDevice;
  /* 0x0050 */ struct tagSIZE szlMillimeters;
  /* 0x0058 */ unsigned long cbPixelFormat;
  /* 0x005c */ unsigned long offPixelFormat;
  /* 0x0060 */ unsigned long bOpenGL;
  /* 0x0064 */ struct tagSIZE szlMicrometers;
}; /* size: 0x006c */


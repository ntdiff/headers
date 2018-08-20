typedef struct _KiIoAccessMap
{
  /* 0x0000 */ unsigned char DirectionMap[32];
  /* 0x0020 */ unsigned char IoMap[8196];
} KiIoAccessMap, *PKiIoAccessMap; /* size: 0x2024 */


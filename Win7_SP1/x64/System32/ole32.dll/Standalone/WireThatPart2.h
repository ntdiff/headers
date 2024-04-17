struct WireThatPart1
{
  /* 0x0000 */ unsigned long flags;
  /* 0x0004 */ unsigned long unique;
}; /* size: 0x0008 */

struct WireExtentArray
{
  /* 0x0000 */ unsigned long size;
  /* 0x0004 */ unsigned long reserved;
  /* 0x0008 */ unsigned long unique;
  /* 0x000c */ unsigned long rounded_size;
  /* 0x0010 */ unsigned long unique_flag[2];
}; /* size: 0x0018 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct WireExtent
{
  /* 0x0000 */ unsigned long rounded_size;
  /* 0x0004 */ struct _GUID id;
  /* 0x0014 */ unsigned long size;
}; /* size: 0x0018 */

struct WireThatPart2
{
  /* 0x0000 */ struct WireThatPart1 part1;
  /* 0x0008 */ struct WireExtentArray ea;
  /* 0x0020 */ struct WireExtent e;
}; /* size: 0x0038 */


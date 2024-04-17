struct tagCOMVERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
}; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct WireThisPart1
{
  /* 0x0000 */ struct tagCOMVERSION version;
  /* 0x0004 */ unsigned long flags;
  /* 0x0008 */ unsigned long reserved1;
  /* 0x000c */ struct _GUID cid;
  /* 0x001c */ unsigned long unique;
}; /* size: 0x0020 */

struct WireExtentArray
{
  /* 0x0000 */ unsigned long size;
  /* 0x0004 */ unsigned long reserved;
  /* 0x0008 */ unsigned long unique;
  /* 0x000c */ unsigned long rounded_size;
  /* 0x0010 */ unsigned long unique_flag[2];
}; /* size: 0x0018 */

struct WireExtent
{
  /* 0x0000 */ unsigned long rounded_size;
  /* 0x0004 */ struct _GUID id;
  /* 0x0014 */ unsigned long size;
}; /* size: 0x0018 */

struct WireThisPart2
{
  /* 0x0000 */ struct WireThisPart1 part1;
  /* 0x0020 */ struct WireExtentArray ea;
  /* 0x0038 */ struct WireExtent e;
}; /* size: 0x0050 */

union WireThis
{
  union
  {
    /* 0x0000 */ struct WireThisPart1 c;
    /* 0x0000 */ struct WireThisPart2 d;
  }; /* size: 0x0050 */
}; /* size: 0x0050 */


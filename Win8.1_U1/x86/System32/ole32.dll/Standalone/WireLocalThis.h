struct WireLocalThisPart1
{
  /* 0x0000 */ unsigned long dwFlags;
  /* 0x0004 */ unsigned long dwClientThread;
  /* 0x0008 */ unsigned long reserved;
  /* 0x000c */ unsigned long unique;
}; /* size: 0x0010 */

struct WireArrayOfTouchedAstas
{
  /* 0x0000 */ unsigned long size;
  /* 0x0004 */ unsigned long reserved;
  /* 0x0008 */ unsigned long ref;
  /* 0x000c */ unsigned long array_size;
  /* 0x0010 */ unsigned __int64 astaOxids[1];
}; /* size: 0x0018 */

struct WireLocalThisPart2
{
  /* 0x0000 */ struct WireLocalThisPart1 part1;
  /* 0x0010 */ struct WireArrayOfTouchedAstas touchedAstas;
}; /* size: 0x0028 */

union WireLocalThis
{
  union
  {
    /* 0x0000 */ struct WireLocalThisPart1 c;
    /* 0x0000 */ struct WireLocalThisPart2 d;
  }; /* size: 0x0028 */
}; /* size: 0x0028 */


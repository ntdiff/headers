struct tagPALETTEENTRY
{
  /* 0x0000 */ unsigned char peRed;
  /* 0x0001 */ unsigned char peGreen;
  /* 0x0002 */ unsigned char peBlue;
  /* 0x0003 */ unsigned char peFlags;
}; /* size: 0x0004 */

struct tagLOGPALETTE
{
  /* 0x0000 */ unsigned short palVersion;
  /* 0x0002 */ unsigned short palNumEntries;
  /* 0x0004 */ struct tagPALETTEENTRY palPalEntry[1];
}; /* size: 0x0008 */


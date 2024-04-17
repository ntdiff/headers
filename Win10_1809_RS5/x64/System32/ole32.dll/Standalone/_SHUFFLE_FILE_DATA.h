typedef struct _SHUFFLE_FILE_DATA
{
  /* 0x0000 */ __int64 StartingOffset;
  /* 0x0008 */ __int64 Length;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ long __PADDING__[1];
} SHUFFLE_FILE_DATA, *PSHUFFLE_FILE_DATA; /* size: 0x0018 */


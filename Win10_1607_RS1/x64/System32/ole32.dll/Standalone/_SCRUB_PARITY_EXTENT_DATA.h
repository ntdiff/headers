typedef struct _SCRUB_PARITY_EXTENT
{
  /* 0x0000 */ __int64 Offset;
  /* 0x0008 */ unsigned __int64 Length;
} SCRUB_PARITY_EXTENT, *PSCRUB_PARITY_EXTENT; /* size: 0x0010 */

typedef struct _SCRUB_PARITY_EXTENT_DATA
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned short NumberOfParityExtents;
  /* 0x0006 */ unsigned short MaximumNumberOfParityExtents;
  /* 0x0008 */ struct _SCRUB_PARITY_EXTENT ParityExtents[1];
} SCRUB_PARITY_EXTENT_DATA, *PSCRUB_PARITY_EXTENT_DATA; /* size: 0x0018 */


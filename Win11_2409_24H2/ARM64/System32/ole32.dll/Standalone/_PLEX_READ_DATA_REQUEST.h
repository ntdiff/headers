typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _PLEX_READ_DATA_REQUEST
{
  /* 0x0000 */ union _LARGE_INTEGER ByteOffset;
  /* 0x0008 */ unsigned long ByteLength;
  /* 0x000c */ unsigned long PlexNumber;
} PLEX_READ_DATA_REQUEST, *PPLEX_READ_DATA_REQUEST; /* size: 0x0010 */


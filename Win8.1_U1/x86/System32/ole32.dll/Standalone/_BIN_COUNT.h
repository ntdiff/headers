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

typedef struct _BIN_RANGE
{
  /* 0x0000 */ union _LARGE_INTEGER StartValue;
  /* 0x0008 */ union _LARGE_INTEGER Length;
} BIN_RANGE, *PBIN_RANGE; /* size: 0x0010 */

typedef struct _BIN_COUNT
{
  /* 0x0000 */ struct _BIN_RANGE BinRange;
  /* 0x0010 */ unsigned long BinCount;
  /* 0x0014 */ long __PADDING__[1];
} BIN_COUNT, *PBIN_COUNT; /* size: 0x0018 */


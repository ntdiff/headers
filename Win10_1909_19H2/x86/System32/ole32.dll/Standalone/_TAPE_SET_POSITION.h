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

typedef struct _TAPE_SET_POSITION
{
  /* 0x0000 */ unsigned long Method;
  /* 0x0004 */ unsigned long Partition;
  /* 0x0008 */ union _LARGE_INTEGER Offset;
  /* 0x0010 */ unsigned char Immediate;
  /* 0x0011 */ char __PADDING__[7];
} TAPE_SET_POSITION, *PTAPE_SET_POSITION; /* size: 0x0018 */


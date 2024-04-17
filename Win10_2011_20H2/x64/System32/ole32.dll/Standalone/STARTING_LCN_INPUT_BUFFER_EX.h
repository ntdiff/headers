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

struct STARTING_LCN_INPUT_BUFFER_EX
{
  /* 0x0000 */ union _LARGE_INTEGER StartingLcn;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ long __PADDING__[1];
}; /* size: 0x0010 */


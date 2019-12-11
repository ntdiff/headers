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

class NdisStopwatch
{
  /* 0x0000 */ union _LARGE_INTEGER QpcStartTime;
  /* 0x0008 */ union _LARGE_INTEGER QpFrequency;
  /* 0x0010 */ union _LARGE_INTEGER QpcLastStopTime;
}; /* size: 0x0018 */


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

typedef struct _LEAP_SECOND_DATA
{
  /* 0x0000 */ unsigned char Enabled;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ union _LARGE_INTEGER Data[1];
} LEAP_SECOND_DATA, *PLEAP_SECOND_DATA; /* size: 0x0010 */


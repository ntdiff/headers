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

struct DEBUG_MEMORY_REQUIREMENTS
{
  /* 0x0000 */ union _LARGE_INTEGER Start;
  /* 0x0008 */ union _LARGE_INTEGER MaxEnd;
  /* 0x0010 */ void* VirtualAddress;
  /* 0x0018 */ unsigned long Length;
  /* 0x001c */ unsigned char Cached;
  /* 0x001d */ unsigned char Aligned;
  /* 0x001e */ char __PADDING__[2];
}; /* size: 0x0020 */


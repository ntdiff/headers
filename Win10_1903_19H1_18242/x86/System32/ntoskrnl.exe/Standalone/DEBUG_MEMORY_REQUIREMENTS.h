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
  /* 0x0014 */ unsigned long Length;
  /* 0x0018 */ unsigned char Cached;
  /* 0x0019 */ unsigned char Aligned;
  /* 0x001a */ char __PADDING__[6];
}; /* size: 0x0020 */


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

typedef struct _NDK_SGE
{
  union
  {
    /* 0x0000 */ void* VirtualAddress;
    /* 0x0000 */ union _LARGE_INTEGER LogicalAddress;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ unsigned int MemoryRegionToken;
} NDK_SGE, *PNDK_SGE; /* size: 0x0010 */


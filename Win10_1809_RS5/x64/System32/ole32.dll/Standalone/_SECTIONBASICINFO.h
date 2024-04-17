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

typedef struct _SECTIONBASICINFO
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0008 */ unsigned long AllocationAttributes;
  /* 0x0010 */ union _LARGE_INTEGER MaximumSize;
} SECTIONBASICINFO, *PSECTIONBASICINFO; /* size: 0x0018 */


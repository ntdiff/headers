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

typedef struct _REPAIR_COPIES_OUTPUT
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Status;
  /* 0x0008 */ union _LARGE_INTEGER ResumeFileOffset;
} REPAIR_COPIES_OUTPUT, *PREPAIR_COPIES_OUTPUT; /* size: 0x0010 */


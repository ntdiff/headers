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

typedef struct _SYSDBG_PHYSICAL
{
  /* 0x0000 */ union _LARGE_INTEGER Address;
  /* 0x0008 */ void* Buffer;
  /* 0x000c */ unsigned long Request;
} SYSDBG_PHYSICAL, *PSYSDBG_PHYSICAL; /* size: 0x0010 */


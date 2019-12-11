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

typedef struct _NDK_LOGICAL_ADDRESS_MAPPING
{
  /* 0x0000 */ void* AdapterContext;
  /* 0x0008 */ unsigned long AdapterPageCount;
  /* 0x0010 */ union _LARGE_INTEGER AdapterPageArray[1];
} NDK_LOGICAL_ADDRESS_MAPPING, *PNDK_LOGICAL_ADDRESS_MAPPING; /* size: 0x0018 */


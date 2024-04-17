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

struct RETRIEVAL_POINTERS_BUFFER
{
  /* 0x0000 */ unsigned long ExtentCount;
  /* 0x0008 */ union _LARGE_INTEGER StartingVcn;
  /* 0x0010 */ struct
  {
    /* 0x0010 */ union _LARGE_INTEGER NextVcn;
    /* 0x0018 */ union _LARGE_INTEGER Lcn;
  } /* size: 0x0010 */ Extents[1];
}; /* size: 0x0020 */


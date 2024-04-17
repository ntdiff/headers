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

struct MOVE_FILE_DATA
{
  /* 0x0000 */ void* FileHandle;
  /* 0x0008 */ union _LARGE_INTEGER StartingVcn;
  /* 0x0010 */ union _LARGE_INTEGER StartingLcn;
  /* 0x0018 */ unsigned long ClusterCount;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */


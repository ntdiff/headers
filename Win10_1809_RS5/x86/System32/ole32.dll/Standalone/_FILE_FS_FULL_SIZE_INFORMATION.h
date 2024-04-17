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

typedef struct _FILE_FS_FULL_SIZE_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER TotalAllocationUnits;
  /* 0x0008 */ union _LARGE_INTEGER CallerAvailableAllocationUnits;
  /* 0x0010 */ union _LARGE_INTEGER ActualAvailableAllocationUnits;
  /* 0x0018 */ unsigned long SectorsPerAllocationUnit;
  /* 0x001c */ unsigned long BytesPerSector;
} FILE_FS_FULL_SIZE_INFORMATION, *PFILE_FS_FULL_SIZE_INFORMATION; /* size: 0x0020 */


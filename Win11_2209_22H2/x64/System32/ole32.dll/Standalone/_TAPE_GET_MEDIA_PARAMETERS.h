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

typedef struct _TAPE_GET_MEDIA_PARAMETERS
{
  /* 0x0000 */ union _LARGE_INTEGER Capacity;
  /* 0x0008 */ union _LARGE_INTEGER Remaining;
  /* 0x0010 */ unsigned long BlockSize;
  /* 0x0014 */ unsigned long PartitionCount;
  /* 0x0018 */ unsigned char WriteProtected;
  /* 0x0019 */ char __PADDING__[7];
} TAPE_GET_MEDIA_PARAMETERS, *PTAPE_GET_MEDIA_PARAMETERS; /* size: 0x0020 */


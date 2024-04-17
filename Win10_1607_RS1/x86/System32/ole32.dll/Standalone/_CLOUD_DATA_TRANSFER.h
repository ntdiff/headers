typedef struct _FILE_ID_128
{
  /* 0x0000 */ unsigned char Identifier[16];
} FILE_ID_128, *PFILE_ID_128; /* size: 0x0010 */

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

typedef struct _CLOUD_DATA_TRANSFER
{
  /* 0x0000 */ struct _FILE_ID_128 TargetFileId;
  /* 0x0010 */ union _LARGE_INTEGER RequiredOffset;
  /* 0x0018 */ union _LARGE_INTEGER ByteOffset;
  /* 0x0020 */ unsigned long RequiredLength;
  /* 0x0024 */ unsigned long Length;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ long ServiceStatus;
} CLOUD_DATA_TRANSFER, *PCLOUD_DATA_TRANSFER; /* size: 0x0030 */


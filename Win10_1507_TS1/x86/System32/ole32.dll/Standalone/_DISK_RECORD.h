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

typedef struct _DISK_RECORD
{
  /* 0x0000 */ union _LARGE_INTEGER ByteOffset;
  /* 0x0008 */ union _LARGE_INTEGER StartTime;
  /* 0x0010 */ union _LARGE_INTEGER EndTime;
  /* 0x0018 */ void* VirtualAddress;
  /* 0x001c */ unsigned long NumberOfBytes;
  /* 0x0020 */ unsigned char DeviceNumber;
  /* 0x0021 */ unsigned char ReadRequest;
  /* 0x0022 */ char __PADDING__[6];
} DISK_RECORD, *PDISK_RECORD; /* size: 0x0028 */


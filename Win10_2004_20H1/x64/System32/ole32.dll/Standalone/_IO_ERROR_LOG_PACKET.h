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

typedef struct _IO_ERROR_LOG_PACKET
{
  /* 0x0000 */ unsigned char MajorFunctionCode;
  /* 0x0001 */ unsigned char RetryCount;
  /* 0x0002 */ unsigned short DumpDataSize;
  /* 0x0004 */ unsigned short NumberOfStrings;
  /* 0x0006 */ unsigned short StringOffset;
  /* 0x0008 */ unsigned short EventCategory;
  /* 0x000c */ long ErrorCode;
  /* 0x0010 */ unsigned long UniqueErrorValue;
  /* 0x0014 */ long FinalStatus;
  /* 0x0018 */ unsigned long SequenceNumber;
  /* 0x001c */ unsigned long IoControlCode;
  /* 0x0020 */ union _LARGE_INTEGER DeviceOffset;
  /* 0x0028 */ unsigned long DumpData[1];
  /* 0x002c */ long __PADDING__[1];
} IO_ERROR_LOG_PACKET, *PIO_ERROR_LOG_PACKET; /* size: 0x0030 */


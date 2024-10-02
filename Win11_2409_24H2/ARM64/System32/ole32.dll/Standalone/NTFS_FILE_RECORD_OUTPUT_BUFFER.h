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

struct NTFS_FILE_RECORD_OUTPUT_BUFFER
{
  /* 0x0000 */ union _LARGE_INTEGER FileReferenceNumber;
  /* 0x0008 */ unsigned long FileRecordLength;
  /* 0x000c */ unsigned char FileRecordBuffer[1];
  /* 0x000d */ char __PADDING__[3];
}; /* size: 0x0010 */


struct USN_RECORD_COMMON_HEADER
{
  /* 0x0000 */ unsigned long RecordLength;
  /* 0x0004 */ unsigned short MajorVersion;
  /* 0x0006 */ unsigned short MinorVersion;
}; /* size: 0x0008 */

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

struct USN_RECORD_V2
{
  /* 0x0000 */ unsigned long RecordLength;
  /* 0x0004 */ unsigned short MajorVersion;
  /* 0x0006 */ unsigned short MinorVersion;
  /* 0x0008 */ unsigned __int64 FileReferenceNumber;
  /* 0x0010 */ unsigned __int64 ParentFileReferenceNumber;
  /* 0x0018 */ __int64 Usn;
  /* 0x0020 */ union _LARGE_INTEGER TimeStamp;
  /* 0x0028 */ unsigned long Reason;
  /* 0x002c */ unsigned long SourceInfo;
  /* 0x0030 */ unsigned long SecurityId;
  /* 0x0034 */ unsigned long FileAttributes;
  /* 0x0038 */ unsigned short FileNameLength;
  /* 0x003a */ unsigned short FileNameOffset;
  /* 0x003c */ wchar_t FileName[1];
  /* 0x003e */ char __PADDING__[2];
}; /* size: 0x0040 */

typedef struct _FILE_ID_128
{
  /* 0x0000 */ unsigned char Identifier[16];
} FILE_ID_128, *PFILE_ID_128; /* size: 0x0010 */

struct USN_RECORD_V3
{
  /* 0x0000 */ unsigned long RecordLength;
  /* 0x0004 */ unsigned short MajorVersion;
  /* 0x0006 */ unsigned short MinorVersion;
  /* 0x0008 */ struct _FILE_ID_128 FileReferenceNumber;
  /* 0x0018 */ struct _FILE_ID_128 ParentFileReferenceNumber;
  /* 0x0028 */ __int64 Usn;
  /* 0x0030 */ union _LARGE_INTEGER TimeStamp;
  /* 0x0038 */ unsigned long Reason;
  /* 0x003c */ unsigned long SourceInfo;
  /* 0x0040 */ unsigned long SecurityId;
  /* 0x0044 */ unsigned long FileAttributes;
  /* 0x0048 */ unsigned short FileNameLength;
  /* 0x004a */ unsigned short FileNameOffset;
  /* 0x004c */ wchar_t FileName[1];
  /* 0x004e */ char __PADDING__[2];
}; /* size: 0x0050 */

struct USN_RECORD_EXTENT
{
  /* 0x0000 */ __int64 Offset;
  /* 0x0008 */ __int64 Length;
}; /* size: 0x0010 */

struct USN_RECORD_V4
{
  /* 0x0000 */ struct USN_RECORD_COMMON_HEADER Header;
  /* 0x0008 */ struct _FILE_ID_128 FileReferenceNumber;
  /* 0x0018 */ struct _FILE_ID_128 ParentFileReferenceNumber;
  /* 0x0028 */ __int64 Usn;
  /* 0x0030 */ unsigned long Reason;
  /* 0x0034 */ unsigned long SourceInfo;
  /* 0x0038 */ unsigned long RemainingExtents;
  /* 0x003c */ unsigned short NumberOfExtents;
  /* 0x003e */ unsigned short ExtentSize;
  /* 0x0040 */ struct USN_RECORD_EXTENT Extents[1];
}; /* size: 0x0050 */

union USN_RECORD_UNION
{
  union
  {
    /* 0x0000 */ struct USN_RECORD_COMMON_HEADER Header;
    /* 0x0000 */ struct USN_RECORD_V2 V2;
    /* 0x0000 */ struct USN_RECORD_V3 V3;
    /* 0x0000 */ struct USN_RECORD_V4 V4;
  }; /* size: 0x0050 */
}; /* size: 0x0050 */


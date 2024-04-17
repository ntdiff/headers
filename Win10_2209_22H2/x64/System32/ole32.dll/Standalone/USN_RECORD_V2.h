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


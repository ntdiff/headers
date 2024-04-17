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


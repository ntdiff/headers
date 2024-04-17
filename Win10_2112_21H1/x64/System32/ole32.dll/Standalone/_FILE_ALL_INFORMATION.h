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

typedef struct _FILE_BASIC_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER CreationTime;
  /* 0x0008 */ union _LARGE_INTEGER LastAccessTime;
  /* 0x0010 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0018 */ union _LARGE_INTEGER ChangeTime;
  /* 0x0020 */ unsigned long FileAttributes;
  /* 0x0024 */ long __PADDING__[1];
} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION; /* size: 0x0028 */

typedef struct _FILE_STANDARD_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0008 */ union _LARGE_INTEGER EndOfFile;
  /* 0x0010 */ unsigned long NumberOfLinks;
  /* 0x0014 */ unsigned char DeletePending;
  /* 0x0015 */ unsigned char Directory;
  /* 0x0016 */ char __PADDING__[2];
} FILE_STANDARD_INFORMATION, *PFILE_STANDARD_INFORMATION; /* size: 0x0018 */

typedef struct _FILE_INTERNAL_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER IndexNumber;
} FILE_INTERNAL_INFORMATION, *PFILE_INTERNAL_INFORMATION; /* size: 0x0008 */

typedef struct _FILE_EA_INFORMATION
{
  /* 0x0000 */ unsigned long EaSize;
} FILE_EA_INFORMATION, *PFILE_EA_INFORMATION; /* size: 0x0004 */

typedef struct _FILE_ACCESS_INFORMATION
{
  /* 0x0000 */ unsigned long AccessFlags;
} FILE_ACCESS_INFORMATION, *PFILE_ACCESS_INFORMATION; /* size: 0x0004 */

typedef struct _FILE_POSITION_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER CurrentByteOffset;
} FILE_POSITION_INFORMATION, *PFILE_POSITION_INFORMATION; /* size: 0x0008 */

typedef struct _FILE_MODE_INFORMATION
{
  /* 0x0000 */ unsigned long Mode;
} FILE_MODE_INFORMATION, *PFILE_MODE_INFORMATION; /* size: 0x0004 */

typedef struct _FILE_ALIGNMENT_INFORMATION
{
  /* 0x0000 */ unsigned long AlignmentRequirement;
} FILE_ALIGNMENT_INFORMATION, *PFILE_ALIGNMENT_INFORMATION; /* size: 0x0004 */

typedef struct _FILE_NAME_INFORMATION
{
  /* 0x0000 */ unsigned long FileNameLength;
  /* 0x0004 */ wchar_t FileName[1];
  /* 0x0006 */ char __PADDING__[2];
} FILE_NAME_INFORMATION, *PFILE_NAME_INFORMATION; /* size: 0x0008 */

typedef struct _FILE_ALL_INFORMATION
{
  /* 0x0000 */ struct _FILE_BASIC_INFORMATION BasicInformation;
  /* 0x0028 */ struct _FILE_STANDARD_INFORMATION StandardInformation;
  /* 0x0040 */ struct _FILE_INTERNAL_INFORMATION InternalInformation;
  /* 0x0048 */ struct _FILE_EA_INFORMATION EaInformation;
  /* 0x004c */ struct _FILE_ACCESS_INFORMATION AccessInformation;
  /* 0x0050 */ struct _FILE_POSITION_INFORMATION PositionInformation;
  /* 0x0058 */ struct _FILE_MODE_INFORMATION ModeInformation;
  /* 0x005c */ struct _FILE_ALIGNMENT_INFORMATION AlignmentInformation;
  /* 0x0060 */ struct _FILE_NAME_INFORMATION NameInformation;
} FILE_ALL_INFORMATION, *PFILE_ALL_INFORMATION; /* size: 0x0068 */


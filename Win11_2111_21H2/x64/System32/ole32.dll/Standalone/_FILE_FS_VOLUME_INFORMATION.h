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

typedef struct _FILE_FS_VOLUME_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER VolumeCreationTime;
  /* 0x0008 */ unsigned long VolumeSerialNumber;
  /* 0x000c */ unsigned long VolumeLabelLength;
  /* 0x0010 */ unsigned char SupportsObjects;
  /* 0x0012 */ wchar_t VolumeLabel[1];
  /* 0x0014 */ long __PADDING__[1];
} FILE_FS_VOLUME_INFORMATION, *PFILE_FS_VOLUME_INFORMATION; /* size: 0x0018 */


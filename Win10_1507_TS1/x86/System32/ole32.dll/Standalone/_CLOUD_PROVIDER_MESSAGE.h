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

typedef struct _CLOUD_PROVIDER_MESSAGE
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long MessageCode;
  union
  {
    struct
    {
      /* 0x0008 */ struct _FILE_ID_128 FileId;
      /* 0x0018 */ wchar_t VolumeGuidName[48];
    } /* size: 0x0070 */ FileOpen;
    struct
    {
      /* 0x0008 */ struct _FILE_ID_128 FileId;
      /* 0x0018 */ union _LARGE_INTEGER ContainingOffset;
      /* 0x0020 */ union _LARGE_INTEGER ContainingLength;
      /* 0x0028 */ union _LARGE_INTEGER RequiredOffset;
      /* 0x0030 */ unsigned long RequiredLength;
      /* 0x0034 */ unsigned long Flags;
      /* 0x0038 */ unsigned long Alignment;
      /* 0x003c */ wchar_t VolumeGuidName[48];
      /* 0x009c */ long __PADDING__[1];
    } /* size: 0x0098 */ FetchData;
    struct
    {
      /* 0x0008 */ struct _FILE_ID_128 FileId;
      /* 0x0018 */ struct _FILE_ID_128 TargetDirectoryFileId;
      /* 0x0028 */ wchar_t VolumeGuidName[48];
    } /* size: 0x0080 */ FileLeavingScope;
    struct
    {
      /* 0x0008 */ struct _FILE_ID_128 FileId;
      /* 0x0018 */ wchar_t VolumeGuidName[48];
    } /* size: 0x0070 */ DeletePending;
    struct
    {
      struct
      {
        /* 0x0008 */ struct _FILE_ID_128 FileId;
        /* 0x0018 */ wchar_t VolumeGuidName[48];
      } /* size: 0x0070 */ LastUserHandleClose;
      /* 0x0078 */ long __PADDING__[10];
    }; /* size: 0x0098 */
  }; /* size: 0x0098 */
} CLOUD_PROVIDER_MESSAGE, *PCLOUD_PROVIDER_MESSAGE; /* size: 0x00a0 */


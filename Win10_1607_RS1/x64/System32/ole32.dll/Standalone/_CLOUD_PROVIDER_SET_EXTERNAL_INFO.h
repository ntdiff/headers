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

typedef struct _CLOUD_PROVIDER_SET_EXTERNAL_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ union _LARGE_INTEGER FileSize;
  /* 0x0010 */ union _LARGE_INTEGER CreationTime;
  /* 0x0018 */ union _LARGE_INTEGER ModifiedTime;
  /* 0x0020 */ union _LARGE_INTEGER AccessedTime;
  /* 0x0028 */ unsigned long FileAttributes;
  /* 0x002c */ unsigned long Reserved;
  /* 0x0030 */ unsigned long FileIdentityOffset;
  /* 0x0034 */ unsigned long FileIdentityLength;
} CLOUD_PROVIDER_SET_EXTERNAL_INFO, *PCLOUD_PROVIDER_SET_EXTERNAL_INFO; /* size: 0x0038 */


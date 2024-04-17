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

typedef struct _CLOUD_PROVIDER_GET_EXTERNAL_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ union _LARGE_INTEGER BytesLocallyPresent;
  /* 0x0010 */ union _LARGE_INTEGER BytesMetadata;
  /* 0x0018 */ unsigned long ServiceIdentityOffset;
  /* 0x001c */ unsigned long ServiceIdentityLength;
  /* 0x0020 */ unsigned long FileIdentityOffset;
  /* 0x0024 */ unsigned long FileIdentityLength;
} CLOUD_PROVIDER_GET_EXTERNAL_INFO, *PCLOUD_PROVIDER_GET_EXTERNAL_INFO; /* size: 0x0028 */


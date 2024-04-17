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

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _CLOUD_PROVIDER_EXTERNAL_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ union _LARGE_INTEGER ServerFileSize;
  /* 0x0010 */ struct _GUID SyncServiceId;
  /* 0x0020 */ unsigned long ServiceDataOffset;
  /* 0x0024 */ unsigned long ServiceDataSize;
} CLOUD_PROVIDER_EXTERNAL_INFO, *PCLOUD_PROVIDER_EXTERNAL_INFO; /* size: 0x0028 */


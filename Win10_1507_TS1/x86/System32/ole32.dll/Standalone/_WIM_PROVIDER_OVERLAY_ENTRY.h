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

typedef struct _WIM_PROVIDER_OVERLAY_ENTRY
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0008 */ union _LARGE_INTEGER DataSourceId;
  /* 0x0010 */ struct _GUID WimGuid;
  /* 0x0020 */ unsigned long WimFileNameOffset;
  /* 0x0024 */ unsigned long WimType;
  /* 0x0028 */ unsigned long WimIndex;
  /* 0x002c */ unsigned long Flags;
} WIM_PROVIDER_OVERLAY_ENTRY, *PWIM_PROVIDER_OVERLAY_ENTRY; /* size: 0x0030 */


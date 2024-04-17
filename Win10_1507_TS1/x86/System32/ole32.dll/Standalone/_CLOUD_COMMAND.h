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

typedef struct _CLOUD_COMMAND
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long CommandCode;
  union
  {
    struct
    {
      /* 0x0008 */ union _LARGE_INTEGER RecallOffset;
      /* 0x0010 */ unsigned long RecallLength;
      /* 0x0014 */ long __PADDING__[1];
    } /* size: 0x0010 */ InitiateRecall;
    struct
    {
      /* 0x0008 */ union _LARGE_INTEGER DeflateOffset;
      /* 0x0010 */ unsigned long DeflateLength;
      /* 0x0014 */ long __PADDING__[1];
    } /* size: 0x0010 */ Deflate;
    struct
    {
      /* 0x0008 */ union _LARGE_INTEGER NewServerFileSize;
      /* 0x0010 */ unsigned long ServiceDataOffset;
      /* 0x0014 */ unsigned long ServiceDataSize;
    } /* size: 0x0010 */ InvalidateVersion;
    struct
    {
      /* 0x0008 */ unsigned long ServiceDataOffset;
      /* 0x000c */ unsigned long ServiceDataSize;
    } /* size: 0x0008 */ ServiceData;
    struct
    {
      /* 0x0008 */ struct _GUID SyncServiceId;
      /* 0x0018 */ unsigned char SetScope;
      /* 0x0019 */ char __PADDING__[3];
    } /* size: 0x0014 */ SetSyncScope;
  }; /* size: 0x0014 */
  /* 0x001c */ long __PADDING__[1];
} CLOUD_COMMAND, *PCLOUD_COMMAND; /* size: 0x0020 */


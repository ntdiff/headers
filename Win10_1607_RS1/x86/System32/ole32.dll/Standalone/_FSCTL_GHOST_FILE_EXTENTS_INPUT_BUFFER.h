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

typedef struct _FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER
{
  /* 0x0000 */ union _LARGE_INTEGER FileOffset;
  /* 0x0008 */ union _LARGE_INTEGER ByteCount;
  /* 0x0010 */ struct _GUID RecallOwnerGuid;
  /* 0x0020 */ unsigned long RecallMetadataBufferSize;
  /* 0x0024 */ unsigned char RecallMetadataBuffer[1];
  /* 0x0025 */ char __PADDING__[3];
} FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER, *PFSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER; /* size: 0x0028 */


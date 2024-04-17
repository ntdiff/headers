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

typedef struct _CLOUD_COMMAND
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long CommandCode;
  union
  {
    struct
    {
      /* 0x0008 */ union _LARGE_INTEGER RecallOffset;
      /* 0x0010 */ union _LARGE_INTEGER RecallLength;
    } /* size: 0x0010 */ InitiateRecall;
    struct
    {
      /* 0x0008 */ union _LARGE_INTEGER DeflateOffset;
      /* 0x0010 */ union _LARGE_INTEGER DeflateLength;
    } /* size: 0x0010 */ Deflate;
    struct
    {
      /* 0x0008 */ union _LARGE_INTEGER NewServerFileSize;
      /* 0x0010 */ unsigned long FileIdentityOffset;
      /* 0x0014 */ unsigned long FileIdentityLength;
    } /* size: 0x0010 */ UpdatePlaceholderIdentity;
    struct
    {
      union
      {
        union
        {
          /* 0x0008 */ void* ServiceIdentity;
          /* 0x0008 */ unsigned __int64 Alignment;
        }; /* size: 0x0008 */
      } /* size: 0x0008 */ u;
      /* 0x0010 */ unsigned long Length;
      /* 0x0014 */ unsigned long Flags;
    } /* size: 0x0010 */ CreateServiceIdentity;
    struct
    {
      union
      {
        union
        {
          /* 0x0008 */ void* ServiceIdentity;
          /* 0x0008 */ unsigned __int64 Alignment;
        }; /* size: 0x0008 */
      } /* size: 0x0008 */ u;
      /* 0x0010 */ unsigned long Length;
      /* 0x0014 */ unsigned long Flags;
    } /* size: 0x0010 */ ConnectServiceIdentity;
    struct
    {
      union
      {
        union
        {
          /* 0x0008 */ void* ServiceIdentity;
          /* 0x0008 */ unsigned __int64 Alignment;
        }; /* size: 0x0008 */
      } /* size: 0x0008 */ u;
      /* 0x0010 */ unsigned long Length;
      /* 0x0014 */ unsigned long Flags;
    } /* size: 0x0010 */ DeleteServiceIdentity;
    struct
    {
      /* 0x0008 */ unsigned long FirstBlobContextOffset;
      /* 0x000c */ unsigned long BlobCount;
      /* 0x0010 */ union _LARGE_INTEGER Timeout;
      /* 0x0018 */ unsigned long Flags;
      /* 0x001c */ long __PADDING__[1];
    } /* size: 0x0018 */ PropertyOperation;
  }; /* size: 0x0018 */
} CLOUD_COMMAND, *PCLOUD_COMMAND; /* size: 0x0020 */


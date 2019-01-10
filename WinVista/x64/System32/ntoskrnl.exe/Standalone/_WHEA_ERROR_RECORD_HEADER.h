typedef enum _WHEA_ERROR_SEVERITY
{
  WheaErrSevRecoverable = 0,
  WheaErrSevFatal = 1,
  WheaErrSevCorrected = 2,
  WheaErrSevNone = 3,
} WHEA_ERROR_SEVERITY, *PWHEA_ERROR_SEVERITY;

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

typedef struct _WHEA_PERSISTENCE_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Identifier : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Length : 24; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 Reserved : 6; /* bit position: 40 */
    /* 0x0000 */ unsigned __int64 Attributes : 2; /* bit position: 46 */
    /* 0x0000 */ unsigned __int64 Signature : 16; /* bit position: 48 */
  }; /* bitfield */
} WHEA_PERSISTENCE_INFO, *PWHEA_PERSISTENCE_INFO; /* size: 0x0008 */

typedef struct _WHEA_ERROR_RECORD_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned short Revision;
  /* 0x0006 */ unsigned short Reserved1;
  /* 0x0008 */ unsigned short Reserved2;
  /* 0x000a */ unsigned short SectionCount;
  /* 0x000c */ enum _WHEA_ERROR_SEVERITY Severity;
  /* 0x0010 */ unsigned long ValidationBits;
  /* 0x0014 */ unsigned long Length;
  /* 0x0018 */ union _LARGE_INTEGER Timestamp;
  /* 0x0020 */ struct _GUID PlatformId;
  /* 0x0030 */ struct _GUID PartitionId;
  /* 0x0040 */ struct _GUID CreatorId;
  /* 0x0050 */ struct _GUID NotifyType;
  /* 0x0060 */ unsigned __int64 RecordId;
  /* 0x0068 */ unsigned long Flags;
  /* 0x0070 */ struct _WHEA_PERSISTENCE_INFO PersistenceInfo;
  /* 0x0078 */ unsigned char Reserved3[12];
  /* 0x0084 */ long __PADDING__[1];
} WHEA_ERROR_RECORD_HEADER, *PWHEA_ERROR_RECORD_HEADER; /* size: 0x0088 */


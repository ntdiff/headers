typedef union _WHEA_REVISION
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char MinorRevision;
      /* 0x0001 */ unsigned char MajorRevision;
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} WHEA_REVISION, *PWHEA_REVISION; /* size: 0x0002 */

typedef enum _WHEA_ERROR_SEVERITY
{
  WheaErrSevRecoverable = 0,
  WheaErrSevFatal = 1,
  WheaErrSevCorrected = 2,
  WheaErrSevInformational = 3,
} WHEA_ERROR_SEVERITY, *PWHEA_ERROR_SEVERITY;

typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PlatformId : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Timestamp : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long PartitionId : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_RECORD_HEADER_VALIDBITS, *PWHEA_ERROR_RECORD_HEADER_VALIDBITS; /* size: 0x0004 */

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

typedef union _WHEA_TIMESTAMP
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Seconds : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Minutes : 8; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Hours : 8; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 Precise : 1; /* bit position: 24 */
      /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 25 */
      /* 0x0000 */ unsigned __int64 Day : 8; /* bit position: 32 */
      /* 0x0000 */ unsigned __int64 Month : 8; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 Year : 8; /* bit position: 48 */
      /* 0x0000 */ unsigned __int64 Century : 8; /* bit position: 56 */
    }; /* bitfield */
    /* 0x0000 */ union _LARGE_INTEGER AsLARGE_INTEGER;
  }; /* size: 0x0008 */
} WHEA_TIMESTAMP, *PWHEA_TIMESTAMP; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Recovered : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PreviousError : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Simulated : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_RECORD_HEADER_FLAGS, *PWHEA_ERROR_RECORD_HEADER_FLAGS; /* size: 0x0004 */

typedef union _WHEA_PERSISTENCE_INFO
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Signature : 16; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Length : 24; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 Identifier : 16; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 Attributes : 2; /* bit position: 56 */
      /* 0x0000 */ unsigned __int64 DoNotLog : 1; /* bit position: 58 */
      /* 0x0000 */ unsigned __int64 Reserved : 5; /* bit position: 59 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 AsULONGLONG;
  }; /* size: 0x0008 */
} WHEA_PERSISTENCE_INFO, *PWHEA_PERSISTENCE_INFO; /* size: 0x0008 */

typedef struct _WHEA_ERROR_RECORD_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ union _WHEA_REVISION Revision;
  /* 0x0006 */ unsigned long SignatureEnd;
  /* 0x000a */ unsigned short SectionCount;
  /* 0x000c */ enum _WHEA_ERROR_SEVERITY Severity;
  /* 0x0010 */ union _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;
  /* 0x0014 */ unsigned long Length;
  /* 0x0018 */ union _WHEA_TIMESTAMP Timestamp;
  /* 0x0020 */ struct _GUID PlatformId;
  /* 0x0030 */ struct _GUID PartitionId;
  /* 0x0040 */ struct _GUID CreatorId;
  /* 0x0050 */ struct _GUID NotifyType;
  /* 0x0060 */ unsigned __int64 RecordId;
  /* 0x0068 */ union _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;
  /* 0x006c */ union _WHEA_PERSISTENCE_INFO PersistenceInfo;
  /* 0x0074 */ unsigned char Reserved[12];
} WHEA_ERROR_RECORD_HEADER, *PWHEA_ERROR_RECORD_HEADER; /* size: 0x0080 */


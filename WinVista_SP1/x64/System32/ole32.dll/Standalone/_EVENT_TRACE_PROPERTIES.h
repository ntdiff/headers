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

typedef struct _WNODE_HEADER
{
  /* 0x0000 */ unsigned long BufferSize;
  /* 0x0004 */ unsigned long ProviderId;
  union
  {
    /* 0x0008 */ unsigned __int64 HistoricalContext;
    struct
    {
      /* 0x0008 */ unsigned long Version;
      /* 0x000c */ unsigned long Linkage;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0010 */ unsigned long CountLost;
    /* 0x0010 */ void* KernelHandle;
    /* 0x0010 */ union _LARGE_INTEGER TimeStamp;
  }; /* size: 0x0008 */
  /* 0x0018 */ struct _GUID Guid;
  /* 0x0028 */ unsigned long ClientContext;
  /* 0x002c */ unsigned long Flags;
} WNODE_HEADER, *PWNODE_HEADER; /* size: 0x0030 */

typedef struct _EVENT_TRACE_PROPERTIES
{
  /* 0x0000 */ struct _WNODE_HEADER Wnode;
  /* 0x0030 */ unsigned long BufferSize;
  /* 0x0034 */ unsigned long MinimumBuffers;
  /* 0x0038 */ unsigned long MaximumBuffers;
  /* 0x003c */ unsigned long MaximumFileSize;
  /* 0x0040 */ unsigned long LogFileMode;
  /* 0x0044 */ unsigned long FlushTimer;
  /* 0x0048 */ unsigned long EnableFlags;
  /* 0x004c */ long AgeLimit;
  /* 0x0050 */ unsigned long NumberOfBuffers;
  /* 0x0054 */ unsigned long FreeBuffers;
  /* 0x0058 */ unsigned long EventsLost;
  /* 0x005c */ unsigned long BuffersWritten;
  /* 0x0060 */ unsigned long LogBuffersLost;
  /* 0x0064 */ unsigned long RealTimeBuffersLost;
  /* 0x0068 */ void* LoggerThreadId;
  /* 0x0070 */ unsigned long LogFileNameOffset;
  /* 0x0074 */ unsigned long LoggerNameOffset;
} EVENT_TRACE_PROPERTIES, *PEVENT_TRACE_PROPERTIES; /* size: 0x0078 */


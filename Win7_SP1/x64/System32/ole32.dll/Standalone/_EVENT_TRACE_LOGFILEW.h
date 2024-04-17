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

typedef struct _EVENT_TRACE_HEADER
{
  /* 0x0000 */ unsigned short Size;
  union
  {
    /* 0x0002 */ unsigned short FieldTypeFlags;
    struct
    {
      /* 0x0002 */ unsigned char HeaderType;
      /* 0x0003 */ unsigned char MarkerFlags;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  union
  {
    /* 0x0004 */ unsigned long Version;
    struct
    {
      /* 0x0004 */ unsigned char Type;
      /* 0x0005 */ unsigned char Level;
      /* 0x0006 */ unsigned short Version;
    } /* size: 0x0004 */ Class;
  }; /* size: 0x0004 */
  /* 0x0008 */ unsigned long ThreadId;
  /* 0x000c */ unsigned long ProcessId;
  /* 0x0010 */ union _LARGE_INTEGER TimeStamp;
  union
  {
    /* 0x0018 */ struct _GUID Guid;
    /* 0x0018 */ unsigned __int64 GuidPtr;
  }; /* size: 0x0010 */
  union
  {
    struct
    {
      /* 0x0028 */ unsigned long KernelTime;
      /* 0x002c */ unsigned long UserTime;
    }; /* size: 0x0008 */
    /* 0x0028 */ unsigned __int64 ProcessorTime;
    struct
    {
      /* 0x0028 */ unsigned long ClientContext;
      /* 0x002c */ unsigned long Flags;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} EVENT_TRACE_HEADER, *PEVENT_TRACE_HEADER; /* size: 0x0030 */

typedef struct _ETW_BUFFER_CONTEXT
{
  /* 0x0000 */ unsigned char ProcessorNumber;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ unsigned short LoggerId;
} ETW_BUFFER_CONTEXT, *PETW_BUFFER_CONTEXT; /* size: 0x0004 */

typedef struct _EVENT_TRACE
{
  /* 0x0000 */ struct _EVENT_TRACE_HEADER Header;
  /* 0x0030 */ unsigned long InstanceId;
  /* 0x0034 */ unsigned long ParentInstanceId;
  /* 0x0038 */ struct _GUID ParentGuid;
  /* 0x0048 */ void* MofData;
  /* 0x0050 */ unsigned long MofLength;
  union
  {
    /* 0x0054 */ unsigned long ClientContext;
    /* 0x0054 */ struct _ETW_BUFFER_CONTEXT BufferContext;
  }; /* size: 0x0004 */
} EVENT_TRACE, *PEVENT_TRACE; /* size: 0x0058 */

typedef struct _SYSTEMTIME
{
  /* 0x0000 */ unsigned short wYear;
  /* 0x0002 */ unsigned short wMonth;
  /* 0x0004 */ unsigned short wDayOfWeek;
  /* 0x0006 */ unsigned short wDay;
  /* 0x0008 */ unsigned short wHour;
  /* 0x000a */ unsigned short wMinute;
  /* 0x000c */ unsigned short wSecond;
  /* 0x000e */ unsigned short wMilliseconds;
} SYSTEMTIME, *PSYSTEMTIME; /* size: 0x0010 */

typedef struct _TIME_ZONE_INFORMATION
{
  /* 0x0000 */ long Bias;
  /* 0x0004 */ wchar_t StandardName[32];
  /* 0x0044 */ struct _SYSTEMTIME StandardDate;
  /* 0x0054 */ long StandardBias;
  /* 0x0058 */ wchar_t DaylightName[32];
  /* 0x0098 */ struct _SYSTEMTIME DaylightDate;
  /* 0x00a8 */ long DaylightBias;
} TIME_ZONE_INFORMATION, *PTIME_ZONE_INFORMATION; /* size: 0x00ac */

typedef struct _TRACE_LOGFILE_HEADER
{
  /* 0x0000 */ unsigned long BufferSize;
  union
  {
    /* 0x0004 */ unsigned long Version;
    struct
    {
      /* 0x0004 */ unsigned char MajorVersion;
      /* 0x0005 */ unsigned char MinorVersion;
      /* 0x0006 */ unsigned char SubVersion;
      /* 0x0007 */ unsigned char SubMinorVersion;
    } /* size: 0x0004 */ VersionDetail;
  }; /* size: 0x0004 */
  /* 0x0008 */ unsigned long ProviderVersion;
  /* 0x000c */ unsigned long NumberOfProcessors;
  /* 0x0010 */ union _LARGE_INTEGER EndTime;
  /* 0x0018 */ unsigned long TimerResolution;
  /* 0x001c */ unsigned long MaximumFileSize;
  /* 0x0020 */ unsigned long LogFileMode;
  /* 0x0024 */ unsigned long BuffersWritten;
  union
  {
    /* 0x0028 */ struct _GUID LogInstanceGuid;
    struct
    {
      /* 0x0028 */ unsigned long StartBuffers;
      /* 0x002c */ unsigned long PointerSize;
      /* 0x0030 */ unsigned long EventsLost;
      /* 0x0034 */ unsigned long CpuSpeedInMHz;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0038 */ wchar_t* LoggerName;
  /* 0x0040 */ wchar_t* LogFileName;
  /* 0x0048 */ struct _TIME_ZONE_INFORMATION TimeZone;
  /* 0x00f8 */ union _LARGE_INTEGER BootTime;
  /* 0x0100 */ union _LARGE_INTEGER PerfFreq;
  /* 0x0108 */ union _LARGE_INTEGER StartTime;
  /* 0x0110 */ unsigned long ReservedFlags;
  /* 0x0114 */ unsigned long BuffersLost;
} TRACE_LOGFILE_HEADER, *PTRACE_LOGFILE_HEADER; /* size: 0x0118 */

typedef struct _EVENT_TRACE_LOGFILEW
{
  /* 0x0000 */ wchar_t* LogFileName;
  /* 0x0008 */ wchar_t* LoggerName;
  /* 0x0010 */ __int64 CurrentTime;
  /* 0x0018 */ unsigned long BuffersRead;
  union
  {
    /* 0x001c */ unsigned long LogFileMode;
    /* 0x001c */ unsigned long ProcessTraceMode;
  }; /* size: 0x0004 */
  /* 0x0020 */ struct _EVENT_TRACE CurrentEvent;
  /* 0x0078 */ struct _TRACE_LOGFILE_HEADER LogfileHeader;
  /* 0x0190 */ void* BufferCallback /* function */;
  /* 0x0198 */ unsigned long BufferSize;
  /* 0x019c */ unsigned long Filled;
  /* 0x01a0 */ unsigned long EventsLost;
  union
  {
    /* 0x01a8 */ void* EventCallback /* function */;
    /* 0x01a8 */ void* EventRecordCallback /* function */;
  }; /* size: 0x0008 */
  /* 0x01b0 */ unsigned long IsKernelTrace;
  /* 0x01b8 */ void* Context;
} EVENT_TRACE_LOGFILEW, *PEVENT_TRACE_LOGFILEW; /* size: 0x01c0 */


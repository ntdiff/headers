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


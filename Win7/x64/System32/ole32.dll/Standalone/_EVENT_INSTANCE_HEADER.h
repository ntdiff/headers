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

typedef struct _EVENT_INSTANCE_HEADER
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
  /* 0x0018 */ unsigned __int64 RegHandle;
  /* 0x0020 */ unsigned long InstanceId;
  /* 0x0024 */ unsigned long ParentInstanceId;
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
      /* 0x0028 */ unsigned long EventId;
      /* 0x002c */ unsigned long Flags;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  /* 0x0030 */ unsigned __int64 ParentRegHandle;
} EVENT_INSTANCE_HEADER, *PEVENT_INSTANCE_HEADER; /* size: 0x0038 */


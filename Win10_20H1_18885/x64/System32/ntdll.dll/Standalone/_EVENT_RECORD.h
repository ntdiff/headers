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

typedef struct _EVENT_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Id;
  /* 0x0002 */ unsigned char Version;
  /* 0x0003 */ unsigned char Channel;
  /* 0x0004 */ unsigned char Level;
  /* 0x0005 */ unsigned char Opcode;
  /* 0x0006 */ unsigned short Task;
  /* 0x0008 */ unsigned __int64 Keyword;
} EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR; /* size: 0x0010 */

typedef struct _EVENT_HEADER
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short HeaderType;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short EventProperty;
  /* 0x0008 */ unsigned long ThreadId;
  /* 0x000c */ unsigned long ProcessId;
  /* 0x0010 */ union _LARGE_INTEGER TimeStamp;
  /* 0x0018 */ struct _GUID ProviderId;
  /* 0x0028 */ struct _EVENT_DESCRIPTOR EventDescriptor;
  union
  {
    struct
    {
      /* 0x0038 */ unsigned long KernelTime;
      /* 0x003c */ unsigned long UserTime;
    }; /* size: 0x0008 */
    /* 0x0038 */ unsigned __int64 ProcessorTime;
  }; /* size: 0x0008 */
  /* 0x0040 */ struct _GUID ActivityId;
} EVENT_HEADER, *PEVENT_HEADER; /* size: 0x0050 */

typedef struct _ETW_BUFFER_CONTEXT
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char ProcessorNumber;
      /* 0x0001 */ unsigned char Alignment;
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short ProcessorIndex;
  }; /* size: 0x0002 */
  /* 0x0002 */ unsigned short LoggerId;
} ETW_BUFFER_CONTEXT, *PETW_BUFFER_CONTEXT; /* size: 0x0004 */

typedef struct _EVENT_RECORD
{
  /* 0x0000 */ struct _EVENT_HEADER EventHeader;
  /* 0x0050 */ struct _ETW_BUFFER_CONTEXT BufferContext;
  /* 0x0054 */ unsigned short ExtendedDataCount;
  /* 0x0056 */ unsigned short UserDataLength;
  /* 0x0058 */ struct _EVENT_HEADER_EXTENDED_DATA_ITEM* ExtendedData;
  /* 0x0060 */ void* UserData;
  /* 0x0068 */ void* UserContext;
} EVENT_RECORD, *PEVENT_RECORD; /* size: 0x0070 */


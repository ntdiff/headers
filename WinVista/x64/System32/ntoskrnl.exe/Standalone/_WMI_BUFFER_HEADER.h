typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_5
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

typedef struct _ETW_BUFFER_CONTEXT
{
  /* 0x0000 */ unsigned char ProcessorNumber;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ unsigned short LoggerId;
} ETW_BUFFER_CONTEXT, *PETW_BUFFER_CONTEXT; /* size: 0x0004 */

typedef enum _ETW_BUFFER_STATE
{
  EtwBufferStateFree = 0,
  EtwBufferStateGeneralLogging = 1,
  EtwBufferStateCSwitch = 2,
  EtwBufferStateFlush = 3,
  EtwBufferStateMaximum = 4,
} ETW_BUFFER_STATE, *PETW_BUFFER_STATE;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _WMI_BUFFER_HEADER
{
  union
  {
    /* 0x0000 */ struct _WNODE_HEADER Wnode;
    struct
    {
      /* 0x0000 */ unsigned long BufferSize;
      /* 0x0004 */ unsigned long SavedOffset;
      /* 0x0008 */ volatile unsigned long CurrentOffset;
      /* 0x000c */ volatile long ReferenceCount;
      union
      {
        /* 0x0010 */ union _LARGE_INTEGER TimeStamp;
        /* 0x0010 */ union _LARGE_INTEGER StartPerfClock;
      }; /* size: 0x0008 */
      /* 0x0018 */ __int64 SequenceNumber;
      /* 0x0020 */ unsigned long Spare0;
      /* 0x0024 */ unsigned long Spare1;
      /* 0x0028 */ struct _ETW_BUFFER_CONTEXT ClientContext;
      union
      {
        /* 0x002c */ enum _ETW_BUFFER_STATE State;
        /* 0x002c */ unsigned long Flags;
      }; /* size: 0x0004 */
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
  /* 0x0030 */ unsigned long Offset;
  /* 0x0034 */ unsigned short BufferFlag;
  /* 0x0036 */ unsigned short BufferType;
  union
  {
    /* 0x0038 */ unsigned long Padding1[4];
    /* 0x0038 */ union _LARGE_INTEGER StartTime;
    /* 0x0038 */ struct _LIST_ENTRY Entry;
    /* 0x0038 */ struct _SINGLE_LIST_ENTRY SlistEntry;
    struct
    {
      /* 0x0038 */ struct _WMI_BUFFER_HEADER* NextBuffer;
      /* 0x0040 */ struct _SINGLE_LIST_ENTRY GlobalEntry;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} WMI_BUFFER_HEADER, *PWMI_BUFFER_HEADER; /* size: 0x0048 */


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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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

typedef enum _ETW_BUFFER_STATE
{
  EtwBufferStateFree = 0,
  EtwBufferStateGeneralLogging = 1,
  EtwBufferStateCSwitch = 2,
  EtwBufferStateFlush = 3,
  EtwBufferStatePendingCompression = 4,
  EtwBufferStateCompressed = 5,
  EtwBufferStatePlaceholder = 6,
  EtwBufferStateMaximum = 7,
} ETW_BUFFER_STATE, *PETW_BUFFER_STATE;

typedef struct _ETW_REF_CLOCK
{
  /* 0x0000 */ union _LARGE_INTEGER StartTime;
  /* 0x0008 */ union _LARGE_INTEGER StartPerfClock;
} ETW_REF_CLOCK, *PETW_REF_CLOCK; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WMI_BUFFER_HEADER
{
  /* 0x0000 */ unsigned long BufferSize;
  /* 0x0004 */ unsigned long SavedOffset;
  /* 0x0008 */ volatile unsigned long CurrentOffset;
  /* 0x000c */ volatile long ReferenceCount;
  /* 0x0010 */ union _LARGE_INTEGER TimeStamp;
  /* 0x0018 */ __int64 SequenceNumber;
  union
  {
    struct /* bitfield */
    {
      /* 0x0020 */ unsigned __int64 ClockType : 3; /* bit position: 0 */
      /* 0x0020 */ unsigned __int64 Frequency : 61; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0020 */ struct _SINGLE_LIST_ENTRY SlistEntry;
    /* 0x0020 */ struct _WMI_BUFFER_HEADER* NextBuffer;
  }; /* size: 0x0008 */
  /* 0x0028 */ struct _ETW_BUFFER_CONTEXT ClientContext;
  /* 0x002c */ enum _ETW_BUFFER_STATE State;
  /* 0x0030 */ unsigned long Offset;
  /* 0x0034 */ unsigned short BufferFlag;
  /* 0x0036 */ unsigned short BufferType;
  union
  {
    /* 0x0038 */ unsigned long Padding1[4];
    /* 0x0038 */ struct _ETW_REF_CLOCK ReferenceTime;
    /* 0x0038 */ struct _LIST_ENTRY GlobalEntry;
    struct
    {
      /* 0x0038 */ void* Pointer0;
      /* 0x0040 */ void* Pointer1;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} WMI_BUFFER_HEADER, *PWMI_BUFFER_HEADER; /* size: 0x0048 */


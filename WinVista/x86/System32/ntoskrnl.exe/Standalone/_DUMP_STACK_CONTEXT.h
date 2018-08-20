typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
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

typedef struct _DUMP_INITIALIZATION_CONTEXT
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ void* MemoryBlock;
  /* 0x000c */ void* CommonBuffer[2];
  /* 0x0018 */ union _LARGE_INTEGER PhysicalAddress[2];
  /* 0x0028 */ void* StallRoutine /* function */;
  /* 0x002c */ void* OpenRoutine /* function */;
  /* 0x0030 */ void* WriteRoutine /* function */;
  /* 0x0034 */ void* FinishRoutine /* function */;
  /* 0x0038 */ struct _ADAPTER_OBJECT* AdapterObject;
  /* 0x003c */ void* MappedRegisterBase;
  /* 0x0040 */ void* PortConfiguration;
  /* 0x0044 */ unsigned char CrashDump;
  /* 0x0048 */ unsigned long MaximumTransferSize;
  /* 0x004c */ unsigned long CommonBufferSize;
  /* 0x0050 */ void* TargetAddress;
  /* 0x0054 */ void* WritePendingRoutine /* function */;
  /* 0x0058 */ unsigned long PartitionStyle;
  union // _TAG_UNNAMED_124
  {
    union
    {
      struct // _TAG_UNNAMED_125
      {
        /* 0x005c */ unsigned long Signature;
        /* 0x0060 */ unsigned long CheckSum;
      } /* size: 0x0008 */ Mbr;
      struct // _TAG_UNNAMED_126
      {
        /* 0x005c */ struct _GUID DiskId;
      } /* size: 0x0010 */ Gpt;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ DiskInfo;
  /* 0x006c */ long __PADDING__[1];
} DUMP_INITIALIZATION_CONTEXT, *PDUMP_INITIALIZATION_CONTEXT; /* size: 0x0070 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ char* Buffer;
} STRING, *PSTRING; /* size: 0x0008 */

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
  DeviceUsageTypeUndefined = 0,
  DeviceUsageTypePaging = 1,
  DeviceUsageTypeHibernation = 2,
  DeviceUsageTypeDumpFile = 3,
} DEVICE_USAGE_NOTIFICATION_TYPE, *PDEVICE_USAGE_NOTIFICATION_TYPE;

typedef struct _DUMP_STACK_CONTEXT
{
  /* 0x0000 */ struct _DUMP_INITIALIZATION_CONTEXT Init;
  /* 0x0070 */ union _LARGE_INTEGER PartitionOffset;
  /* 0x0078 */ void* DumpPointers;
  /* 0x007c */ unsigned long PointersLength;
  /* 0x0080 */ unsigned short* ModulePrefix;
  /* 0x0084 */ struct _LIST_ENTRY DriverList;
  /* 0x008c */ struct _STRING InitMsg;
  /* 0x0094 */ struct _STRING ProgMsg;
  /* 0x009c */ struct _STRING DoneMsg;
  /* 0x00a4 */ void* FileObject;
  /* 0x00a8 */ enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType;
  /* 0x00ac */ long __PADDING__[1];
} DUMP_STACK_CONTEXT, *PDUMP_STACK_CONTEXT; /* size: 0x00b0 */


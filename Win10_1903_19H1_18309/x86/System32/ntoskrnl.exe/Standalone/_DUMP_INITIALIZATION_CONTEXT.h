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
  /* 0x0045 */ unsigned char MarkMemoryOnly;
  /* 0x0046 */ unsigned char HiberResume;
  /* 0x0047 */ unsigned char Reserved1;
  /* 0x0048 */ unsigned long MaximumTransferSize;
  /* 0x004c */ unsigned long CommonBufferSize;
  /* 0x0050 */ void* TargetAddress;
  /* 0x0054 */ void* WritePendingRoutine /* function */;
  /* 0x0058 */ unsigned long PartitionStyle;
  union
  {
    union
    {
      struct
      {
        /* 0x005c */ unsigned long Signature;
        /* 0x0060 */ unsigned long CheckSum;
      } /* size: 0x0008 */ Mbr;
      struct
      {
        /* 0x005c */ struct _GUID DiskId;
      } /* size: 0x0010 */ Gpt;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ DiskInfo;
  /* 0x006c */ void* ReadRoutine /* function */;
  /* 0x0070 */ void* GetDriveTelemetryRoutine /* function */;
  /* 0x0074 */ unsigned long LogSectionTruncateSize;
  /* 0x0078 */ unsigned long Parameters[16];
  /* 0x00b8 */ void* GetTransferSizesRoutine /* function */;
  /* 0x00bc */ void* DumpNotifyRoutine /* function */;
} DUMP_INITIALIZATION_CONTEXT, *PDUMP_INITIALIZATION_CONTEXT; /* size: 0x00c0 */


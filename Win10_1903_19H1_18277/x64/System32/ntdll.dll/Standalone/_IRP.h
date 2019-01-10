typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _IO_STATUS_BLOCK
{
  union
  {
    /* 0x0000 */ long Status;
    /* 0x0000 */ void* Pointer;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned __int64 Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK; /* size: 0x0010 */

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

typedef struct _KDEVICE_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY DeviceListEntry;
  /* 0x0010 */ unsigned long SortKey;
  /* 0x0014 */ unsigned char Inserted;
  /* 0x0015 */ char __PADDING__[3];
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY; /* size: 0x0018 */

typedef struct _KAPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char SpareByte0;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char SpareByte1;
  /* 0x0004 */ unsigned long SpareLong0;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x0010 */ struct _LIST_ENTRY ApcListEntry;
  union
  {
    struct
    {
      /* 0x0020 */ void* KernelRoutine /* function */;
      /* 0x0028 */ void* RundownRoutine /* function */;
      /* 0x0030 */ void* NormalRoutine /* function */;
    }; /* size: 0x0018 */
    /* 0x0020 */ void* Reserved[3];
  }; /* size: 0x0018 */
  /* 0x0038 */ void* NormalContext;
  /* 0x0040 */ void* SystemArgument1;
  /* 0x0048 */ void* SystemArgument2;
  /* 0x0050 */ char ApcStateIndex;
  /* 0x0051 */ char ApcMode;
  /* 0x0052 */ unsigned char Inserted;
  /* 0x0053 */ char __PADDING__[5];
} KAPC, *PKAPC; /* size: 0x0058 */

typedef struct _IRP
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned short AllocationProcessorNumber;
  /* 0x0006 */ unsigned short Reserved;
  /* 0x0008 */ struct _MDL* MdlAddress;
  /* 0x0010 */ unsigned long Flags;
  union
  {
    union
    {
      /* 0x0018 */ struct _IRP* MasterIrp;
      /* 0x0018 */ long IrpCount;
      /* 0x0018 */ void* SystemBuffer;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ AssociatedIrp;
  /* 0x0020 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x0030 */ struct _IO_STATUS_BLOCK IoStatus;
  /* 0x0040 */ char RequestorMode;
  /* 0x0041 */ unsigned char PendingReturned;
  /* 0x0042 */ char StackCount;
  /* 0x0043 */ char CurrentLocation;
  /* 0x0044 */ unsigned char Cancel;
  /* 0x0045 */ unsigned char CancelIrql;
  /* 0x0046 */ char ApcEnvironment;
  /* 0x0047 */ unsigned char AllocationFlags;
  /* 0x0048 */ struct _IO_STATUS_BLOCK* UserIosb;
  /* 0x0050 */ struct _KEVENT* UserEvent;
  union
  {
    union
    {
      struct
      {
        union
        {
          /* 0x0058 */ void* UserApcRoutine /* function */;
          /* 0x0058 */ void* IssuingProcess;
        }; /* size: 0x0008 */
        /* 0x0060 */ void* UserApcContext;
      } /* size: 0x0010 */ AsynchronousParameters;
      /* 0x0058 */ union _LARGE_INTEGER AllocationSize;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ Overlay;
  /* 0x0068 */ void* CancelRoutine /* function */;
  /* 0x0070 */ void* UserBuffer;
  union
  {
    union
    {
      struct
      {
        union
        {
          /* 0x0078 */ struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
          /* 0x0078 */ void* DriverContext[4];
        }; /* size: 0x0020 */
        /* 0x0098 */ struct _ETHREAD* Thread;
        /* 0x00a0 */ char* AuxiliaryBuffer;
        /* 0x00a8 */ struct _LIST_ENTRY ListEntry;
        union
        {
          /* 0x00b8 */ struct _IO_STACK_LOCATION* CurrentStackLocation;
          /* 0x00b8 */ unsigned long PacketType;
        }; /* size: 0x0008 */
        /* 0x00c0 */ struct _FILE_OBJECT* OriginalFileObject;
        /* 0x00c8 */ void* IrpExtension;
      } /* size: 0x0058 */ Overlay;
      /* 0x0078 */ struct _KAPC Apc;
      /* 0x0078 */ void* CompletionKey;
    }; /* size: 0x0058 */
  } /* size: 0x0058 */ Tail;
} IRP, *PIRP; /* size: 0x00d0 */


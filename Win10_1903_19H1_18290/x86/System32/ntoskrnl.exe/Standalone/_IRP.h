typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _IO_STATUS_BLOCK
{
  union
  {
    /* 0x0000 */ long Status;
    /* 0x0000 */ void* Pointer;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK; /* size: 0x0008 */

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
  /* 0x0008 */ unsigned long SortKey;
  /* 0x000c */ unsigned char Inserted;
  /* 0x000d */ char __PADDING__[3];
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY; /* size: 0x0010 */

typedef struct _KAPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char SpareByte0;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char SpareByte1;
  /* 0x0004 */ unsigned long SpareLong0;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x000c */ struct _LIST_ENTRY ApcListEntry;
  union
  {
    struct
    {
      /* 0x0014 */ void* KernelRoutine /* function */;
      /* 0x0018 */ void* RundownRoutine /* function */;
      /* 0x001c */ void* NormalRoutine /* function */;
    }; /* size: 0x000c */
    /* 0x0014 */ void* Reserved[3];
  }; /* size: 0x000c */
  /* 0x0020 */ void* NormalContext;
  /* 0x0024 */ void* SystemArgument1;
  /* 0x0028 */ void* SystemArgument2;
  /* 0x002c */ char ApcStateIndex;
  /* 0x002d */ char ApcMode;
  /* 0x002e */ unsigned char Inserted;
  /* 0x002f */ char __PADDING__[1];
} KAPC, *PKAPC; /* size: 0x0030 */

typedef struct _IRP
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _MDL* MdlAddress;
  /* 0x0008 */ unsigned long Flags;
  union
  {
    union
    {
      /* 0x000c */ struct _IRP* MasterIrp;
      /* 0x000c */ long IrpCount;
      /* 0x000c */ void* SystemBuffer;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ AssociatedIrp;
  /* 0x0010 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x0018 */ struct _IO_STATUS_BLOCK IoStatus;
  /* 0x0020 */ char RequestorMode;
  /* 0x0021 */ unsigned char PendingReturned;
  /* 0x0022 */ char StackCount;
  /* 0x0023 */ char CurrentLocation;
  /* 0x0024 */ unsigned char Cancel;
  /* 0x0025 */ unsigned char CancelIrql;
  /* 0x0026 */ char ApcEnvironment;
  /* 0x0027 */ unsigned char AllocationFlags;
  /* 0x0028 */ struct _IO_STATUS_BLOCK* UserIosb;
  /* 0x002c */ struct _KEVENT* UserEvent;
  union
  {
    union
    {
      struct
      {
        union
        {
          /* 0x0030 */ void* UserApcRoutine /* function */;
          /* 0x0030 */ void* IssuingProcess;
        }; /* size: 0x0004 */
        /* 0x0034 */ void* UserApcContext;
      } /* size: 0x0008 */ AsynchronousParameters;
      /* 0x0030 */ union _LARGE_INTEGER AllocationSize;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Overlay;
  /* 0x0038 */ void* CancelRoutine /* function */;
  /* 0x003c */ void* UserBuffer;
  union
  {
    union
    {
      struct
      {
        union
        {
          /* 0x0040 */ struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
          /* 0x0040 */ void* DriverContext[4];
        }; /* size: 0x0010 */
        /* 0x0050 */ struct _ETHREAD* Thread;
        /* 0x0054 */ char* AuxiliaryBuffer;
        /* 0x0058 */ struct _LIST_ENTRY ListEntry;
        union
        {
          /* 0x0060 */ struct _IO_STACK_LOCATION* CurrentStackLocation;
          /* 0x0060 */ unsigned long PacketType;
        }; /* size: 0x0004 */
        /* 0x0064 */ struct _FILE_OBJECT* OriginalFileObject;
        /* 0x0068 */ void* IrpExtension;
      } /* size: 0x002c */ Overlay;
      /* 0x0040 */ struct _KAPC Apc;
      /* 0x0040 */ void* CompletionKey;
    }; /* size: 0x0030 */
  } /* size: 0x0030 */ Tail;
} IRP, *PIRP; /* size: 0x0070 */


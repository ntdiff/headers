typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _REFERENCE_EX
{
  /* 0x0000 */ unsigned long SpinLock;
  /* 0x0004 */ unsigned short ReferenceCount;
  /* 0x0006 */ unsigned char Closing;
  /* 0x0007 */ unsigned char ZeroBased;
  /* 0x0008 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
} REFERENCE_EX, *PREFERENCE_EX; /* size: 0x000c */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2Reserved1;
          /* 0x0003 */ unsigned char Timer2Reserved2;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      /* 0x0001 */ unsigned char ThreadReserved;
      union
      {
        /* 0x0002 */ unsigned char ThreadControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
            /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
            /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
            /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
            /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
            /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
            /* 0x0002 */ unsigned char Instrumented : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          /* 0x0003 */ unsigned char DebugActive;
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0018 */ struct _KTHREAD* OwnerThread;
  /* 0x001c */ unsigned char Abandoned;
  /* 0x001d */ unsigned char ApcDisable;
  /* 0x001e */ char __PADDING__[2];
} KMUTANT, *PKMUTANT; /* size: 0x0020 */

typedef struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ void* ClCreateVcHandler /* function */;
  /* 0x000c */ void* ClDeleteVcHandler /* function */;
  /* 0x0010 */ void* ClOidRequestHandler /* function */;
  /* 0x0014 */ void* ClOidRequestCompleteHandler /* function */;
  /* 0x0018 */ void* ClOpenAfCompleteHandlerEx /* function */;
  /* 0x001c */ void* ClCloseAfCompleteHandler /* function */;
  /* 0x0020 */ void* ClRegisterSapCompleteHandler /* function */;
  /* 0x0024 */ void* ClDeregisterSapCompleteHandler /* function */;
  /* 0x0028 */ void* ClMakeCallCompleteHandler /* function */;
  /* 0x002c */ void* ClModifyCallQoSCompleteHandler /* function */;
  /* 0x0030 */ void* ClCloseCallCompleteHandler /* function */;
  /* 0x0034 */ void* ClAddPartyCompleteHandler /* function */;
  /* 0x0038 */ void* ClDropPartyCompleteHandler /* function */;
  /* 0x003c */ void* ClIncomingCallHandler /* function */;
  /* 0x0040 */ void* ClIncomingCallQoSChangeHandler /* function */;
  /* 0x0044 */ void* ClIncomingCloseCallHandler /* function */;
  /* 0x0048 */ void* ClIncomingDropPartyHandler /* function */;
  /* 0x004c */ void* ClCallConnectedHandler /* function */;
  /* 0x0050 */ void* ClNotifyCloseAfHandler /* function */;
} NDIS_CO_CLIENT_OPTIONAL_HANDLERS, *PNDIS_CO_CLIENT_OPTIONAL_HANDLERS; /* size: 0x0054 */

typedef struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ void* CmCreateVcHandler /* function */;
  /* 0x000c */ void* CmDeleteVcHandler /* function */;
  /* 0x0010 */ void* CmOpenAfHandler /* function */;
  /* 0x0014 */ void* CmCloseAfHandler /* function */;
  /* 0x0018 */ void* CmRegisterSapHandler /* function */;
  /* 0x001c */ void* CmDeregisterSapHandler /* function */;
  /* 0x0020 */ void* CmMakeCallHandler /* function */;
  /* 0x0024 */ void* CmCloseCallHandler /* function */;
  /* 0x0028 */ void* CmIncomingCallCompleteHandler /* function */;
  /* 0x002c */ void* CmAddPartyHandler /* function */;
  /* 0x0030 */ void* CmDropPartyHandler /* function */;
  /* 0x0034 */ void* CmActivateVcCompleteHandler /* function */;
  /* 0x0038 */ void* CmDeactivateVcCompleteHandler /* function */;
  /* 0x003c */ void* CmModifyCallQoSHandler /* function */;
  /* 0x0040 */ void* CmOidRequestHandler /* function */;
  /* 0x0044 */ void* CmOidRequestCompleteHandler /* function */;
  /* 0x0048 */ void* CmNotifyCloseAfCompleteHandler /* function */;
} NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS, *PNDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS; /* size: 0x004c */

class KRef<NDIS_BIND_PROTOCOL_DRIVER>
{
  /* 0x0000 */ class KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder* _p;
}; /* size: 0x0004 */

class KCoalescingWorkItem<_NDIS_PROTOCOL_BLOCK>
{
  /* 0x0018 */ long m_queued;
}; /* size: 0x001c */

typedef struct _NDIS_PROTOCOL_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ void* ProtocolDriverContext;
  /* 0x0008 */ struct _NDIS_PROTOCOL_BLOCK* NextProtocol;
  /* 0x000c */ struct _NDIS_OPEN_BLOCK* OpenQueue;
  /* 0x0010 */ struct _REFERENCE_EX Ref;
  /* 0x001c */ unsigned char MajorNdisVersion;
  /* 0x001d */ unsigned char MinorNdisVersion;
  /* 0x001e */ unsigned char MajorDriverVersion;
  /* 0x001f */ unsigned char MinorDriverVersion;
  /* 0x0020 */ unsigned int Reserved;
  /* 0x0024 */ unsigned int Flags;
  /* 0x0028 */ struct _UNICODE_STRING Name;
  /* 0x0030 */ unsigned char IsIPv4;
  /* 0x0031 */ unsigned char IsIPv6;
  /* 0x0032 */ unsigned char IsNdisTest6;
  /* 0x0034 */ void* BindAdapterHandlerEx /* function */;
  /* 0x0038 */ void* UnbindAdapterHandlerEx /* function */;
  /* 0x003c */ void* OpenAdapterCompleteHandlerEx /* function */;
  /* 0x0040 */ void* CloseAdapterCompleteHandlerEx /* function */;
  union
  {
    /* 0x0044 */ void* PnPEventHandler /* function */;
    /* 0x0044 */ void* NetPnPEventHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0048 */ void* UnloadHandler /* function */;
  /* 0x004c */ void* UninstallHandler /* function */;
  /* 0x0050 */ void* RequestCompleteHandler /* function */;
  union
  {
    /* 0x0054 */ void* StatusHandlerEx /* function */;
    /* 0x0054 */ void* StatusHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0058 */ void* StatusCompleteHandler /* function */;
  /* 0x005c */ void* ReceiveNetBufferListsHandler /* function */;
  /* 0x0060 */ void* SendNetBufferListsCompleteHandler /* function */;
  union
  {
    /* 0x0064 */ void* CoStatusHandlerEx /* function */;
    /* 0x0064 */ void* CoStatusHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0068 */ void* CoAfRegisterNotifyHandler /* function */;
  /* 0x006c */ void* CoReceiveNetBufferListsHandler /* function */;
  /* 0x0070 */ void* CoSendNetBufferListsCompleteHandler /* function */;
  /* 0x0074 */ void* OpenAdapterCompleteHandler /* function */;
  /* 0x0078 */ void* CloseAdapterCompleteHandler /* function */;
  union
  {
    /* 0x007c */ void* SendCompleteHandler /* function */;
    /* 0x007c */ void* WanSendCompleteHandler /* function */;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0080 */ void* TransferDataCompleteHandler /* function */;
    /* 0x0080 */ void* WanTransferDataCompleteHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0084 */ void* ResetCompleteHandler /* function */;
  union
  {
    /* 0x0088 */ void* ReceiveHandler /* function */;
    /* 0x0088 */ void* WanReceiveHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x008c */ void* ReceiveCompleteHandler /* function */;
  /* 0x0090 */ void* ReceivePacketHandler /* function */;
  /* 0x0094 */ void* BindAdapterHandler /* function */;
  /* 0x0098 */ void* UnbindAdapterHandler /* function */;
  /* 0x009c */ void* CoSendCompleteHandler /* function */;
  /* 0x00a0 */ void* CoReceivePacketHandler /* function */;
  /* 0x00a4 */ void* OidRequestCompleteHandler /* function */;
  /* 0x00a8 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x00b8 */ struct _KMUTANT Mutex;
  /* 0x00d8 */ void* MutexOwnerThread;
  /* 0x00dc */ unsigned long MutexOwnerCount;
  /* 0x00e0 */ unsigned long MutexOwner;
  /* 0x00e4 */ struct _UNICODE_STRING* BindDeviceName;
  /* 0x00e8 */ struct _UNICODE_STRING* RootDeviceName;
  /* 0x00ec */ struct _NDIS_M_DRIVER_BLOCK* AssociatedMiniDriver;
  /* 0x00f0 */ struct _NDIS_MINIPORT_BLOCK* BindingAdapter;
  /* 0x00f4 */ struct _KEVENT* DeregEvent;
  /* 0x00f8 */ struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS ClientChars;
  /* 0x014c */ struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS CallMgrChars;
  /* 0x0198 */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x019c */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x01a0 */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x01a4 */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x01a8 */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x01ac */ void* IndicateOffloadEventHandler /* function */;
  /* 0x01b0 */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x01b4 */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x01b8 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x01bc */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x01c0 */ void* TcpOffloadEventHandler /* function */;
  /* 0x01c4 */ void* TcpOffloadReceiveIndicateHandler /* function */;
  /* 0x01c8 */ void* DirectOidRequestCompleteHandler /* function */;
  /* 0x01cc */ void* AllocateSharedMemoryHandler /* function */;
  /* 0x01d0 */ void* FreeSharedMemoryHandler /* function */;
  /* 0x01d4 */ void* AllocateSharedMemoryContext;
  /* 0x01d8 */ struct _UNICODE_STRING ImageName;
  /* 0x01e0 */ class KRef<NDIS_BIND_PROTOCOL_DRIVER> Bind;
  /* 0x01e4 */ class KCoalescingWorkItem<_NDIS_PROTOCOL_BLOCK> NotifyBindCompleteWorkItem;
} NDIS_PROTOCOL_BLOCK, *PNDIS_PROTOCOL_BLOCK; /* size: 0x0200 */


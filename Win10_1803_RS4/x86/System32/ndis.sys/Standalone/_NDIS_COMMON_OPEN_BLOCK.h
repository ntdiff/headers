typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_PM_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long EnabledWoLPacketPatterns;
  /* 0x0008 */ unsigned long EnabledProtocolOffloads;
  /* 0x000c */ unsigned long WakeUpFlags;
  /* 0x0010 */ unsigned long MediaSpecificWakeUpEvents;
} NDIS_PM_PARAMETERS, *PNDIS_PM_PARAMETERS; /* size: 0x0014 */

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

typedef struct _QUEUED_CLOSE
{
  /* 0x0000 */ int Status;
  /* 0x0004 */ struct _WORK_QUEUE_ITEM WorkItem;
} QUEUED_CLOSE, *PQUEUED_CLOSE; /* size: 0x0014 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _NDIS_SPIN_LOCK
{
  /* 0x0000 */ unsigned long SpinLock;
  /* 0x0004 */ unsigned char OldIrql;
  /* 0x0005 */ char __PADDING__[3];
} NDIS_SPIN_LOCK, *PNDIS_SPIN_LOCK; /* size: 0x0008 */

typedef enum _NDIS_NDIS5_DRIVER_STATE
{
  Ndis5StateUnused = 0,
  Ndis5StatePaused = 1,
  Ndis5StateRunning = 2,
} NDIS_NDIS5_DRIVER_STATE, *PNDIS_NDIS5_DRIVER_STATE;

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
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
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
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char Instrumented : 1; /* bit position: 7 */
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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _NDIS_EVENT
{
  /* 0x0000 */ struct _KEVENT Event;
} NDIS_EVENT, *PNDIS_EVENT; /* size: 0x0010 */

typedef struct _NDIS_COMMON_OPEN_BLOCK
{
  union
  {
    /* 0x0000 */ void* MacHandle;
    /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  }; /* size: 0x0004 */
  /* 0x0004 */ void* BindingHandle;
  /* 0x0008 */ struct _NDIS_MINIPORT_BLOCK* MiniportHandle;
  /* 0x000c */ struct _NDIS_PROTOCOL_BLOCK* ProtocolHandle;
  /* 0x0010 */ void* ProtocolBindingContext;
  /* 0x0014 */ void* NextSendHandler /* function */;
  /* 0x0018 */ void* NextSendContext;
  /* 0x001c */ void* MiniportAdapterContext;
  /* 0x0020 */ unsigned char Reserved1;
  /* 0x0021 */ unsigned char CallingFromNdis6Protocol;
  /* 0x0022 */ unsigned char Reserved3;
  /* 0x0023 */ unsigned char Reserved4;
  /* 0x0024 */ void* NextReturnNetBufferListsHandler /* function */;
  /* 0x0028 */ unsigned long Reserved5;
  /* 0x002c */ void* NextReturnNetBufferListsContext;
  union
  {
    /* 0x0030 */ void* SendHandler /* function */;
    /* 0x0030 */ void* WanSendHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0034 */ void* TransferDataHandler /* function */;
  /* 0x0038 */ void* SendCompleteHandler /* function */;
  /* 0x003c */ void* TransferDataCompleteHandler /* function */;
  /* 0x0040 */ void* ReceiveHandler /* function */;
  /* 0x0044 */ void* ReceiveCompleteHandler /* function */;
  /* 0x0048 */ void* WanReceiveHandler /* function */;
  /* 0x004c */ void* RequestCompleteHandler /* function */;
  /* 0x0050 */ void* ReceivePacketHandler /* function */;
  /* 0x0054 */ void* SendPacketsHandler /* function */;
  /* 0x0058 */ void* ResetHandler /* function */;
  /* 0x005c */ void* RequestHandler /* function */;
  /* 0x0060 */ void* OidRequestHandler /* function */;
  /* 0x0064 */ void* ResetCompleteHandler /* function */;
  union
  {
    /* 0x0068 */ void* StatusHandler /* function */;
    /* 0x0068 */ void* StatusHandlerEx /* function */;
  }; /* size: 0x0004 */
  /* 0x006c */ void* StatusCompleteHandler /* function */;
  /* 0x0070 */ volatile unsigned long OpenFlags;
  /* 0x0074 */ long References;
  /* 0x0078 */ unsigned long SpinLock;
  /* 0x007c */ void* FilterHandle;
  /* 0x0080 */ unsigned int FrameTypeArraySize;
  /* 0x0084 */ unsigned short FrameTypeArray[4];
  /* 0x008c */ unsigned long ProtocolOptions;
  /* 0x0090 */ unsigned long CurrentLookahead;
  /* 0x0094 */ void* WSendHandler /* function */;
  /* 0x0098 */ void* WTransferDataHandler /* function */;
  /* 0x009c */ void* WSendPacketsHandler /* function */;
  /* 0x00a0 */ void* CancelSendPacketsHandler /* function */;
  /* 0x00a4 */ unsigned long WakeUpEnable;
  /* 0x00a8 */ struct _NDIS_PM_PARAMETERS PMCurrentParameters;
  /* 0x00bc */ struct _KEVENT* CloseCompleteEvent;
  /* 0x00c0 */ struct _QUEUED_CLOSE QC;
  /* 0x00d4 */ long AfReferences;
  /* 0x00d8 */ struct _NDIS_OPEN_BLOCK* NextGlobalOpen;
  /* 0x00dc */ struct _NDIS_OPEN_BLOCK* MiniportNextOpen;
  /* 0x00e0 */ struct _NDIS_OPEN_BLOCK* ProtocolNextOpen;
  /* 0x00e4 */ struct _UNICODE_STRING* BindDeviceName;
  /* 0x00e8 */ struct _UNICODE_STRING* RootDeviceName;
  /* 0x00ec */ struct _NDIS_OPEN_BLOCK* FilterNextOpen;
  /* 0x00f0 */ unsigned int PacketFilters;
  /* 0x00f4 */ unsigned int OldPacketFilters;
  /* 0x00f8 */ unsigned int MaxMulticastAddresses;
  /* 0x00fc */ struct _ETH_MULTICAST_WRAPPER* MCastAddressBuf;
  /* 0x0100 */ unsigned int NumAddresses;
  /* 0x0104 */ struct _ETH_MULTICAST_WRAPPER* OldMCastAddressBuf;
  /* 0x0108 */ unsigned int OldNumAddresses;
  /* 0x010c */ unsigned char* RssParametersBuffer;
  /* 0x0110 */ struct _NDIS_RECEIVE_SCALE_PARAMETERS* NdisRSSParameters;
  /* 0x0114 */ struct _SINGLE_LIST_ENTRY PatternList;
  /* 0x0118 */ struct _SINGLE_LIST_ENTRY WOLPatternList;
  /* 0x011c */ struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;
  /* 0x0120 */ void* ProtSendNetBufferListsComplete /* function */;
  /* 0x0124 */ void* SendCompleteNdisPacketContext;
  /* 0x0128 */ void* SendCompleteNetBufferListsContext;
  /* 0x012c */ void* ReceiveNetBufferLists /* function */;
  /* 0x0130 */ void* ReceiveNetBufferListsContext;
  /* 0x0134 */ void* SavedSendPacketsHandler /* function */;
  /* 0x0138 */ void* SavedCancelSendPacketsHandler /* function */;
  /* 0x013c */ void* SavedSendHandler /* function */;
  /* 0x0140 */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x0144 */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x0148 */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x014c */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x0150 */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x0154 */ void* IndicateOffloadEventHandler /* function */;
  /* 0x0158 */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x015c */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x0160 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x0164 */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x0168 */ void* TcpOffloadEventHandler /* function */;
  /* 0x016c */ void* TcpOffloadReceiveIndicateHandler /* function */;
  /* 0x0170 */ struct NDIS_NBL_TRACKER_HANDLE__* NblTracker;
  /* 0x0174 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
  /* 0x0178 */ unsigned long RefCountLock;
  /* 0x017c */ unsigned long ProtocolMajorVersion;
  /* 0x0180 */ void** IfBlock;
  /* 0x0184 */ struct _NDIS_SPIN_LOCK PnPStateLock;
  /* 0x018c */ enum _NDIS_NDIS5_DRIVER_STATE PnPState;
  /* 0x0190 */ int OutstandingSends;
  /* 0x0194 */ struct _NDIS_EVENT PauseEvent;
  /* 0x01a4 */ void* Ndis5WanSendHandler /* function */;
  /* 0x01a8 */ void* ProtSendCompleteHandler /* function */;
  /* 0x01ac */ void* OidRequestCompleteHandler /* function */;
  /* 0x01b0 */ struct _NDIS_OPEN_OFFLOAD* Offload;
  /* 0x01b4 */ struct _NDIS_STATUS_UNBIND_WORKITEM* StatusUnbindWorkItem;
  /* 0x01b8 */ unsigned __int64 DpcStartCycle;
  /* 0x01c0 */ struct PNDIS_PER_PROCESSOR_SLOT__* ReceivedAPacketSlot;
  /* 0x01c4 */ void* DirectOidRequestHandler /* function */;
  /* 0x01c8 */ struct _LIST_ENTRY ReceiveQueueList;
  /* 0x01d0 */ unsigned long NumReceiveQueues;
  /* 0x01d4 */ struct _LIST_ENTRY SharedMemoryBlockList;
  /* 0x01dc */ void* AllocateSharedMemoryHandler /* function */;
  /* 0x01e0 */ void* FreeSharedMemoryHandler /* function */;
  /* 0x01e4 */ void* AllocateSharedMemoryContext;
  /* 0x01e8 */ unsigned long NumAllocatedVFs;
  /* 0x01ec */ struct _LIST_ENTRY VFList;
  /* 0x01f4 */ unsigned long NumActiveVPorts;
  /* 0x01f8 */ struct _LIST_ENTRY VPortList;
  /* 0x0200 */ unsigned long AoAcReferences;
  /* 0x0204 */ struct NDIS_BIND_PROTOCOL_LINK* Bind;
  /* 0x0208 */ struct _WORK_QUEUE_ITEM UnsolicitedUnbindComplete;
  /* 0x0218 */ struct _KEVENT* UnsolicitedUnbindEvent;
  /* 0x021c */ BOOL PendingLegacyUnbind;
  /* 0x0220 */ struct _KEVENT* WaitNetPnpEvent;
  /* 0x0224 */ long __PADDING__[1];
} NDIS_COMMON_OPEN_BLOCK, *PNDIS_COMMON_OPEN_BLOCK; /* size: 0x0228 */


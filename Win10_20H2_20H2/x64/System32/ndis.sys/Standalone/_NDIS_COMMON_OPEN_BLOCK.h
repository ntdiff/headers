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
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _NDIS_COMMON_OPEN_BLOCK::_QUEUED_CLOSE
{
  /* 0x0000 */ int Status;
  /* 0x0008 */ struct _WORK_QUEUE_ITEM WorkItem;
} NDIS_COMMON_OPEN_BLOCK::_QUEUED_CLOSE, *PNDIS_COMMON_OPEN_BLOCK::_QUEUED_CLOSE; /* size: 0x0028 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_SPIN_LOCK
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned char OldIrql;
  /* 0x0009 */ char __PADDING__[7];
} NDIS_SPIN_LOCK, *PNDIS_SPIN_LOCK; /* size: 0x0010 */

enum NDIS_NDIS5_DRIVER_STATE
{
  Ndis5StateUnused = 0,
  Ndis5StatePaused = 1,
  Ndis5StateRunning = 2,
};

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
              /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
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
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 2; /* bit position: 3 */
              /* 0x0003 */ unsigned char AltSyscall : 1; /* bit position: 5 */
              /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _NDIS_EVENT
{
  /* 0x0000 */ struct _KEVENT Event;
} NDIS_EVENT, *PNDIS_EVENT; /* size: 0x0018 */

typedef enum _PKTMON_PACKET_TYPE
{
  PktMonPayload_Unknown = 0,
  PktMonPayload_Ethernet = 1,
  PktMonPayload_WiFi = 2,
  PktMonPayload_MBB = 3,
  PktMonPayload_HTTP = 4,
} PKTMON_PACKET_TYPE, *PPKTMON_PACKET_TYPE;

typedef struct _PKTMON_COMPONENT_CONTEXT
{
  /* 0x0000 */ void* CompHandle;
  /* 0x0008 */ enum _PKTMON_PACKET_TYPE PacketType;
  struct /* bitfield */
  {
    /* 0x000c */ int FlowEnabled : 1; /* bit position: 0 */
    /* 0x000c */ int DropEnabled : 1; /* bit position: 1 */
  }; /* bitfield */
} PKTMON_COMPONENT_CONTEXT, *PPKTMON_COMPONENT_CONTEXT; /* size: 0x0010 */

typedef struct _PKTMON_EDGE_CONTEXT
{
  /* 0x0000 */ void* EdgeHandle;
  /* 0x0008 */ struct _PKTMON_COMPONENT_CONTEXT* CompContext;
  /* 0x0010 */ enum _PKTMON_PACKET_TYPE PacketType;
  /* 0x0014 */ long __PADDING__[1];
} PKTMON_EDGE_CONTEXT, *PPKTMON_EDGE_CONTEXT; /* size: 0x0018 */

typedef struct _NDIS_COMMON_OPEN_BLOCK
{
  union
  {
    /* 0x0000 */ void* MacHandle;
    /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  }; /* size: 0x0008 */
  /* 0x0008 */ void* BindingHandle;
  /* 0x0010 */ struct _NDIS_MINIPORT_BLOCK* MiniportHandle;
  /* 0x0018 */ struct _NDIS_PROTOCOL_BLOCK* ProtocolHandle;
  /* 0x0020 */ void* ProtocolBindingContext;
  /* 0x0028 */ void* NextSendHandler /* function */;
  /* 0x0030 */ void* NextSendContext;
  /* 0x0038 */ void* MiniportAdapterContext;
  /* 0x0040 */ unsigned char Reserved1;
  /* 0x0041 */ unsigned char CallingFromNdis6Protocol;
  /* 0x0042 */ unsigned char Reserved3;
  /* 0x0043 */ unsigned char Reserved4;
  /* 0x0048 */ void* NextReturnNetBufferListsHandler /* function */;
  /* 0x0050 */ unsigned __int64 Reserved5;
  /* 0x0058 */ void* NextReturnNetBufferListsContext;
  union
  {
    /* 0x0060 */ void* SendHandler /* function */;
    /* 0x0060 */ void* WanSendHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0068 */ void* TransferDataHandler /* function */;
  /* 0x0070 */ void* SendCompleteHandler /* function */;
  /* 0x0078 */ void* TransferDataCompleteHandler /* function */;
  /* 0x0080 */ void* ReceiveHandler /* function */;
  /* 0x0088 */ void* ReceiveCompleteHandler /* function */;
  /* 0x0090 */ void* WanReceiveHandler /* function */;
  /* 0x0098 */ void* RequestCompleteHandler /* function */;
  /* 0x00a0 */ void* ReceivePacketHandler /* function */;
  /* 0x00a8 */ void* SendPacketsHandler /* function */;
  /* 0x00b0 */ void* ResetHandler /* function */;
  /* 0x00b8 */ void* RequestHandler /* function */;
  /* 0x00c0 */ void* OidRequestHandler /* function */;
  /* 0x00c8 */ void* ResetCompleteHandler /* function */;
  union
  {
    /* 0x00d0 */ void* StatusHandler /* function */;
    /* 0x00d0 */ void* StatusHandlerEx /* function */;
  }; /* size: 0x0008 */
  /* 0x00d8 */ void* StatusCompleteHandler /* function */;
  /* 0x00e0 */ volatile unsigned long OpenFlags;
  /* 0x00e4 */ long References;
  /* 0x00e8 */ unsigned __int64 SpinLock;
  /* 0x00f0 */ void* FilterHandle;
  /* 0x00f8 */ unsigned int FrameTypeArraySize;
  /* 0x00fc */ unsigned short FrameTypeArray[4];
  /* 0x0104 */ unsigned long ProtocolOptions;
  /* 0x0108 */ unsigned long CurrentLookahead;
  /* 0x0110 */ void* WSendHandler /* function */;
  /* 0x0118 */ void* WTransferDataHandler /* function */;
  /* 0x0120 */ void* WSendPacketsHandler /* function */;
  /* 0x0128 */ void* CancelSendPacketsHandler /* function */;
  /* 0x0130 */ unsigned long WakeUpEnable;
  /* 0x0134 */ struct _NDIS_PM_PARAMETERS PMCurrentParameters;
  /* 0x0148 */ struct _KEVENT* CloseCompleteEvent;
  /* 0x0150 */ struct _NDIS_COMMON_OPEN_BLOCK::_QUEUED_CLOSE QC;
  /* 0x0178 */ long AfReferences;
  /* 0x0180 */ struct _NDIS_OPEN_BLOCK* NextGlobalOpen;
  /* 0x0188 */ struct _NDIS_OPEN_BLOCK* MiniportNextOpen;
  /* 0x0190 */ struct _NDIS_OPEN_BLOCK* ProtocolNextOpen;
  /* 0x0198 */ struct _UNICODE_STRING* BindDeviceName;
  /* 0x01a0 */ struct _UNICODE_STRING* RootDeviceName;
  /* 0x01a8 */ struct _NDIS_OPEN_BLOCK* FilterNextOpen;
  /* 0x01b0 */ unsigned int PacketFilters;
  /* 0x01b4 */ unsigned int OldPacketFilters;
  /* 0x01b8 */ unsigned int MaxMulticastAddresses;
  /* 0x01c0 */ struct _ETH_MULTICAST_WRAPPER* MCastAddressBuf;
  /* 0x01c8 */ unsigned int NumAddresses;
  /* 0x01d0 */ struct _ETH_MULTICAST_WRAPPER* OldMCastAddressBuf;
  /* 0x01d8 */ unsigned int OldNumAddresses;
  /* 0x01e0 */ unsigned char* RssParametersBuffer;
  /* 0x01e8 */ struct _NDIS_RECEIVE_SCALE_PARAMETERS* NdisRSSParameters;
  /* 0x01f0 */ struct _SINGLE_LIST_ENTRY PatternList;
  /* 0x01f8 */ struct _SINGLE_LIST_ENTRY WOLPatternList;
  /* 0x0200 */ struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;
  /* 0x0208 */ void* ProtSendNetBufferListsComplete /* function */;
  /* 0x0210 */ void* SendCompleteNdisPacketContext;
  /* 0x0218 */ void* SendCompleteNetBufferListsContext;
  /* 0x0220 */ void* ReceiveNetBufferLists /* function */;
  /* 0x0228 */ void* ReceiveNetBufferListsContext;
  /* 0x0230 */ void* SavedSendPacketsHandler /* function */;
  /* 0x0238 */ void* SavedCancelSendPacketsHandler /* function */;
  /* 0x0240 */ void* SavedSendHandler /* function */;
  /* 0x0248 */ struct NDIS_NBL_TRACKER_HANDLE__* NblTracker;
  /* 0x0250 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
  /* 0x0258 */ unsigned __int64 RefCountLock;
  /* 0x0260 */ unsigned long ProtocolMajorVersion;
  /* 0x0268 */ void** IfBlock;
  /* 0x0270 */ struct _NDIS_SPIN_LOCK PnPStateLock;
  /* 0x0280 */ enum NDIS_NDIS5_DRIVER_STATE PnPState;
  /* 0x0284 */ int OutstandingSends;
  /* 0x0288 */ struct _NDIS_EVENT PauseEvent;
  /* 0x02a0 */ void* Ndis5WanSendHandler /* function */;
  /* 0x02a8 */ void* ProtSendCompleteHandler /* function */;
  /* 0x02b0 */ void* OidRequestCompleteHandler /* function */;
  /* 0x02b8 */ struct _NDIS_OPEN_OFFLOAD* Offload;
  /* 0x02c0 */ struct _NDIS_STATUS_UNBIND_WORKITEM* StatusUnbindWorkItem;
  /* 0x02c8 */ unsigned __int64 DpcStartCycle;
  /* 0x02d0 */ struct PNDIS_PER_PROCESSOR_SLOT__* ReceivedAPacketSlot;
  /* 0x02d8 */ void* DirectOidRequestHandler /* function */;
  /* 0x02e0 */ struct _LIST_ENTRY ReceiveQueueList;
  /* 0x02f0 */ unsigned long NumReceiveQueues;
  /* 0x02f8 */ struct _LIST_ENTRY SharedMemoryBlockList;
  /* 0x0308 */ void* AllocateSharedMemoryHandler /* function */;
  /* 0x0310 */ void* FreeSharedMemoryHandler /* function */;
  /* 0x0318 */ void* AllocateSharedMemoryContext;
  /* 0x0320 */ unsigned long NumAllocatedVFs;
  /* 0x0328 */ struct _LIST_ENTRY VFList;
  /* 0x0338 */ unsigned long NumActiveVPorts;
  /* 0x0340 */ struct _LIST_ENTRY VPortList;
  /* 0x0350 */ unsigned long AoAcReferences;
  /* 0x0358 */ struct NDIS_BIND_PROTOCOL_LINK* Bind;
  /* 0x0360 */ struct _WORK_QUEUE_ITEM UnsolicitedUnbindComplete;
  /* 0x0380 */ struct _KEVENT* UnsolicitedUnbindEvent;
  /* 0x0388 */ BOOL PendingLegacyUnbind;
  /* 0x0390 */ struct _KEVENT* WaitNetPnpEvent;
  /* 0x0398 */ struct _PKTMON_COMPONENT_CONTEXT PktMonComp;
  /* 0x03a8 */ struct _PKTMON_EDGE_CONTEXT PktMonEdge;
} NDIS_COMMON_OPEN_BLOCK, *PNDIS_COMMON_OPEN_BLOCK; /* size: 0x03c0 */


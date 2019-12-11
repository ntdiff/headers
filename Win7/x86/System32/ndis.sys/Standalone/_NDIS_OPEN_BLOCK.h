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
} NDIS_PM_PARAMETERS, *PNDIS_PM_PARAMETERS; /* size: 0x0010 */

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

typedef enum _NDIS_OPEN_TRANSLATION_STATE
{
  OpenDontXlate = 0,
  OpenXlateExceptSends = 1,
  OpenXlateAll = 2,
} NDIS_OPEN_TRANSLATION_STATE, *PNDIS_OPEN_TRANSLATION_STATE;

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct /* bitfield */
        {
          /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
          /* 0x0001 */ unsigned char Coalescable : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char KeepShifting : 1; /* bit position: 2 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 5; /* bit position: 3 */
        }; /* bitfield */
        /* 0x0001 */ unsigned char Abandoned;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char ThreadControlFlags;
            struct /* bitfield */
            {
              /* 0x0002 */ unsigned char CpuThrottled : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char Reserved : 5; /* bit position: 3 */
            }; /* bitfield */
            /* 0x0002 */ unsigned char Hand;
            struct
            {
              /* 0x0002 */ unsigned char Size;
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
                /* 0x0003 */ unsigned char DebugActive;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Reserved2 : 4; /* bit position: 2 */
                  /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
                  /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
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

typedef enum _NDIS_OPEN_STATE
{
  NdisOpenStateRunning = 0,
  NdisOpenStatePausing = 1,
  NdisOpenStatePaused = 2,
  NdisOpenStateRestarting = 3,
} NDIS_OPEN_STATE, *PNDIS_OPEN_STATE;

typedef struct _NDIS_OPEN_BLOCK
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
  /* 0x0070 */ unsigned long Flags;
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
  /* 0x00b8 */ struct _KEVENT* CloseCompleteEvent;
  /* 0x00bc */ struct _QUEUED_CLOSE QC;
  /* 0x00d0 */ long AfReferences;
  /* 0x00d4 */ struct _NDIS_OPEN_BLOCK* NextGlobalOpen;
  /* 0x00d8 */ struct _NDIS_OPEN_BLOCK* MiniportNextOpen;
  /* 0x00dc */ struct _NDIS_OPEN_BLOCK* ProtocolNextOpen;
  /* 0x00e0 */ struct _UNICODE_STRING* BindDeviceName;
  /* 0x00e4 */ struct _UNICODE_STRING* RootDeviceName;
  /* 0x00e8 */ struct _NDIS_OPEN_BLOCK* FilterNextOpen;
  /* 0x00ec */ unsigned int PacketFilters;
  /* 0x00f0 */ unsigned int OldPacketFilters;
  union
  {
    struct
    {
      /* 0x00f4 */ unsigned int MaxMulticastAddresses;
      /* 0x00f8 */ struct _ETH_MULTICAST_WRAPPER* MCastAddressBuf;
      /* 0x00fc */ unsigned int NumAddresses;
      /* 0x0100 */ struct _ETH_MULTICAST_WRAPPER* OldMCastAddressBuf;
      /* 0x0104 */ unsigned int OldNumAddresses;
    }; /* size: 0x0014 */
    struct
    {
      /* 0x00f4 */ unsigned long FunctionalAddress;
      /* 0x00f8 */ unsigned long OldFunctionalAddress;
      /* 0x00fc */ unsigned char UsingGroupAddress;
      /* 0x00fd */ unsigned char OldUsingGroupAddress;
      /* 0x0100 */ unsigned long FARefCount[32];
      /* 0x0180 */ unsigned long OldFARefCount[32];
      /* 0x0200 */ unsigned char RSSParametersBuf[604];
      /* 0x045c */ struct _NDIS_RECEIVE_SCALE_PARAMETERS* NdisRSSParameters;
      /* 0x0460 */ struct _SINGLE_LIST_ENTRY PatternList;
      /* 0x0464 */ struct _SINGLE_LIST_ENTRY WOLPatternList;
      /* 0x0468 */ struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;
      /* 0x046c */ void* ProtSendNetBufferListsComplete /* function */;
      /* 0x0470 */ void* SendCompleteNdisPacketContext;
      /* 0x0474 */ void* SendCompleteNetBufferListsContext;
      /* 0x0478 */ void* ReceiveNetBufferLists /* function */;
      /* 0x047c */ void* ReceiveNetBufferListsContext;
      /* 0x0480 */ void* SavedSendNBLHandler /* function */;
      /* 0x0484 */ void* SavedSendPacketsHandler /* function */;
      /* 0x0488 */ void* SavedCancelSendPacketsHandler /* function */;
      union
      {
        /* 0x048c */ void* SavedSendHandler /* function */;
        /* 0x048c */ void* SavedWanSendHandler /* function */;
      }; /* size: 0x0004 */
      /* 0x0490 */ void* InitiateOffloadCompleteHandler /* function */;
      /* 0x0494 */ void* TerminateOffloadCompleteHandler /* function */;
      /* 0x0498 */ void* UpdateOffloadCompleteHandler /* function */;
      /* 0x049c */ void* InvalidateOffloadCompleteHandler /* function */;
      /* 0x04a0 */ void* QueryOffloadCompleteHandler /* function */;
      /* 0x04a4 */ void* IndicateOffloadEventHandler /* function */;
      /* 0x04a8 */ void* TcpOffloadSendCompleteHandler /* function */;
      /* 0x04ac */ void* TcpOffloadReceiveCompleteHandler /* function */;
      /* 0x04b0 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
      /* 0x04b4 */ void* TcpOffloadForwardCompleteHandler /* function */;
      /* 0x04b8 */ void* TcpOffloadEventHandler /* function */;
      /* 0x04bc */ void* TcpOffloadReceiveIndicateHandler /* function */;
      /* 0x04c0 */ unsigned long ProtocolMajorVersion;
      /* 0x04c4 */ void** IfBlock;
      /* 0x04c8 */ struct _NDIS_SPIN_LOCK PnPStateLock;
      /* 0x04d0 */ enum _NDIS_NDIS5_DRIVER_STATE PnPState;
      /* 0x04d4 */ enum _NDIS_OPEN_TRANSLATION_STATE TranslationState;
      /* 0x04d8 */ int OutstandingSends;
      /* 0x04dc */ struct _NDIS_EVENT PauseEvent;
      /* 0x04ec */ void* Ndis5WanSendHandler /* function */;
      /* 0x04f0 */ void* ProtSendCompleteHandler /* function */;
      /* 0x04f4 */ void* OidRequestCompleteHandler /* function */;
      /* 0x04f8 */ void* OidRequestCompleteContext;
      /* 0x04fc */ long NumOfPauseRestartRequests;
      /* 0x0500 */ enum _NDIS_OPEN_STATE State;
      /* 0x0504 */ struct _NDIS_OPEN_OFFLOAD* Offload;
      /* 0x0508 */ struct _NDIS_STATUS_UNBIND_WORKITEM* StatusUnbindWorkItem;
      /* 0x0510 */ unsigned __int64 DpcStartCycle;
      /* 0x0518 */ unsigned long NumberOfNetBufferLists;
      /* 0x051c */ unsigned char* ReceivedAPacket;
      /* 0x0520 */ void* DirectOidRequestCompleteHandler /* function */;
      /* 0x0524 */ void* DirectOidRequestHandler /* function */;
      /* 0x0528 */ void* DirectOidRequestCompleteContext;
      /* 0x052c */ struct _LIST_ENTRY ReceiveQueueList;
      /* 0x0534 */ unsigned long NumReceiveQueues;
      /* 0x0538 */ struct _LIST_ENTRY SharedMemoryBlockList;
      /* 0x0540 */ void* AllocateSharedMemoryHandler /* function */;
      /* 0x0544 */ void* FreeSharedMemoryHandler /* function */;
      /* 0x0548 */ void* AllocateSharedMemoryContext;
      /* 0x0550 */ struct _NDIS_CO_AF_BLOCK* NextAf;
      /* 0x0554 */ void* MiniportCoCreateVcHandler /* function */;
      /* 0x0558 */ void* MiniportCoRequestHandler /* function */;
      /* 0x055c */ void* CoCreateVcHandler /* function */;
      /* 0x0560 */ void* CoDeleteVcHandler /* function */;
      /* 0x0564 */ void* CmActivateVcCompleteHandler /* function */;
      /* 0x0568 */ void* CmDeactivateVcCompleteHandler /* function */;
      /* 0x056c */ void* CoRequestCompleteHandler /* function */;
      /* 0x0570 */ void* CoRequestHandler /* function */;
      /* 0x0574 */ struct _LIST_ENTRY ActiveVcHead;
      /* 0x057c */ struct _LIST_ENTRY InactiveVcHead;
      /* 0x0584 */ long PendingAfNotifications;
      /* 0x0588 */ struct _KEVENT* AfNotifyCompleteEvent;
      /* 0x058c */ void* MiniportCoOidRequestHandler /* function */;
      /* 0x0590 */ void* CoOidRequestCompleteHandler /* function */;
      /* 0x0594 */ void* CoOidRequestHandler /* function */;
    }; /* size: 0x049a */
  }; /* size: 0x049a */
} NDIS_OPEN_BLOCK, *PNDIS_OPEN_BLOCK; /* size: 0x0598 */


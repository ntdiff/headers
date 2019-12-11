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
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _QUEUED_CLOSE
{
  /* 0x0000 */ int Status;
  /* 0x0008 */ struct _WORK_QUEUE_ITEM WorkItem;
} QUEUED_CLOSE, *PQUEUED_CLOSE; /* size: 0x0028 */

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
                  /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _NDIS_EVENT
{
  /* 0x0000 */ struct _KEVENT Event;
} NDIS_EVENT, *PNDIS_EVENT; /* size: 0x0018 */

typedef enum _NDIS_OPEN_STATE
{
  NdisOpenStateRunning = 0,
  NdisOpenStatePausing = 1,
  NdisOpenStatePaused = 2,
  NdisOpenStateRestarting = 3,
} NDIS_OPEN_STATE, *PNDIS_OPEN_STATE;

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
  /* 0x00e0 */ unsigned long Flags;
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
  /* 0x0150 */ struct _QUEUED_CLOSE QC;
  /* 0x0178 */ long AfReferences;
  /* 0x0180 */ struct _NDIS_OPEN_BLOCK* NextGlobalOpen;
  /* 0x0188 */ struct _NDIS_OPEN_BLOCK* MiniportNextOpen;
  /* 0x0190 */ struct _NDIS_OPEN_BLOCK* ProtocolNextOpen;
  /* 0x0198 */ struct _UNICODE_STRING* BindDeviceName;
  /* 0x01a0 */ struct _UNICODE_STRING* RootDeviceName;
  /* 0x01a8 */ struct _NDIS_OPEN_BLOCK* FilterNextOpen;
  /* 0x01b0 */ unsigned int PacketFilters;
  /* 0x01b4 */ unsigned int OldPacketFilters;
  union
  {
    struct
    {
      /* 0x01b8 */ unsigned int MaxMulticastAddresses;
      /* 0x01c0 */ struct _ETH_MULTICAST_WRAPPER* MCastAddressBuf;
      /* 0x01c8 */ unsigned int NumAddresses;
      /* 0x01d0 */ struct _ETH_MULTICAST_WRAPPER* OldMCastAddressBuf;
      /* 0x01d8 */ unsigned int OldNumAddresses;
    }; /* size: 0x001c */
    struct
    {
      /* 0x01b8 */ unsigned long FunctionalAddress;
      /* 0x01bc */ unsigned long OldFunctionalAddress;
      /* 0x01c0 */ unsigned char UsingGroupAddress;
      /* 0x01c1 */ unsigned char OldUsingGroupAddress;
      /* 0x01c4 */ unsigned long FARefCount[32];
      /* 0x0244 */ unsigned long OldFARefCount[32];
      /* 0x02d0 */ unsigned char RSSParametersBuf[656];
      /* 0x0560 */ struct _NDIS_RECEIVE_SCALE_PARAMETERS* NdisRSSParameters;
      /* 0x0568 */ struct _SINGLE_LIST_ENTRY PatternList;
      /* 0x0570 */ struct _SINGLE_LIST_ENTRY WOLPatternList;
      /* 0x0578 */ struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;
      /* 0x0580 */ void* ProtSendNetBufferListsComplete /* function */;
      /* 0x0588 */ void* SendCompleteNdisPacketContext;
      /* 0x0590 */ void* SendCompleteNetBufferListsContext;
      /* 0x0598 */ void* ReceiveNetBufferLists /* function */;
      /* 0x05a0 */ void* ReceiveNetBufferListsContext;
      /* 0x05a8 */ void* SavedSendNBLHandler /* function */;
      /* 0x05b0 */ void* SavedSendPacketsHandler /* function */;
      /* 0x05b8 */ void* SavedCancelSendPacketsHandler /* function */;
      union
      {
        /* 0x05c0 */ void* SavedSendHandler /* function */;
        /* 0x05c0 */ void* SavedWanSendHandler /* function */;
      }; /* size: 0x0008 */
      /* 0x05c8 */ void* InitiateOffloadCompleteHandler /* function */;
      /* 0x05d0 */ void* TerminateOffloadCompleteHandler /* function */;
      /* 0x05d8 */ void* UpdateOffloadCompleteHandler /* function */;
      /* 0x05e0 */ void* InvalidateOffloadCompleteHandler /* function */;
      /* 0x05e8 */ void* QueryOffloadCompleteHandler /* function */;
      /* 0x05f0 */ void* IndicateOffloadEventHandler /* function */;
      /* 0x05f8 */ void* TcpOffloadSendCompleteHandler /* function */;
      /* 0x0600 */ void* TcpOffloadReceiveCompleteHandler /* function */;
      /* 0x0608 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
      /* 0x0610 */ void* TcpOffloadForwardCompleteHandler /* function */;
      /* 0x0618 */ void* TcpOffloadEventHandler /* function */;
      /* 0x0620 */ void* TcpOffloadReceiveIndicateHandler /* function */;
      /* 0x0628 */ unsigned long ProtocolMajorVersion;
      /* 0x0630 */ void** IfBlock;
      /* 0x0638 */ struct _NDIS_SPIN_LOCK PnPStateLock;
      /* 0x0648 */ enum _NDIS_NDIS5_DRIVER_STATE PnPState;
      /* 0x064c */ enum _NDIS_OPEN_TRANSLATION_STATE TranslationState;
      /* 0x0650 */ int OutstandingSends;
      /* 0x0658 */ struct _NDIS_EVENT PauseEvent;
      /* 0x0670 */ void* Ndis5WanSendHandler /* function */;
      /* 0x0678 */ void* ProtSendCompleteHandler /* function */;
      /* 0x0680 */ void* OidRequestCompleteHandler /* function */;
      /* 0x0688 */ void* OidRequestCompleteContext;
      /* 0x0690 */ long NumOfPauseRestartRequests;
      /* 0x0694 */ enum _NDIS_OPEN_STATE State;
      /* 0x0698 */ struct _NDIS_OPEN_OFFLOAD* Offload;
      /* 0x06a0 */ struct _NDIS_STATUS_UNBIND_WORKITEM* StatusUnbindWorkItem;
      /* 0x06a8 */ unsigned __int64 DpcStartCycle;
      /* 0x06b0 */ unsigned long NumberOfNetBufferLists;
      /* 0x06b8 */ unsigned char* ReceivedAPacket;
      /* 0x06c0 */ void* DirectOidRequestCompleteHandler /* function */;
      /* 0x06c8 */ void* DirectOidRequestHandler /* function */;
      /* 0x06d0 */ void* DirectOidRequestCompleteContext;
      /* 0x06d8 */ struct _LIST_ENTRY ReceiveQueueList;
      /* 0x06e8 */ unsigned long NumReceiveQueues;
      /* 0x06f0 */ struct _LIST_ENTRY SharedMemoryBlockList;
      /* 0x0700 */ void* AllocateSharedMemoryHandler /* function */;
      /* 0x0708 */ void* FreeSharedMemoryHandler /* function */;
      /* 0x0710 */ void* AllocateSharedMemoryContext;
      /* 0x0718 */ long __PADDING__[2];
    }; /* size: 0x054a */
  }; /* size: 0x054a */
} NDIS_COMMON_OPEN_BLOCK, *PNDIS_COMMON_OPEN_BLOCK; /* size: 0x0720 */


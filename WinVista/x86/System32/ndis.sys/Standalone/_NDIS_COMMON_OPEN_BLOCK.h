typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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
        /* 0x0001 */ unsigned char Abandoned;
        /* 0x0001 */ unsigned char Absolute;
        /* 0x0001 */ unsigned char NpxIrql;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char Size;
            struct
            {
              /* 0x0002 */ unsigned char Hand;
              union
              {
                /* 0x0003 */ unsigned char Inserted;
                /* 0x0003 */ unsigned char DebugActive;
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
  /* 0x00a8 */ struct _KEVENT* CloseCompleteEvent;
  /* 0x00ac */ struct _QUEUED_CLOSE QC;
  /* 0x00c0 */ long AfReferences;
  /* 0x00c4 */ struct _NDIS_OPEN_BLOCK* NextGlobalOpen;
  /* 0x00c8 */ struct _NDIS_OPEN_BLOCK* MiniportNextOpen;
  /* 0x00cc */ struct _NDIS_OPEN_BLOCK* ProtocolNextOpen;
  /* 0x00d0 */ struct _UNICODE_STRING* BindDeviceName;
  /* 0x00d4 */ struct _UNICODE_STRING* RootDeviceName;
  /* 0x00d8 */ struct _NDIS_OPEN_BLOCK* FilterNextOpen;
  /* 0x00dc */ unsigned int PacketFilters;
  /* 0x00e0 */ unsigned int OldPacketFilters;
  union
  {
    struct
    {
      /* 0x00e4 */ unsigned int MaxMulticastAddresses;
      /* 0x00e8 */ struct _ETH_MULTICAST_WRAPPER* MCastAddressBuf;
      /* 0x00ec */ unsigned int NumAddresses;
      /* 0x00f0 */ struct _ETH_MULTICAST_WRAPPER* OldMCastAddressBuf;
      /* 0x00f4 */ unsigned int OldNumAddresses;
    }; /* size: 0x0014 */
    struct
    {
      /* 0x00e4 */ unsigned long FunctionalAddress;
      /* 0x00e8 */ unsigned long OldFunctionalAddress;
      /* 0x00ec */ unsigned char UsingGroupAddress;
      /* 0x00ed */ unsigned char OldUsingGroupAddress;
      /* 0x00f0 */ unsigned long FARefCount[32];
      /* 0x0170 */ unsigned long OldFARefCount[32];
      /* 0x01f0 */ unsigned char RSSParametersBuf[196];
      /* 0x02b4 */ struct _NDIS_RECEIVE_SCALE_PARAMETERS* NdisRSSParameters;
      /* 0x02b8 */ struct _SINGLE_LIST_ENTRY PatternList;
      /* 0x02bc */ void* ProtSendNetBufferListsComplete /* function */;
      /* 0x02c0 */ void* NextSendNetBufferListsComplete /* function */;
      /* 0x02c4 */ void* NextSendNetBufferListsCompleteContext;
      /* 0x02c8 */ void* SendCompleteNdisPacketContext;
      /* 0x02cc */ void* SendCompleteNetBufferListsContext;
      /* 0x02d0 */ void* ReceiveNetBufferLists /* function */;
      /* 0x02d4 */ void* ReceiveNetBufferListsContext;
      /* 0x02d8 */ void* SavedSendNBLHandler /* function */;
      /* 0x02dc */ void* SavedSendPacketsHandler /* function */;
      /* 0x02e0 */ void* SavedCancelSendPacketsHandler /* function */;
      union
      {
        /* 0x02e4 */ void* SavedSendHandler /* function */;
        /* 0x02e4 */ void* SavedWanSendHandler /* function */;
      }; /* size: 0x0004 */
      /* 0x02e8 */ void* InitiateOffloadCompleteHandler /* function */;
      /* 0x02ec */ void* TerminateOffloadCompleteHandler /* function */;
      /* 0x02f0 */ void* UpdateOffloadCompleteHandler /* function */;
      /* 0x02f4 */ void* InvalidateOffloadCompleteHandler /* function */;
      /* 0x02f8 */ void* QueryOffloadCompleteHandler /* function */;
      /* 0x02fc */ void* IndicateOffloadEventHandler /* function */;
      /* 0x0300 */ void* TcpOffloadSendCompleteHandler /* function */;
      /* 0x0304 */ void* TcpOffloadReceiveCompleteHandler /* function */;
      /* 0x0308 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
      /* 0x030c */ void* TcpOffloadForwardCompleteHandler /* function */;
      /* 0x0310 */ void* TcpOffloadEventHandler /* function */;
      /* 0x0314 */ void* TcpOffloadReceiveIndicateHandler /* function */;
      /* 0x0318 */ unsigned long ProtocolMajorVersion;
      /* 0x031c */ void** IfBlock;
      /* 0x0320 */ struct _NDIS_SPIN_LOCK PnPStateLock;
      /* 0x0328 */ enum _NDIS_NDIS5_DRIVER_STATE PnPState;
      /* 0x032c */ enum _NDIS_OPEN_TRANSLATION_STATE TranslationState;
      /* 0x0330 */ int OutstandingSends;
      /* 0x0334 */ struct _NDIS_EVENT PauseEvent;
      /* 0x0344 */ void* Ndis5WanSendHandler /* function */;
      /* 0x0348 */ void* ProtSendCompleteHandler /* function */;
      /* 0x034c */ void* OidRequestCompleteHandler /* function */;
      /* 0x0350 */ void* OidRequestCompleteContext;
      /* 0x0354 */ void* SetInfoBuf;
      /* 0x0358 */ unsigned short SetInfoBufLen;
      /* 0x035c */ unsigned long RequestBuffer;
      /* 0x0360 */ unsigned long SetInfoOid;
      /* 0x0364 */ void* OidContext;
      /* 0x0368 */ long NumOfPauseRestartRequests;
      /* 0x036c */ enum _NDIS_OPEN_STATE State;
      /* 0x0370 */ struct _NDIS_OPEN_OFFLOAD* Offload;
      /* 0x0374 */ struct _NDIS_STATUS_UNBIND_WORKITEM* StatusUnbindWorkItem;
      /* 0x0378 */ unsigned __int64 DpcStartCycle;
      /* 0x0380 */ unsigned long NumberOfNetBufferLists;
      /* 0x0384 */ unsigned char ReceivedAPacket[32];
      /* 0x03a4 */ long __PADDING__[1];
    }; /* size: 0x02c0 */
  }; /* size: 0x02c0 */
} NDIS_COMMON_OPEN_BLOCK, *PNDIS_COMMON_OPEN_BLOCK; /* size: 0x03a8 */


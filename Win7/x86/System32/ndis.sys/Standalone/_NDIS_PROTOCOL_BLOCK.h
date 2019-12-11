typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _REFERENCE
{
  /* 0x0000 */ unsigned long SpinLock;
  /* 0x0004 */ unsigned short ReferenceCount;
  /* 0x0006 */ unsigned char Closing;
  /* 0x0007 */ char __PADDING__[1];
} REFERENCE, *PREFERENCE; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
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

typedef struct _NDIS_PROTOCOL_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ void* ProtocolDriverContext;
  /* 0x0008 */ struct _NDIS_PROTOCOL_BLOCK* NextProtocol;
  /* 0x000c */ struct _NDIS_OPEN_BLOCK* OpenQueue;
  /* 0x0010 */ struct _REFERENCE Ref;
  /* 0x0018 */ unsigned char MajorNdisVersion;
  /* 0x0019 */ unsigned char MinorNdisVersion;
  /* 0x001a */ unsigned char MajorDriverVersion;
  /* 0x001b */ unsigned char MinorDriverVersion;
  /* 0x001c */ unsigned int Reserved;
  /* 0x0020 */ unsigned int Flags;
  /* 0x0024 */ struct _UNICODE_STRING Name;
  /* 0x002c */ unsigned char IsIPv4;
  /* 0x002d */ unsigned char IsIPv6;
  /* 0x002e */ unsigned char IsNdisTest6;
  /* 0x0030 */ void* BindAdapterHandlerEx /* function */;
  /* 0x0034 */ void* UnbindAdapterHandlerEx /* function */;
  /* 0x0038 */ void* OpenAdapterCompleteHandlerEx /* function */;
  /* 0x003c */ void* CloseAdapterCompleteHandlerEx /* function */;
  union
  {
    /* 0x0040 */ void* PnPEventHandler /* function */;
    /* 0x0040 */ void* NetPnPEventHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0044 */ void* UnloadHandler /* function */;
  /* 0x0048 */ void* UninstallHandler /* function */;
  /* 0x004c */ void* RequestCompleteHandler /* function */;
  union
  {
    /* 0x0050 */ void* StatusHandlerEx /* function */;
    /* 0x0050 */ void* StatusHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0054 */ void* StatusCompleteHandler /* function */;
  /* 0x0058 */ void* ReceiveNetBufferListsHandler /* function */;
  /* 0x005c */ void* SendNetBufferListsCompleteHandler /* function */;
  union
  {
    /* 0x0060 */ void* CoStatusHandlerEx /* function */;
    /* 0x0060 */ void* CoStatusHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0064 */ void* CoAfRegisterNotifyHandler /* function */;
  /* 0x0068 */ void* CoReceiveNetBufferListsHandler /* function */;
  /* 0x006c */ void* CoSendNetBufferListsCompleteHandler /* function */;
  /* 0x0070 */ void* OpenAdapterCompleteHandler /* function */;
  /* 0x0074 */ void* CloseAdapterCompleteHandler /* function */;
  union
  {
    /* 0x0078 */ void* SendCompleteHandler /* function */;
    /* 0x0078 */ void* WanSendCompleteHandler /* function */;
  }; /* size: 0x0004 */
  union
  {
    /* 0x007c */ void* TransferDataCompleteHandler /* function */;
    /* 0x007c */ void* WanTransferDataCompleteHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0080 */ void* ResetCompleteHandler /* function */;
  union
  {
    /* 0x0084 */ void* ReceiveHandler /* function */;
    /* 0x0084 */ void* WanReceiveHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0088 */ void* ReceiveCompleteHandler /* function */;
  /* 0x008c */ void* ReceivePacketHandler /* function */;
  /* 0x0090 */ void* BindAdapterHandler /* function */;
  /* 0x0094 */ void* UnbindAdapterHandler /* function */;
  /* 0x0098 */ void* CoSendCompleteHandler /* function */;
  /* 0x009c */ void* CoReceivePacketHandler /* function */;
  /* 0x00a0 */ void* OidRequestCompleteHandler /* function */;
  /* 0x00a4 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x00b4 */ struct _KMUTANT Mutex;
  /* 0x00d4 */ void* MutexOwnerThread;
  /* 0x00d8 */ unsigned long MutexOwnerCount;
  /* 0x00dc */ unsigned long MutexOwner;
  /* 0x00e0 */ struct _UNICODE_STRING* BindDeviceName;
  /* 0x00e4 */ struct _UNICODE_STRING* RootDeviceName;
  /* 0x00e8 */ struct _NDIS_M_DRIVER_BLOCK* AssociatedMiniDriver;
  /* 0x00ec */ struct _NDIS_MINIPORT_BLOCK* BindingAdapter;
  /* 0x00f0 */ struct _KEVENT* DeregEvent;
  union
  {
    /* 0x00f4 */ struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS ClientChars;
    /* 0x00f4 */ struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS CallMgrChars;
  }; /* size: 0x0054 */
  /* 0x0148 */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x014c */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x0150 */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x0154 */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x0158 */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x015c */ void* IndicateOffloadEventHandler /* function */;
  /* 0x0160 */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x0164 */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x0168 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x016c */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x0170 */ void* TcpOffloadEventHandler /* function */;
  /* 0x0174 */ void* TcpOffloadReceiveIndicateHandler /* function */;
  /* 0x0178 */ void* DirectOidRequestCompleteHandler /* function */;
  /* 0x017c */ void* AllocateSharedMemoryHandler /* function */;
  /* 0x0180 */ void* FreeSharedMemoryHandler /* function */;
  /* 0x0184 */ void* AllocateSharedMemoryContext;
} NDIS_PROTOCOL_BLOCK, *PNDIS_PROTOCOL_BLOCK; /* size: 0x0188 */


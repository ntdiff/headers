typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _REFERENCE
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned short ReferenceCount;
  /* 0x000a */ unsigned char Closing;
  /* 0x000b */ char __PADDING__[5];
} REFERENCE, *PREFERENCE; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0028 */ struct _KTHREAD* OwnerThread;
  /* 0x0030 */ unsigned char Abandoned;
  /* 0x0031 */ unsigned char ApcDisable;
  /* 0x0032 */ char __PADDING__[6];
} KMUTANT, *PKMUTANT; /* size: 0x0038 */

typedef struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ void* ClCreateVcHandler /* function */;
  /* 0x0010 */ void* ClDeleteVcHandler /* function */;
  /* 0x0018 */ void* ClOidRequestHandler /* function */;
  /* 0x0020 */ void* ClOidRequestCompleteHandler /* function */;
  /* 0x0028 */ void* ClOpenAfCompleteHandlerEx /* function */;
  /* 0x0030 */ void* ClCloseAfCompleteHandler /* function */;
  /* 0x0038 */ void* ClRegisterSapCompleteHandler /* function */;
  /* 0x0040 */ void* ClDeregisterSapCompleteHandler /* function */;
  /* 0x0048 */ void* ClMakeCallCompleteHandler /* function */;
  /* 0x0050 */ void* ClModifyCallQoSCompleteHandler /* function */;
  /* 0x0058 */ void* ClCloseCallCompleteHandler /* function */;
  /* 0x0060 */ void* ClAddPartyCompleteHandler /* function */;
  /* 0x0068 */ void* ClDropPartyCompleteHandler /* function */;
  /* 0x0070 */ void* ClIncomingCallHandler /* function */;
  /* 0x0078 */ void* ClIncomingCallQoSChangeHandler /* function */;
  /* 0x0080 */ void* ClIncomingCloseCallHandler /* function */;
  /* 0x0088 */ void* ClIncomingDropPartyHandler /* function */;
  /* 0x0090 */ void* ClCallConnectedHandler /* function */;
  /* 0x0098 */ void* ClNotifyCloseAfHandler /* function */;
} NDIS_CO_CLIENT_OPTIONAL_HANDLERS, *PNDIS_CO_CLIENT_OPTIONAL_HANDLERS; /* size: 0x00a0 */

typedef struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ void* CmCreateVcHandler /* function */;
  /* 0x0010 */ void* CmDeleteVcHandler /* function */;
  /* 0x0018 */ void* CmOpenAfHandler /* function */;
  /* 0x0020 */ void* CmCloseAfHandler /* function */;
  /* 0x0028 */ void* CmRegisterSapHandler /* function */;
  /* 0x0030 */ void* CmDeregisterSapHandler /* function */;
  /* 0x0038 */ void* CmMakeCallHandler /* function */;
  /* 0x0040 */ void* CmCloseCallHandler /* function */;
  /* 0x0048 */ void* CmIncomingCallCompleteHandler /* function */;
  /* 0x0050 */ void* CmAddPartyHandler /* function */;
  /* 0x0058 */ void* CmDropPartyHandler /* function */;
  /* 0x0060 */ void* CmActivateVcCompleteHandler /* function */;
  /* 0x0068 */ void* CmDeactivateVcCompleteHandler /* function */;
  /* 0x0070 */ void* CmModifyCallQoSHandler /* function */;
  /* 0x0078 */ void* CmOidRequestHandler /* function */;
  /* 0x0080 */ void* CmOidRequestCompleteHandler /* function */;
  /* 0x0088 */ void* CmNotifyCloseAfCompleteHandler /* function */;
} NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS, *PNDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS; /* size: 0x0090 */

typedef struct _NDIS_PROTOCOL_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ void* ProtocolDriverContext;
  /* 0x0010 */ struct _NDIS_PROTOCOL_BLOCK* NextProtocol;
  /* 0x0018 */ struct _NDIS_OPEN_BLOCK* OpenQueue;
  /* 0x0020 */ struct _REFERENCE Ref;
  /* 0x0030 */ unsigned char MajorNdisVersion;
  /* 0x0031 */ unsigned char MinorNdisVersion;
  /* 0x0032 */ unsigned char MajorDriverVersion;
  /* 0x0033 */ unsigned char MinorDriverVersion;
  /* 0x0034 */ unsigned int Reserved;
  /* 0x0038 */ unsigned int Flags;
  /* 0x0040 */ struct _UNICODE_STRING Name;
  /* 0x0050 */ unsigned char IsIPv4;
  /* 0x0051 */ unsigned char IsIPv6;
  /* 0x0052 */ unsigned char IsNdisTest6;
  /* 0x0058 */ void* BindAdapterHandlerEx /* function */;
  /* 0x0060 */ void* UnbindAdapterHandlerEx /* function */;
  /* 0x0068 */ void* OpenAdapterCompleteHandlerEx /* function */;
  /* 0x0070 */ void* CloseAdapterCompleteHandlerEx /* function */;
  union
  {
    /* 0x0078 */ void* PnPEventHandler /* function */;
    /* 0x0078 */ void* NetPnPEventHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0080 */ void* UnloadHandler /* function */;
  /* 0x0088 */ void* UninstallHandler /* function */;
  /* 0x0090 */ void* RequestCompleteHandler /* function */;
  union
  {
    /* 0x0098 */ void* StatusHandlerEx /* function */;
    /* 0x0098 */ void* StatusHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x00a0 */ void* StatusCompleteHandler /* function */;
  /* 0x00a8 */ void* ReceiveNetBufferListsHandler /* function */;
  /* 0x00b0 */ void* SendNetBufferListsCompleteHandler /* function */;
  union
  {
    /* 0x00b8 */ void* CoStatusHandlerEx /* function */;
    /* 0x00b8 */ void* CoStatusHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x00c0 */ void* CoAfRegisterNotifyHandler /* function */;
  /* 0x00c8 */ void* CoReceiveNetBufferListsHandler /* function */;
  /* 0x00d0 */ void* CoSendNetBufferListsCompleteHandler /* function */;
  /* 0x00d8 */ void* OpenAdapterCompleteHandler /* function */;
  /* 0x00e0 */ void* CloseAdapterCompleteHandler /* function */;
  union
  {
    /* 0x00e8 */ void* SendCompleteHandler /* function */;
    /* 0x00e8 */ void* WanSendCompleteHandler /* function */;
  }; /* size: 0x0008 */
  union
  {
    /* 0x00f0 */ void* TransferDataCompleteHandler /* function */;
    /* 0x00f0 */ void* WanTransferDataCompleteHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x00f8 */ void* ResetCompleteHandler /* function */;
  union
  {
    /* 0x0100 */ void* ReceiveHandler /* function */;
    /* 0x0100 */ void* WanReceiveHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0108 */ void* ReceiveCompleteHandler /* function */;
  /* 0x0110 */ void* ReceivePacketHandler /* function */;
  /* 0x0118 */ void* BindAdapterHandler /* function */;
  /* 0x0120 */ void* UnbindAdapterHandler /* function */;
  /* 0x0128 */ void* CoSendCompleteHandler /* function */;
  /* 0x0130 */ void* CoReceivePacketHandler /* function */;
  /* 0x0138 */ void* OidRequestCompleteHandler /* function */;
  /* 0x0140 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0160 */ struct _KMUTANT Mutex;
  /* 0x0198 */ void* MutexOwnerThread;
  /* 0x01a0 */ unsigned long MutexOwnerCount;
  /* 0x01a4 */ unsigned long MutexOwner;
  /* 0x01a8 */ struct _UNICODE_STRING* BindDeviceName;
  /* 0x01b0 */ struct _UNICODE_STRING* RootDeviceName;
  /* 0x01b8 */ struct _NDIS_M_DRIVER_BLOCK* AssociatedMiniDriver;
  /* 0x01c0 */ struct _NDIS_MINIPORT_BLOCK* BindingAdapter;
  /* 0x01c8 */ struct _KEVENT* DeregEvent;
  union
  {
    /* 0x01d0 */ struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS ClientChars;
    /* 0x01d0 */ struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS CallMgrChars;
  }; /* size: 0x00a0 */
  /* 0x0270 */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x0278 */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x0280 */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x0288 */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x0290 */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x0298 */ void* IndicateOffloadEventHandler /* function */;
  /* 0x02a0 */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x02a8 */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x02b0 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x02b8 */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x02c0 */ void* TcpOffloadEventHandler /* function */;
  /* 0x02c8 */ void* TcpOffloadReceiveIndicateHandler /* function */;
  /* 0x02d0 */ void* DirectOidRequestCompleteHandler /* function */;
} NDIS_PROTOCOL_BLOCK, *PNDIS_PROTOCOL_BLOCK; /* size: 0x02d8 */


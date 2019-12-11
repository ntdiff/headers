typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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

typedef struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned char MajorNdisVersion;
  /* 0x0005 */ unsigned char MinorNdisVersion;
  /* 0x0006 */ unsigned char MajorDriverVersion;
  /* 0x0007 */ unsigned char MinorDriverVersion;
  /* 0x0008 */ unsigned long Flags;
  /* 0x0010 */ void* SetOptionsHandler /* function */;
  /* 0x0018 */ void* InitializeHandlerEx /* function */;
  /* 0x0020 */ void* HaltHandlerEx /* function */;
  /* 0x0028 */ void* UnloadHandler /* function */;
  /* 0x0030 */ void* PauseHandler /* function */;
  /* 0x0038 */ void* RestartHandler /* function */;
  /* 0x0040 */ void* OidRequestHandler /* function */;
  /* 0x0048 */ void* SendNetBufferListsHandler /* function */;
  /* 0x0050 */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x0058 */ void* CancelSendHandler /* function */;
  /* 0x0060 */ void* CheckForHangHandlerEx /* function */;
  /* 0x0068 */ void* ResetHandlerEx /* function */;
  /* 0x0070 */ void* DevicePnPEventNotifyHandler /* function */;
  /* 0x0078 */ void* ShutdownHandlerEx /* function */;
  /* 0x0080 */ void* CancelOidRequestHandler /* function */;
  /* 0x0088 */ void* DirectOidRequestHandler /* function */;
  /* 0x0090 */ void* CancelDirectOidRequestHandler /* function */;
} NDIS_MINIPORT_DRIVER_CHARACTERISTICS, *PNDIS_MINIPORT_DRIVER_CHARACTERISTICS; /* size: 0x0098 */

typedef struct _NDIS51_MINIPORT_CHARACTERISTICS
{
  /* 0x0000 */ unsigned char MajorNdisVersion;
  /* 0x0001 */ unsigned char MinorNdisVersion;
  /* 0x0002 */ unsigned short Filler;
  /* 0x0004 */ unsigned int Reserved;
  /* 0x0008 */ void* CheckForHangHandler /* function */;
  /* 0x0010 */ void* DisableInterruptHandler /* function */;
  /* 0x0018 */ void* EnableInterruptHandler /* function */;
  /* 0x0020 */ void* HaltHandler /* function */;
  /* 0x0028 */ void* HandleInterruptHandler /* function */;
  /* 0x0030 */ void* InitializeHandler /* function */;
  /* 0x0038 */ void* ISRHandler /* function */;
  /* 0x0040 */ void* QueryInformationHandler /* function */;
  /* 0x0048 */ void* ReconfigureHandler /* function */;
  /* 0x0050 */ void* ResetHandler /* function */;
  union
  {
    /* 0x0058 */ void* SendHandler /* function */;
    /* 0x0058 */ void* WanSendHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0060 */ void* SetInformationHandler /* function */;
  union
  {
    /* 0x0068 */ void* TransferDataHandler /* function */;
    /* 0x0068 */ void* WanTransferDataHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0070 */ void* ReturnPacketHandler /* function */;
  /* 0x0078 */ void* SendPacketsHandler /* function */;
  /* 0x0080 */ void* AllocateCompleteHandler /* function */;
  /* 0x0088 */ void* CoCreateVcHandler /* function */;
  /* 0x0090 */ void* CoDeleteVcHandler /* function */;
  /* 0x0098 */ void* CoActivateVcHandler /* function */;
  /* 0x00a0 */ void* CoDeactivateVcHandler /* function */;
  /* 0x00a8 */ void* CoSendPacketsHandler /* function */;
  /* 0x00b0 */ void* CoRequestHandler /* function */;
  /* 0x00b8 */ void* CancelSendPacketsHandler /* function */;
  /* 0x00c0 */ void* PnPEventNotifyHandler /* function */;
  /* 0x00c8 */ void* AdapterShutdownHandler /* function */;
  /* 0x00d0 */ void* Reserved1;
  /* 0x00d8 */ void* Reserved2;
  /* 0x00e0 */ void* Reserved3;
  /* 0x00e8 */ void* Reserved4;
} NDIS51_MINIPORT_CHARACTERISTICS, *PNDIS51_MINIPORT_CHARACTERISTICS; /* size: 0x00f0 */

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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _REFERENCE
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned short ReferenceCount;
  /* 0x000a */ unsigned char Closing;
  /* 0x000b */ char __PADDING__[5];
} REFERENCE, *PREFERENCE; /* size: 0x0010 */

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0028 */ struct _KTHREAD* OwnerThread;
  /* 0x0030 */ unsigned char Abandoned;
  /* 0x0031 */ unsigned char ApcDisable;
  /* 0x0032 */ char __PADDING__[6];
} KMUTANT, *PKMUTANT; /* size: 0x0038 */

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

typedef struct _NDIS_M_DRIVER_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ struct _NDIS_M_DRIVER_BLOCK* NextDriver;
  /* 0x0010 */ struct _NDIS_MINIPORT_BLOCK* MiniportQueue;
  /* 0x0018 */ unsigned char MajorNdisVersion;
  /* 0x0019 */ unsigned char MinorNdisVersion;
  /* 0x001a */ unsigned short Flags;
  /* 0x0020 */ struct _NDIS_WRAPPER_HANDLE* NdisDriverInfo;
  /* 0x0028 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0030 */ struct _UNICODE_STRING ServiceRegPath;
  /* 0x0040 */ void* MiniportDriverContext;
  /* 0x0048 */ struct _NDIS_PROTOCOL_BLOCK* AssociatedProtocol;
  /* 0x0050 */ struct _LIST_ENTRY DeviceList;
  /* 0x0060 */ struct _NDIS_PENDING_IM_INSTANCE* PendingDeviceList;
  /* 0x0068 */ void* UnloadHandler /* function */;
  union
  {
    /* 0x0070 */ struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS MiniportDriverCharacteristics;
    /* 0x0070 */ struct _NDIS51_MINIPORT_CHARACTERISTICS MiniportCharacteristics;
  }; /* size: 0x00f0 */
  /* 0x0160 */ struct _KEVENT MiniportsRemovedEvent;
  /* 0x0178 */ struct _REFERENCE Ref;
  /* 0x0188 */ struct _KMUTANT IMStartRemoveMutex;
  /* 0x01c0 */ void* IMStartRemoveMutexOwnerThread;
  /* 0x01c8 */ unsigned long DriverVersion;
  /* 0x01d0 */ struct _UNICODE_STRING ServiceName;
  /* 0x01e0 */ void* CoCreateVcHandler /* function */;
  /* 0x01e8 */ void* CoDeleteVcHandler /* function */;
  /* 0x01f0 */ void* CoActivateVcHandler /* function */;
  /* 0x01f8 */ void* CoDeactivateVcHandler /* function */;
  /* 0x0200 */ void* CoSendNetBufferListsHandler /* function */;
  /* 0x0208 */ void* CoRequestHandler /* function */;
  /* 0x0210 */ void* CoOidRequestHandler /* function */;
  /* 0x0218 */ void* InitiateOffloadHandler /* function */;
  /* 0x0220 */ void* TerminateOffloadHandler /* function */;
  /* 0x0228 */ void* UpdateOffloadHandler /* function */;
  /* 0x0230 */ void* InvalidateOffloadHandler /* function */;
  /* 0x0238 */ void* QueryOffloadHandler /* function */;
  /* 0x0240 */ void* TcpOffloadSendHandler /* function */;
  /* 0x0248 */ void* TcpOffloadReceiveHandler /* function */;
  /* 0x0250 */ void* TcpOffloadDisconnectHandler /* function */;
  /* 0x0258 */ void* TcpOffloadForwardHandler /* function */;
  /* 0x0260 */ void* TcpOffloadReceiveReturnHandler /* function */;
  /* 0x0268 */ struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS CallMgrChars;
  /* 0x02f8 */ void* AddDeviceHandler /* function */;
  /* 0x0300 */ void* RemoveDeviceHandler /* function */;
  /* 0x0308 */ void* FilterResourceRequirementsHandler /* function */;
  /* 0x0310 */ void* StartDeviceHandler /* function */;
} NDIS_M_DRIVER_BLOCK, *PNDIS_M_DRIVER_BLOCK; /* size: 0x0318 */


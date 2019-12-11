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
  /* 0x0008 */ wchar_t* Buffer;
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

typedef struct _NDIS50_MINIPORT_CHARACTERISTICS
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
} NDIS50_MINIPORT_CHARACTERISTICS, *PNDIS50_MINIPORT_CHARACTERISTICS; /* size: 0x00b8 */

typedef struct _NDIS51_MINIPORT_CHARACTERISTICS
{
  union
  {
    /* 0x0000 */ struct _NDIS50_MINIPORT_CHARACTERISTICS Ndis50Chars;
    struct
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
    }; /* size: 0x00b8 */
  }; /* size: 0x00b8 */
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
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 4; /* bit position: 4 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 3; /* bit position: 3 */
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

typedef struct _REFERENCE_EX
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned short ReferenceCount;
  /* 0x000a */ unsigned char Closing;
  /* 0x000b */ unsigned char ZeroBased;
  /* 0x0010 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
} REFERENCE_EX, *PREFERENCE_EX; /* size: 0x0018 */

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
  /* 0x0178 */ struct _REFERENCE_EX Ref;
  /* 0x0190 */ struct _KMUTANT IMStartRemoveMutex;
  /* 0x01c8 */ void* IMStartRemoveMutexOwnerThread;
  /* 0x01d0 */ unsigned long DriverVersion;
  /* 0x01d8 */ struct _UNICODE_STRING ServiceName;
  /* 0x01e8 */ void* CoCreateVcHandler /* function */;
  /* 0x01f0 */ void* CoDeleteVcHandler /* function */;
  /* 0x01f8 */ void* CoActivateVcHandler /* function */;
  /* 0x0200 */ void* CoDeactivateVcHandler /* function */;
  /* 0x0208 */ void* CoSendNetBufferListsHandler /* function */;
  /* 0x0210 */ void* CoRequestHandler /* function */;
  /* 0x0218 */ void* CoOidRequestHandler /* function */;
  /* 0x0220 */ void* InitiateOffloadHandler /* function */;
  /* 0x0228 */ void* TerminateOffloadHandler /* function */;
  /* 0x0230 */ void* UpdateOffloadHandler /* function */;
  /* 0x0238 */ void* InvalidateOffloadHandler /* function */;
  /* 0x0240 */ void* QueryOffloadHandler /* function */;
  /* 0x0248 */ void* TcpOffloadSendHandler /* function */;
  /* 0x0250 */ void* TcpOffloadReceiveHandler /* function */;
  /* 0x0258 */ void* TcpOffloadDisconnectHandler /* function */;
  /* 0x0260 */ void* TcpOffloadForwardHandler /* function */;
  /* 0x0268 */ void* TcpOffloadReceiveReturnHandler /* function */;
  /* 0x0270 */ struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS CallMgrChars;
  /* 0x0300 */ void* AddDeviceHandler /* function */;
  /* 0x0308 */ void* RemoveDeviceHandler /* function */;
  /* 0x0310 */ void* FilterResourceRequirementsHandler /* function */;
  /* 0x0318 */ void* StartDeviceHandler /* function */;
  /* 0x0320 */ struct _NDIS_MINIPORT_BLOCK* CompositeBusDefaultMiniport;
  /* 0x0328 */ void* OpenNDKAdapterHandler /* function */;
  /* 0x0330 */ void* CloseNDKAdapterHandler /* function */;
  /* 0x0338 */ void* SysPowerNotifyHandler /* function */;
  /* 0x0340 */ void* IdleNotificationHandler /* function */;
  /* 0x0348 */ void* CancelIdleNotificationHandler /* function */;
  /* 0x0350 */ void* ReenumerateFailedAdapterHandler /* function */;
  /* 0x0358 */ void* LiveDumpCallback /* function */;
  /* 0x0360 */ struct _UNICODE_STRING ImageName;
  /* 0x0370 */ void* AllocateNetBufferListForwardingContextHandler /* function */;
  /* 0x0378 */ void* FreeNetBufferListForwardingContextHandler /* function */;
  /* 0x0380 */ void* AddNetBufferListDestinationHandler /* function */;
  /* 0x0388 */ void* SetNetBufferListSourceHandler /* function */;
  /* 0x0390 */ void* GrowNetBufferListDestinationsHandler /* function */;
  /* 0x0398 */ void* GetNetBufferListDestinationsHandler /* function */;
  /* 0x03a0 */ void* UpdateNetBufferListDestinationsHandler /* function */;
  /* 0x03a8 */ void* CopyNetBufferListInfoHandler /* function */;
  /* 0x03b0 */ void* ReferenceSwitchNicHandler /* function */;
  /* 0x03b8 */ void* DereferenceSwitchNicHandler /* function */;
  /* 0x03c0 */ void* ReferenceSwitchPortHandler /* function */;
  /* 0x03c8 */ void* DereferenceSwitchPortHandler /* function */;
  /* 0x03d0 */ void* ReportFilteredNetBufferListsHandler /* function */;
  /* 0x03d8 */ void* SetNetBufferListSwitchContextHandler /* function */;
  /* 0x03e0 */ void* GetNetBufferListSwitchContextHandler /* function */;
} NDIS_M_DRIVER_BLOCK, *PNDIS_M_DRIVER_BLOCK; /* size: 0x03e8 */


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
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned char MajorNdisVersion;
  /* 0x0005 */ unsigned char MinorNdisVersion;
  /* 0x0006 */ unsigned char MajorDriverVersion;
  /* 0x0007 */ unsigned char MinorDriverVersion;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ void* SetOptionsHandler /* function */;
  /* 0x0010 */ void* InitializeHandlerEx /* function */;
  /* 0x0014 */ void* HaltHandlerEx /* function */;
  /* 0x0018 */ void* UnloadHandler /* function */;
  /* 0x001c */ void* PauseHandler /* function */;
  /* 0x0020 */ void* RestartHandler /* function */;
  /* 0x0024 */ void* OidRequestHandler /* function */;
  /* 0x0028 */ void* SendNetBufferListsHandler /* function */;
  /* 0x002c */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x0030 */ void* CancelSendHandler /* function */;
  /* 0x0034 */ void* CheckForHangHandlerEx /* function */;
  /* 0x0038 */ void* ResetHandlerEx /* function */;
  /* 0x003c */ void* DevicePnPEventNotifyHandler /* function */;
  /* 0x0040 */ void* ShutdownHandlerEx /* function */;
  /* 0x0044 */ void* CancelOidRequestHandler /* function */;
  /* 0x0048 */ void* DirectOidRequestHandler /* function */;
  /* 0x004c */ void* CancelDirectOidRequestHandler /* function */;
} NDIS_MINIPORT_DRIVER_CHARACTERISTICS, *PNDIS_MINIPORT_DRIVER_CHARACTERISTICS; /* size: 0x0050 */

typedef struct _NDIS50_MINIPORT_CHARACTERISTICS
{
  /* 0x0000 */ unsigned char MajorNdisVersion;
  /* 0x0001 */ unsigned char MinorNdisVersion;
  /* 0x0002 */ unsigned short Filler;
  /* 0x0004 */ unsigned int Reserved;
  /* 0x0008 */ void* CheckForHangHandler /* function */;
  /* 0x000c */ void* DisableInterruptHandler /* function */;
  /* 0x0010 */ void* EnableInterruptHandler /* function */;
  /* 0x0014 */ void* HaltHandler /* function */;
  /* 0x0018 */ void* HandleInterruptHandler /* function */;
  /* 0x001c */ void* InitializeHandler /* function */;
  /* 0x0020 */ void* ISRHandler /* function */;
  /* 0x0024 */ void* QueryInformationHandler /* function */;
  /* 0x0028 */ void* ReconfigureHandler /* function */;
  /* 0x002c */ void* ResetHandler /* function */;
  union
  {
    /* 0x0030 */ void* SendHandler /* function */;
    /* 0x0030 */ void* WanSendHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0034 */ void* SetInformationHandler /* function */;
  union
  {
    /* 0x0038 */ void* TransferDataHandler /* function */;
    /* 0x0038 */ void* WanTransferDataHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x003c */ void* ReturnPacketHandler /* function */;
  /* 0x0040 */ void* SendPacketsHandler /* function */;
  /* 0x0044 */ void* AllocateCompleteHandler /* function */;
  /* 0x0048 */ void* CoCreateVcHandler /* function */;
  /* 0x004c */ void* CoDeleteVcHandler /* function */;
  /* 0x0050 */ void* CoActivateVcHandler /* function */;
  /* 0x0054 */ void* CoDeactivateVcHandler /* function */;
  /* 0x0058 */ void* CoSendPacketsHandler /* function */;
  /* 0x005c */ void* CoRequestHandler /* function */;
} NDIS50_MINIPORT_CHARACTERISTICS, *PNDIS50_MINIPORT_CHARACTERISTICS; /* size: 0x0060 */

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
      /* 0x000c */ void* DisableInterruptHandler /* function */;
      /* 0x0010 */ void* EnableInterruptHandler /* function */;
      /* 0x0014 */ void* HaltHandler /* function */;
      /* 0x0018 */ void* HandleInterruptHandler /* function */;
      /* 0x001c */ void* InitializeHandler /* function */;
      /* 0x0020 */ void* ISRHandler /* function */;
      /* 0x0024 */ void* QueryInformationHandler /* function */;
      /* 0x0028 */ void* ReconfigureHandler /* function */;
      /* 0x002c */ void* ResetHandler /* function */;
      union
      {
        /* 0x0030 */ void* SendHandler /* function */;
        /* 0x0030 */ void* WanSendHandler /* function */;
      }; /* size: 0x0004 */
      /* 0x0034 */ void* SetInformationHandler /* function */;
      union
      {
        /* 0x0038 */ void* TransferDataHandler /* function */;
        /* 0x0038 */ void* WanTransferDataHandler /* function */;
      }; /* size: 0x0004 */
      /* 0x003c */ void* ReturnPacketHandler /* function */;
      /* 0x0040 */ void* SendPacketsHandler /* function */;
      /* 0x0044 */ void* AllocateCompleteHandler /* function */;
      /* 0x0048 */ void* CoCreateVcHandler /* function */;
      /* 0x004c */ void* CoDeleteVcHandler /* function */;
      /* 0x0050 */ void* CoActivateVcHandler /* function */;
      /* 0x0054 */ void* CoDeactivateVcHandler /* function */;
      /* 0x0058 */ void* CoSendPacketsHandler /* function */;
      /* 0x005c */ void* CoRequestHandler /* function */;
    }; /* size: 0x0060 */
  }; /* size: 0x0060 */
  /* 0x0060 */ void* CancelSendPacketsHandler /* function */;
  /* 0x0064 */ void* PnPEventNotifyHandler /* function */;
  /* 0x0068 */ void* AdapterShutdownHandler /* function */;
  /* 0x006c */ void* Reserved1;
  /* 0x0070 */ void* Reserved2;
  /* 0x0074 */ void* Reserved3;
  /* 0x0078 */ void* Reserved4;
} NDIS51_MINIPORT_CHARACTERISTICS, *PNDIS51_MINIPORT_CHARACTERISTICS; /* size: 0x007c */

class wistd::unique_ptr<_NDIS_MINIPORT_DRIVER_CHARACTERISTICS,wistd::default_delete<_NDIS_MINIPORT_DRIVER_CHARACTERISTICS> >
{
}; /* size: 0x0004 */

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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _REFERENCE_EX
{
  /* 0x0000 */ unsigned long SpinLock;
  /* 0x0004 */ unsigned short ReferenceCount;
  /* 0x0006 */ unsigned char Closing;
  /* 0x0007 */ unsigned char ZeroBased;
  /* 0x0008 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
} REFERENCE_EX, *PREFERENCE_EX; /* size: 0x000c */

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0018 */ struct _KTHREAD* OwnerThread;
  /* 0x001c */ unsigned char Abandoned;
  /* 0x001d */ unsigned char ApcDisable;
  /* 0x001e */ char __PADDING__[2];
} KMUTANT, *PKMUTANT; /* size: 0x0020 */

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

typedef enum _NDIS_MINIPORT_HOOK_DRIVER_TYPE
{
  NdisMiniportHookDriverTypeNone = 0,
  NdisMiniportHookDriverTypeWdi = 1,
  NdisMiniportHookDriverType_Maximum = 2,
} NDIS_MINIPORT_HOOK_DRIVER_TYPE, *PNDIS_MINIPORT_HOOK_DRIVER_TYPE;

typedef struct _NDIS_M_DRIVER_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_M_DRIVER_BLOCK* NextDriver;
  /* 0x0008 */ struct _NDIS_MINIPORT_BLOCK* MiniportQueue;
  /* 0x000c */ unsigned char MajorNdisVersion;
  /* 0x000d */ unsigned char MinorNdisVersion;
  /* 0x000e */ unsigned short Flags;
  /* 0x0010 */ struct _NDIS_WRAPPER_HANDLE* NdisDriverInfo;
  /* 0x0014 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0018 */ struct _UNICODE_STRING ServiceRegPath;
  /* 0x0020 */ void* MiniportDriverContext;
  /* 0x0024 */ struct _NDIS_PROTOCOL_BLOCK* AssociatedProtocol;
  /* 0x0028 */ struct _LIST_ENTRY DeviceList;
  /* 0x0030 */ struct _NDIS_PENDING_IM_INSTANCE* PendingDeviceList;
  /* 0x0034 */ void* UnloadHandler /* function */;
  union
  {
    /* 0x0038 */ struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS MiniportDriverCharacteristics;
    /* 0x0038 */ struct _NDIS51_MINIPORT_CHARACTERISTICS MiniportCharacteristics;
  }; /* size: 0x007c */
  /* 0x00b4 */ class wistd::unique_ptr<_NDIS_MINIPORT_DRIVER_CHARACTERISTICS,wistd::default_delete<_NDIS_MINIPORT_DRIVER_CHARACTERISTICS> > UnhookedCharacteristics;
  /* 0x00b8 */ struct _NDIS_WDF_CX_DRIVER_BLOCK* CxBlock;
  /* 0x00bc */ struct _KEVENT MiniportsRemovedEvent;
  /* 0x00cc */ struct _REFERENCE_EX Ref;
  /* 0x00d8 */ struct _KMUTANT IMStartRemoveMutex;
  /* 0x00f8 */ void* IMStartRemoveMutexOwnerThread;
  /* 0x00fc */ unsigned long DriverVersion;
  /* 0x0100 */ struct _UNICODE_STRING ServiceName;
  /* 0x0108 */ void* CoCreateVcHandler /* function */;
  /* 0x010c */ void* CoDeleteVcHandler /* function */;
  /* 0x0110 */ void* CoActivateVcHandler /* function */;
  /* 0x0114 */ void* CoDeactivateVcHandler /* function */;
  /* 0x0118 */ void* CoSendNetBufferListsHandler /* function */;
  /* 0x011c */ void* CoRequestHandler /* function */;
  /* 0x0120 */ void* CoOidRequestHandler /* function */;
  /* 0x0124 */ void* InitiateOffloadHandler /* function */;
  /* 0x0128 */ void* TerminateOffloadHandler /* function */;
  /* 0x012c */ void* UpdateOffloadHandler /* function */;
  /* 0x0130 */ void* InvalidateOffloadHandler /* function */;
  /* 0x0134 */ void* QueryOffloadHandler /* function */;
  /* 0x0138 */ void* TcpOffloadSendHandler /* function */;
  /* 0x013c */ void* TcpOffloadReceiveHandler /* function */;
  /* 0x0140 */ void* TcpOffloadDisconnectHandler /* function */;
  /* 0x0144 */ void* TcpOffloadForwardHandler /* function */;
  /* 0x0148 */ void* TcpOffloadReceiveReturnHandler /* function */;
  /* 0x014c */ struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS CallMgrChars;
  /* 0x0198 */ void* AddDeviceHandler /* function */;
  /* 0x019c */ void* RemoveDeviceHandler /* function */;
  /* 0x01a0 */ void* FilterResourceRequirementsHandler /* function */;
  /* 0x01a4 */ void* StartDeviceHandler /* function */;
  /* 0x01a8 */ void* OpenNDKAdapterHandler /* function */;
  /* 0x01ac */ void* CloseNDKAdapterHandler /* function */;
  /* 0x01b0 */ void* SysPowerNotifyHandler /* function */;
  /* 0x01b4 */ void* IdleNotificationHandler /* function */;
  /* 0x01b8 */ void* CancelIdleNotificationHandler /* function */;
  /* 0x01bc */ void* DevicePowerNotifyHandler /* function */;
  /* 0x01c0 */ void* ReenumerateFailedAdapterHandler /* function */;
  /* 0x01c4 */ void* LiveDumpCallback /* function */;
  /* 0x01c8 */ struct _UNICODE_STRING ImageName;
  /* 0x01d0 */ struct NDIS_MINIPORT_HOOK_DRIVER_HANDLE__* HookDriverHandle;
  /* 0x01d4 */ enum _NDIS_MINIPORT_HOOK_DRIVER_TYPE HookType;
  /* 0x01d8 */ BOOL HookRegistered;
  /* 0x01dc */ void* AllocateNetBufferListForwardingContextHandler /* function */;
  /* 0x01e0 */ void* FreeNetBufferListForwardingContextHandler /* function */;
  /* 0x01e4 */ void* AddNetBufferListDestinationHandler /* function */;
  /* 0x01e8 */ void* SetNetBufferListSourceHandler /* function */;
  /* 0x01ec */ void* GrowNetBufferListDestinationsHandler /* function */;
  /* 0x01f0 */ void* GetNetBufferListDestinationsHandler /* function */;
  /* 0x01f4 */ void* UpdateNetBufferListDestinationsHandler /* function */;
  /* 0x01f8 */ void* CopyNetBufferListInfoHandler /* function */;
  /* 0x01fc */ void* ReferenceSwitchNicHandler /* function */;
  /* 0x0200 */ void* DereferenceSwitchNicHandler /* function */;
  /* 0x0204 */ void* ReferenceSwitchPortHandler /* function */;
  /* 0x0208 */ void* DereferenceSwitchPortHandler /* function */;
  /* 0x020c */ void* ReportFilteredNetBufferListsHandler /* function */;
  /* 0x0210 */ void* SetNetBufferListSwitchContextHandler /* function */;
  /* 0x0214 */ void* GetNetBufferListSwitchContextHandler /* function */;
} NDIS_M_DRIVER_BLOCK, *PNDIS_M_DRIVER_BLOCK; /* size: 0x0218 */


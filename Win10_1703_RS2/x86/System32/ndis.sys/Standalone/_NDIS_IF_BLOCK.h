typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef union _NET_LUID_LH
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Reserved : 24; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NetLuidIndex : 24; /* bit position: 24 */
        /* 0x0000 */ unsigned __int64 IfType : 16; /* bit position: 48 */
      }; /* bitfield */
    } /* size: 0x0008 */ Info;
  }; /* size: 0x0008 */
} NET_LUID_LH, *PNET_LUID_LH; /* size: 0x0008 */

typedef struct _NET_PHYSICAL_LOCATION_LH
{
  /* 0x0000 */ unsigned long BusNumber;
  /* 0x0004 */ unsigned long SlotNumber;
  /* 0x0008 */ unsigned long FunctionNumber;
} NET_PHYSICAL_LOCATION_LH, *PNET_PHYSICAL_LOCATION_LH; /* size: 0x000c */

enum NdisIfBlockSource
{
  NdisIfBlockSourcePublicApi = 0,
  NdisIfBlockSourcePersistedNsi = 1,
  NdisIfBlockSourcePersistedNetSetup = 2,
  NdisIfBlockSourceAutomaticLwFilter = 3,
  NdisIfBlockSourceAutomaticLoopback = 4,
  NdisIfBlockSourceBootNic = 5,
};

typedef enum _NDIS_MINIPORT_EVENT
{
  NdisMEvent_Unknown = 0,
  NdisMEventDx_SystemSleep = 1,
  NdisMEventDx_NicQuiet = 2,
  NdisMEventDx_SSIdle = 3,
  NdisMEventDx_D3DTimeout = 4,
  NdisMEventD0_SystemResume = 5,
  NdisMEventD0_NicActive = 6,
  NdisMEventD0_AoAcWake = 7,
  NdisMEventD0_SSResume = 8,
  NdisMEventD0_D3DCancel = 9,
  NdisMEventD0_D3DWake = 10,
  NdisMEventD0_D3DResume = 11,
  NdisMEventD0_Complete = 12,
  NdisMEventD0_SSComplete = 13,
  NdisMEventDx_Complete = 14,
  NdisMEventDx_SSComplete = 15,
  NdisMEventD0_AoAcSurpriseWake = 20,
  NdisMEvent_DeviceAdded = 31,
  NdisMEvent_DeviceStart = 32,
  NdisMEvent_DeviceQueryRemove = 33,
  NdisMEvent_DeviceCancelRemove = 34,
  NdisMEvent_DeviceRemove = 35,
  NdisMEvent_DeviceSurpriseRemoval = 36,
  NdisMEvent_DeviceQueryStop = 37,
  NdisMEvent_DeviceCancelStop = 38,
  NdisMEvent_DeviceStop = 39,
  NdisMEvent_MiniportInitialized = 51,
  NdisMEvent_MiniportHalted = 52,
  NdisMEvent_MiniportPaused = 53,
  NdisMEvent_MiniportRestarted = 54,
  NdisMEvent_MiniportPmInitialized = 55,
  NdisMEventErr_Min = 70,
  NdisMEventErr_UserRequested = 70,
  NdisMEventErr_MiniportRequested = 71,
  NdisMEventErr_FailedIMInitDevice = 72,
  NdisMEventErr_FailedRestart = 73,
  NdisMEventErr_FailedPowerD0 = 74,
  NdisMEventErr_FailedPowerDx = 75,
  NdisMEventErr_UninstalledByUsermode = 76,
  NdisMEventErr_Max = 76,
} NDIS_MINIPORT_EVENT, *PNDIS_MINIPORT_EVENT;

typedef struct _NDIS_IF_BLOCK
{
  /* 0x04d0 */ struct _LIST_ENTRY Link;
  /* 0x04d8 */ struct _LIST_ENTRY ProviderLink;
  /* 0x04e0 */ struct _LIST_ENTRY NetworkLink;
  /* 0x04e8 */ struct _NDIS_IF_RCV_ADDRESS* ifRcvAddressTable;
  /* 0x04ec */ unsigned long ifRcvAddressCount;
  /* 0x04f0 */ unsigned long ifMaxRcvAddressCount;
  /* 0x04f4 */ unsigned long LowerLayerIfCount;
  /* 0x04f8 */ unsigned long HigherLayerIfCount;
  /* 0x04fc */ long Ref;
  /* 0x0500 */ union _NET_LUID_LH NetLuid;
  /* 0x0508 */ void* ProviderIfContext;
  /* 0x050c */ struct _NDIS_IF_PROVIDER_BLOCK* ProviderHandle;
  /* 0x0510 */ unsigned long Flags;
  /* 0x0514 */ struct _NET_PHYSICAL_LOCATION_LH PhysicalLocation;
  /* 0x0520 */ unsigned long WanTunnelType;
  /* 0x0524 */ unsigned long PortNumber;
  /* 0x0528 */ unsigned __int64 ifLastChange;
  /* 0x0530 */ unsigned __int64 ifCounterDiscontinuityTime;
  /* 0x0538 */ struct _NDIS_IF_NETWORK_BLOCK* Network;
  /* 0x053c */ struct _NDIS_IF_COMPARTMENT_BLOCK* Compartment;
  /* 0x0540 */ struct _KEVENT* AsyncEvent;
  /* 0x0544 */ unsigned char AlreadyDeregistered;
  /* 0x0545 */ unsigned char bNdisIsProvider;
  /* 0x0546 */ unsigned char IsNdisFilter;
  /* 0x0547 */ unsigned char MiniportAvailable;
  /* 0x0548 */ unsigned long MiniportLinkReference;
  /* 0x054c */ enum NdisIfBlockSource Source;
  union
  {
    /* 0x0550 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
    /* 0x0550 */ struct _NDIS_FILTER_BLOCK* Filter;
  }; /* size: 0x0004 */
  /* 0x0554 */ unsigned long SupportedStatistics;
  /* 0x0558 */ struct _IF_COUNTED_STRING_LH* ifL2NetworkInfo;
  /* 0x055c */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
  /* 0x0560 */ struct NDIS_REFCOUNT_HANDLE__* MpRefCountTracker;
  /* 0x0564 */ unsigned long InterlockedFlags;
  /* 0x0568 */ enum _NDIS_MINIPORT_EVENT LastMiniportFatalErrorReason;
  /* 0x0570 */ unsigned __int64 MiniportFatalErrorTimestamp[3];
  /* 0x0588 */ unsigned char MiniportFatalErrorTimestampIndex;
  /* 0x0589 */ unsigned char NetworkIdOverridden;
  /* 0x058a */ unsigned char IsWDFMiniportInterface;
  /* 0x058c */ struct _NDIS_PCW_DATA_BLOCK* PcwDataBlock;
} NDIS_IF_BLOCK, *PNDIS_IF_BLOCK; /* size: 0x0590 */


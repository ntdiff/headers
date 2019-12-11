typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _IF_COUNTED_STRING_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ wchar_t String[257];
} IF_COUNTED_STRING_LH, *PIF_COUNTED_STRING_LH; /* size: 0x0204 */

typedef enum _NDIS_NIC_SWITCH_VPORT_INTERRUPT_MODERATION
{
  NdisNicSwitchVPortInterruptModerationUndefined = 0,
  NdisNicSwitchVPortInterruptModerationAdaptive = 1,
  NdisNicSwitchVPortInterruptModerationOff = 2,
  NdisNicSwitchVPortInterruptModerationLow = 100,
  NdisNicSwitchVPortInterruptModerationMedium = 200,
  NdisNicSwitchVPortInterruptModerationHigh = 300,
} NDIS_NIC_SWITCH_VPORT_INTERRUPT_MODERATION, *PNDIS_NIC_SWITCH_VPORT_INTERRUPT_MODERATION;

typedef enum _NDIS_NIC_SWITCH_VPORT_STATE
{
  NdisNicSwitchVPortStateUndefined = 0,
  NdisNicSwitchVPortStateActivated = 1,
  NdisNicSwitchVPortStateDeactivated = 2,
  NdisNicSwitchVPortStateMaximum = 3,
} NDIS_NIC_SWITCH_VPORT_STATE, *PNDIS_NIC_SWITCH_VPORT_STATE;

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef struct _NDIS_NDK_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long MaxQpCount;
  /* 0x000c */ unsigned long MaxCqCount;
  /* 0x0010 */ unsigned long MaxMrCount;
  /* 0x0014 */ unsigned long MaxPdCount;
  /* 0x0018 */ unsigned long MaxInboundReadLimit;
  /* 0x001c */ unsigned long MaxOutboundReadLimit;
  /* 0x0020 */ unsigned long MaxMwCount;
  /* 0x0024 */ unsigned long MaxSrqCount;
  /* 0x0028 */ unsigned __int64 MissingCounterMask;
  /* 0x0030 */ struct _NDK_ADAPTER_INFO* NdkInfo;
  /* 0x0034 */ long __PADDING__[1];
} NDIS_NDK_CAPABILITIES, *PNDIS_NDK_CAPABILITIES; /* size: 0x0038 */

typedef struct _NDIS_NDK_REQUEST_PARAMETERS
{
  /* 0x0000 */ unsigned char RdmaRequested;
  /* 0x0004 */ unsigned int SwitchPortId;
  /* 0x0008 */ unsigned long IfIndex;
  /* 0x000c */ unsigned char MacAddress[32];
  /* 0x002c */ unsigned int VlanId;
  /* 0x0030 */ struct _NDIS_NDK_CAPABILITIES NdkReserved;
} NDIS_NDK_REQUEST_PARAMETERS, *PNDIS_NDK_REQUEST_PARAMETERS; /* size: 0x0068 */

typedef struct _NDIS_NDK_RESPONSE_PARAMETERS
{
  /* 0x0000 */ unsigned char CapabilitiesAvailable;
  /* 0x0008 */ struct _NDIS_NDK_CAPABILITIES ReceivedCapabilities;
} NDIS_NDK_RESPONSE_PARAMETERS, *PNDIS_NDK_RESPONSE_PARAMETERS; /* size: 0x0040 */

typedef struct _NDIS_NDK_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_NDK_REQUEST_PARAMETERS NdkRequest;
  /* 0x0068 */ struct _NDIS_NDK_RESPONSE_PARAMETERS NdkResponse;
} NDIS_NDK_PARAMETERS, *PNDIS_NDK_PARAMETERS; /* size: 0x00a8 */

typedef struct _NDIS_NIC_SWITCH_VPORT_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long SwitchId;
  /* 0x000c */ unsigned long VPortId;
  /* 0x0010 */ struct _IF_COUNTED_STRING_LH VPortName;
  /* 0x0214 */ unsigned short AttachedFunctionId;
  /* 0x0218 */ unsigned long NumQueuePairs;
  /* 0x021c */ enum _NDIS_NIC_SWITCH_VPORT_INTERRUPT_MODERATION InterruptModeration;
  /* 0x0220 */ enum _NDIS_NIC_SWITCH_VPORT_STATE VPortState;
  /* 0x0224 */ struct _GROUP_AFFINITY ProcessorAffinity;
  /* 0x0230 */ unsigned long LookaheadSize;
  /* 0x0238 */ struct _NDIS_NDK_PARAMETERS NdkParams;
  /* 0x02e0 */ unsigned long QosSqId;
  /* 0x02e4 */ long __PADDING__[1];
} NDIS_NIC_SWITCH_VPORT_PARAMETERS, *PNDIS_NIC_SWITCH_VPORT_PARAMETERS; /* size: 0x02e8 */

typedef struct _NDIS_VPORT_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY AdapterLink;
  /* 0x0008 */ struct _LIST_ENTRY OpenLink;
  /* 0x0010 */ struct _LIST_ENTRY SwitchLink;
  /* 0x0018 */ struct _LIST_ENTRY FunctionLink;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0028 */ struct _NDIS_OPEN_BLOCK* Open;
  /* 0x002c */ struct _NDIS_NIC_SWITCH_BLOCK* NicSwitch;
  /* 0x0030 */ void* AttachedFunction;
  /* 0x0034 */ long Reference;
  /* 0x0038 */ struct _NDIS_NIC_SWITCH_VPORT_PARAMETERS VPortParams;
  /* 0x0320 */ unsigned long NumFilters;
  /* 0x0324 */ struct _LIST_ENTRY FilterList;
  /* 0x032c */ struct _NDIS_MINIPORT_RSS_PARAMETERS_CACHE* RssParametersBuffer;
  /* 0x0330 */ struct _NDIS_RECEIVE_SCALE_PARAMETERS* CombinedNdisRSSParameters;
  /* 0x0334 */ long __PADDING__[1];
} NDIS_VPORT_BLOCK, *PNDIS_VPORT_BLOCK; /* size: 0x0338 */


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
} NDIS_NIC_SWITCH_VPORT_PARAMETERS, *PNDIS_NIC_SWITCH_VPORT_PARAMETERS; /* size: 0x0234 */


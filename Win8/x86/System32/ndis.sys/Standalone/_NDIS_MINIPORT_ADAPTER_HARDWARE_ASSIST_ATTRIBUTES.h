typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_HD_SPLIT_ATTRIBUTES* HDSplitAttributes;
  /* 0x0008 */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* HardwareReceiveFilterCapabilities;
  /* 0x000c */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* CurrentReceiveFilterCapabilities;
  /* 0x0010 */ struct _NDIS_NIC_SWITCH_CAPABILITIES* HardwareNicSwitchCapabilities;
  /* 0x0014 */ struct _NDIS_NIC_SWITCH_CAPABILITIES* CurrentNicSwitchCapabilities;
  /* 0x0018 */ struct _NDIS_SRIOV_CAPABILITIES* HardwareSriovCapabilities;
  /* 0x001c */ struct _NDIS_SRIOV_CAPABILITIES* CurrentSriovCapabilities;
  /* 0x0020 */ struct _NDIS_QOS_CAPABILITIES* HardwareQosCapabilities;
  /* 0x0024 */ struct _NDIS_QOS_CAPABILITIES* CurrentQosCapabilities;
} NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES, *PNDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES; /* size: 0x0028 */


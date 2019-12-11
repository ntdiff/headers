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

typedef enum _NDIS_NIC_SWITCH_TYPE
{
  NdisNicSwitchTypeUnspecified = 0,
  NdisNicSwitchTypeExternal = 1,
  NdisNicSwitchTypeMax = 2,
} NDIS_NIC_SWITCH_TYPE, *PNDIS_NIC_SWITCH_TYPE;

typedef struct _IF_COUNTED_STRING_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ wchar_t String[257];
} IF_COUNTED_STRING_LH, *PIF_COUNTED_STRING_LH; /* size: 0x0204 */

typedef struct _NDIS_NIC_SWITCH_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_NIC_SWITCH_TYPE SwitchType;
  /* 0x000c */ unsigned long SwitchId;
  /* 0x0010 */ struct _IF_COUNTED_STRING_LH SwitchFriendlyName;
  /* 0x0214 */ unsigned long NumVFs;
  /* 0x0218 */ unsigned long NdisReserved1;
  /* 0x021c */ unsigned long NdisReserved2;
  /* 0x0220 */ unsigned long NdisReserved3;
} NDIS_NIC_SWITCH_PARAMETERS, *PNDIS_NIC_SWITCH_PARAMETERS; /* size: 0x0224 */

typedef struct _NDIS_NIC_SWITCH_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY AdapterLink;
  /* 0x0008 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x000c */ struct _NDIS_OPEN_BLOCK* Open;
  /* 0x0010 */ long Reference;
  /* 0x0014 */ unsigned long SwitchId;
  /* 0x0018 */ struct _NDIS_PF_BLOCK* PFBlock;
  /* 0x001c */ unsigned long NumActiveVPorts;
  /* 0x0020 */ struct _LIST_ENTRY VPortList;
  /* 0x0028 */ unsigned long NumAllocatedVFs;
  /* 0x002c */ struct _LIST_ENTRY VFList;
  /* 0x0034 */ unsigned long NonDefaultQueuePairsInUse;
  /* 0x0038 */ struct _NDIS_NIC_SWITCH_PARAMETERS SwitchParameters;
  /* 0x025c */ unsigned long NumActiveDefaultVPortMacAddresses;
  /* 0x0260 */ unsigned long NumActiveNonDefaultVPortMacAddresses;
  /* 0x0264 */ unsigned long NumActiveDefaultVPortVlanIds;
  /* 0x0268 */ unsigned long NumActiveNonDefaultVPortVlanIds;
} NDIS_NIC_SWITCH_BLOCK, *PNDIS_NIC_SWITCH_BLOCK; /* size: 0x026c */


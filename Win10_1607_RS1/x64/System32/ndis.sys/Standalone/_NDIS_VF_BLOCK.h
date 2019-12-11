typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _NDIS_NIC_SWITCH_VF_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long SwitchId;
  /* 0x000c */ struct _IF_COUNTED_STRING_LH VMName;
  /* 0x0210 */ struct _IF_COUNTED_STRING_LH VMFriendlyName;
  /* 0x0414 */ struct _IF_COUNTED_STRING_LH NicName;
  /* 0x0618 */ unsigned short MacAddressLength;
  /* 0x061a */ unsigned char PermanentMacAddress[32];
  /* 0x063a */ unsigned char CurrentMacAddress[32];
  /* 0x065a */ unsigned short VFId;
  /* 0x065c */ unsigned long RequestorId;
} NDIS_NIC_SWITCH_VF_PARAMETERS, *PNDIS_NIC_SWITCH_VF_PARAMETERS; /* size: 0x0660 */

typedef struct _NDIS_VF_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY AdapterLink;
  /* 0x0010 */ struct _LIST_ENTRY OpenLink;
  /* 0x0020 */ struct _LIST_ENTRY SwitchLink;
  /* 0x0030 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0038 */ struct _NDIS_OPEN_BLOCK* Open;
  /* 0x0040 */ struct _NDIS_NIC_SWITCH_BLOCK* NicSwitch;
  /* 0x0048 */ long Reference;
  /* 0x004c */ unsigned long NumAttachedVPorts;
  /* 0x0050 */ struct _LIST_ENTRY AttachedVPortList;
  /* 0x0060 */ struct _NDIS_NIC_SWITCH_VF_PARAMETERS VFParameters;
} NDIS_VF_BLOCK, *PNDIS_VF_BLOCK; /* size: 0x06c0 */


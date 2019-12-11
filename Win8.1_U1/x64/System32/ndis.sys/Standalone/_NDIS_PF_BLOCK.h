typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NDIS_PF_BLOCK
{
  /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0008 */ struct _NDIS_OPEN_BLOCK* Open;
  /* 0x0010 */ struct _NDIS_NIC_SWITCH_BLOCK* NicSwitch;
  /* 0x0018 */ long Reference;
  /* 0x001c */ unsigned long NumAttachedVPorts;
  /* 0x0020 */ struct _LIST_ENTRY AttachedVPortList;
} NDIS_PF_BLOCK, *PNDIS_PF_BLOCK; /* size: 0x0030 */


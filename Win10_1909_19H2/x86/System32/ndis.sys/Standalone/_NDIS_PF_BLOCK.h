typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_PF_BLOCK
{
  /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0004 */ struct _NDIS_OPEN_BLOCK* Open;
  /* 0x0008 */ struct _NDIS_NIC_SWITCH_BLOCK* NicSwitch;
  /* 0x000c */ long Reference;
  /* 0x0010 */ unsigned long NumAttachedVPorts;
  /* 0x0014 */ struct _LIST_ENTRY AttachedVPortList;
} NDIS_PF_BLOCK, *PNDIS_PF_BLOCK; /* size: 0x001c */


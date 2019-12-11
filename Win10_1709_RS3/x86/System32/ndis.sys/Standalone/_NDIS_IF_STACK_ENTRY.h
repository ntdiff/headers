typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_IF_STACK_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ unsigned long HigherLayerIfIndex;
  /* 0x000c */ unsigned long LowerLayerIfIndex;
  /* 0x0010 */ struct _NDIS_IF_BLOCK* HigherLayerIf;
  /* 0x0014 */ struct _NDIS_IF_BLOCK* LowerLayerIf;
} NDIS_IF_STACK_ENTRY, *PNDIS_IF_STACK_ENTRY; /* size: 0x0018 */


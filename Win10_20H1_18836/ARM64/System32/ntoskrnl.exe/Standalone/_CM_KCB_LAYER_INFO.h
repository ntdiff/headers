typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _CM_KCB_LAYER_INFO
{
  /* 0x0000 */ struct _LIST_ENTRY LayerListEntry;
  /* 0x0010 */ struct _CM_KEY_CONTROL_BLOCK* Kcb;
  /* 0x0018 */ struct _CM_KCB_LAYER_INFO* LowerLayer;
  /* 0x0020 */ struct _LIST_ENTRY UpperLayerListHead;
} CM_KCB_LAYER_INFO, *PCM_KCB_LAYER_INFO; /* size: 0x0030 */


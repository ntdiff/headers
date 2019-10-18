typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PI_RESOURCE_ARBITER_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY DeviceArbiterList;
  /* 0x0010 */ unsigned char ResourceType;
  /* 0x0018 */ struct _ARBITER_INTERFACE* ArbiterInterface;
  /* 0x0020 */ struct _DEVICE_NODE* DeviceNode;
  /* 0x0028 */ struct _LIST_ENTRY ResourceList;
  /* 0x0038 */ struct _LIST_ENTRY BestResourceList;
  /* 0x0048 */ struct _LIST_ENTRY BestConfig;
  /* 0x0058 */ struct _LIST_ENTRY ActiveArbiterList;
  /* 0x0068 */ unsigned char State;
  /* 0x0069 */ unsigned char ResourcesChanged;
  /* 0x006a */ char __PADDING__[6];
} PI_RESOURCE_ARBITER_ENTRY, *PPI_RESOURCE_ARBITER_ENTRY; /* size: 0x0070 */


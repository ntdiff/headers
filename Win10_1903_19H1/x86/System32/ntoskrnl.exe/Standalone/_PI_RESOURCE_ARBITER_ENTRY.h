typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PI_RESOURCE_ARBITER_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY DeviceArbiterList;
  /* 0x0008 */ unsigned char ResourceType;
  /* 0x000c */ struct _ARBITER_INTERFACE* ArbiterInterface;
  /* 0x0010 */ struct _DEVICE_NODE* DeviceNode;
  /* 0x0014 */ struct _LIST_ENTRY ResourceList;
  /* 0x001c */ struct _LIST_ENTRY BestResourceList;
  /* 0x0024 */ struct _LIST_ENTRY BestConfig;
  /* 0x002c */ struct _LIST_ENTRY ActiveArbiterList;
  /* 0x0034 */ unsigned char State;
  /* 0x0035 */ unsigned char ResourcesChanged;
  /* 0x0036 */ char __PADDING__[2];
} PI_RESOURCE_ARBITER_ENTRY, *PPI_RESOURCE_ARBITER_ENTRY; /* size: 0x0038 */


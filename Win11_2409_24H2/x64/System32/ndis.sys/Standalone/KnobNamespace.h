typedef enum _CONFIG_KNOB_NAMESPACE_TYPE
{
  ConfigKnobNamespaceNdisGlobal = 0,
  ConfigKnobNamespaceNetworkInterface = 1,
  ConfigKnobNamespaceNetworkInterfaceProfile = 2,
  ConfigKnobNamespaceCpuExecutionContext = 3,
} CONFIG_KNOB_NAMESPACE_TYPE, *PCONFIG_KNOB_NAMESPACE_TYPE;

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _CONFIG_KNOB_NAMESPACE
{
  /* 0x0000 */ enum _CONFIG_KNOB_NAMESPACE_TYPE NamespaceType;
  /* 0x0004 */ struct _GUID ObjectId;
} CONFIG_KNOB_NAMESPACE, *PCONFIG_KNOB_NAMESPACE; /* size: 0x0014 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

class KPushLock
{
}; /* size: 0x0008 */

class KnobNamespace
{
  /* 0x0000 */ struct _DRIVER_OBJECT* m_driverObject;
  /* 0x0008 */ struct _CONFIG_KNOB_NAMESPACE m_id;
  /* 0x0020 */ struct _LIST_ENTRY m_globalLinkage;
  /* 0x0030 */ struct _LIST_ENTRY m_collectionList;
  /* 0x0040 */ class KPushLock m_lock;
}; /* size: 0x0048 */


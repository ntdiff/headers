typedef struct _KSFILTER_DESCRIPTOR
{
  /* 0x0000 */ const struct _KSFILTER_DISPATCH* Dispatch;
  /* 0x0004 */ const struct KSAUTOMATION_TABLE_* AutomationTable;
  /* 0x0008 */ unsigned long Version;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ const struct _GUID* ReferenceGuid;
  /* 0x0014 */ unsigned long PinDescriptorsCount;
  /* 0x0018 */ unsigned long PinDescriptorSize;
  /* 0x001c */ const struct _KSPIN_DESCRIPTOR_EX* PinDescriptors;
  /* 0x0020 */ unsigned long CategoriesCount;
  /* 0x0024 */ const struct _GUID* Categories;
  /* 0x0028 */ unsigned long NodeDescriptorsCount;
  /* 0x002c */ unsigned long NodeDescriptorSize;
  /* 0x0030 */ const struct _KSNODE_DESCRIPTOR* NodeDescriptors;
  /* 0x0034 */ unsigned long ConnectionsCount;
  /* 0x0038 */ const struct KSTOPOLOGY_CONNECTION* Connections;
  /* 0x003c */ const struct KSCOMPONENTID* ComponentId;
} KSFILTER_DESCRIPTOR, *PKSFILTER_DESCRIPTOR; /* size: 0x0040 */


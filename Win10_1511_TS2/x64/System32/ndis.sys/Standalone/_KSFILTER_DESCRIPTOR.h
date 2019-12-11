typedef struct _KSFILTER_DESCRIPTOR
{
  /* 0x0000 */ const struct _KSFILTER_DISPATCH* Dispatch;
  /* 0x0008 */ const struct KSAUTOMATION_TABLE_* AutomationTable;
  /* 0x0010 */ unsigned long Version;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ const struct _GUID* ReferenceGuid;
  /* 0x0020 */ unsigned long PinDescriptorsCount;
  /* 0x0024 */ unsigned long PinDescriptorSize;
  /* 0x0028 */ const struct _KSPIN_DESCRIPTOR_EX* PinDescriptors;
  /* 0x0030 */ unsigned long CategoriesCount;
  /* 0x0038 */ const struct _GUID* Categories;
  /* 0x0040 */ unsigned long NodeDescriptorsCount;
  /* 0x0044 */ unsigned long NodeDescriptorSize;
  /* 0x0048 */ const struct _KSNODE_DESCRIPTOR* NodeDescriptors;
  /* 0x0050 */ unsigned long ConnectionsCount;
  /* 0x0058 */ const struct KSTOPOLOGY_CONNECTION* Connections;
  /* 0x0060 */ const struct KSCOMPONENTID* ComponentId;
} KSFILTER_DESCRIPTOR, *PKSFILTER_DESCRIPTOR; /* size: 0x0068 */


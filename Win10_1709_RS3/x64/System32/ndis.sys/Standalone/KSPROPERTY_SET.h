struct KSPROPERTY_SET
{
  /* 0x0000 */ const struct _GUID* Set;
  /* 0x0008 */ unsigned long PropertiesCount;
  /* 0x0010 */ const struct KSPROPERTY_ITEM* PropertyItem;
  /* 0x0018 */ unsigned long FastIoCount;
  /* 0x0020 */ const struct KSFASTPROPERTY_ITEM* FastIoTable;
}; /* size: 0x0028 */


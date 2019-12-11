struct KSPROPERTY_SET
{
  /* 0x0000 */ const struct _GUID* Set;
  /* 0x0004 */ unsigned long PropertiesCount;
  /* 0x0008 */ const struct KSPROPERTY_ITEM* PropertyItem;
  /* 0x000c */ unsigned long FastIoCount;
  /* 0x0010 */ const struct KSFASTPROPERTY_ITEM* FastIoTable;
}; /* size: 0x0014 */


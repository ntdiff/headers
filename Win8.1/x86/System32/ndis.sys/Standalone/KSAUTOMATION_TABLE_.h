struct KSAUTOMATION_TABLE_
{
  /* 0x0000 */ unsigned long PropertySetsCount;
  /* 0x0004 */ unsigned long PropertyItemSize;
  /* 0x0008 */ const struct KSPROPERTY_SET* PropertySets;
  /* 0x000c */ unsigned long MethodSetsCount;
  /* 0x0010 */ unsigned long MethodItemSize;
  /* 0x0014 */ const struct KSMETHOD_SET* MethodSets;
  /* 0x0018 */ unsigned long EventSetsCount;
  /* 0x001c */ unsigned long EventItemSize;
  /* 0x0020 */ const struct KSEVENT_SET* EventSets;
  /* 0x0024 */ void* Alignment;
}; /* size: 0x0028 */


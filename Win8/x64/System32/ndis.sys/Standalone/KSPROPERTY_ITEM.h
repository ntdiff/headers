struct KSPROPERTY_ITEM
{
  /* 0x0000 */ unsigned long PropertyId;
  union
  {
    /* 0x0008 */ void* GetPropertyHandler /* function */;
    /* 0x0008 */ unsigned char GetSupported;
  }; /* size: 0x0008 */
  /* 0x0010 */ unsigned long MinProperty;
  /* 0x0014 */ unsigned long MinData;
  union
  {
    /* 0x0018 */ void* SetPropertyHandler /* function */;
    /* 0x0018 */ unsigned char SetSupported;
  }; /* size: 0x0008 */
  /* 0x0020 */ const struct KSPROPERTY_VALUES* Values;
  /* 0x0028 */ unsigned long RelationsCount;
  /* 0x0030 */ const struct KSIDENTIFIER* Relations;
  /* 0x0038 */ void* SupportHandler /* function */;
  /* 0x0040 */ unsigned long SerializedSize;
  /* 0x0044 */ long __PADDING__[1];
}; /* size: 0x0048 */


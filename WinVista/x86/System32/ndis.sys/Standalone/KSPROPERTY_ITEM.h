struct KSPROPERTY_ITEM
{
  /* 0x0000 */ unsigned long PropertyId;
  union
  {
    /* 0x0004 */ void* GetPropertyHandler /* function */;
    /* 0x0004 */ unsigned char GetSupported;
  }; /* size: 0x0004 */
  /* 0x0008 */ unsigned long MinProperty;
  /* 0x000c */ unsigned long MinData;
  union
  {
    /* 0x0010 */ void* SetPropertyHandler /* function */;
    /* 0x0010 */ unsigned char SetSupported;
  }; /* size: 0x0004 */
  /* 0x0014 */ const struct KSPROPERTY_VALUES* Values;
  /* 0x0018 */ unsigned long RelationsCount;
  /* 0x001c */ const struct KSIDENTIFIER* Relations;
  /* 0x0020 */ void* SupportHandler /* function */;
  /* 0x0024 */ unsigned long SerializedSize;
}; /* size: 0x0028 */


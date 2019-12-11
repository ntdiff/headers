struct KSFASTPROPERTY_ITEM
{
  /* 0x0000 */ unsigned long PropertyId;
  union
  {
    /* 0x0008 */ void* GetPropertyHandler /* function */;
    /* 0x0008 */ unsigned char GetSupported;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0010 */ void* SetPropertyHandler /* function */;
    /* 0x0010 */ unsigned char SetSupported;
  }; /* size: 0x0008 */
  /* 0x0018 */ unsigned long Reserved;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */


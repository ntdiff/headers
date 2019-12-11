struct KSFASTPROPERTY_ITEM
{
  /* 0x0000 */ unsigned long PropertyId;
  union
  {
    /* 0x0004 */ void* GetPropertyHandler /* function */;
    /* 0x0004 */ unsigned char GetSupported;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0008 */ void* SetPropertyHandler /* function */;
    /* 0x0008 */ unsigned char SetSupported;
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned long Reserved;
}; /* size: 0x0010 */


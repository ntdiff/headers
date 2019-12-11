struct KSMETHOD_SET
{
  /* 0x0000 */ const struct _GUID* Set;
  /* 0x0004 */ unsigned long MethodsCount;
  /* 0x0008 */ const struct KSMETHOD_ITEM* MethodItem;
  /* 0x000c */ unsigned long FastIoCount;
  /* 0x0010 */ const struct KSFASTMETHOD_ITEM* FastIoTable;
}; /* size: 0x0014 */


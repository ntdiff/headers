typedef struct _RELATION_LIST
{
  /* 0x0000 */ struct _DEVICE_OBJECT_LIST* DeviceObjectList;
  /* 0x0008 */ unsigned char Sorted;
  /* 0x0009 */ char __PADDING__[7];
} RELATION_LIST, *PRELATION_LIST; /* size: 0x0010 */


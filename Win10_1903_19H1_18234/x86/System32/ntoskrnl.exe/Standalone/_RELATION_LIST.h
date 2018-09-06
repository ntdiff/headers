typedef struct _RELATION_LIST
{
  /* 0x0000 */ struct _DEVICE_OBJECT_LIST* DeviceObjectList;
  /* 0x0004 */ unsigned char Sorted;
  /* 0x0005 */ char __PADDING__[3];
} RELATION_LIST, *PRELATION_LIST; /* size: 0x0008 */


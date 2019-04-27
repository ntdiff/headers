typedef struct _DEVICE_RELATIONS
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ struct _DEVICE_OBJECT* Objects[1];
} DEVICE_RELATIONS, *PDEVICE_RELATIONS; /* size: 0x0008 */


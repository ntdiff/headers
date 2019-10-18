typedef struct _PNP_ASSIGN_RESOURCES_CONTEXT
{
  /* 0x0000 */ unsigned long IncludeFailedDevices;
  /* 0x0004 */ unsigned long DeviceCount;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceList[1];
} PNP_ASSIGN_RESOURCES_CONTEXT, *PPNP_ASSIGN_RESOURCES_CONTEXT; /* size: 0x000c */


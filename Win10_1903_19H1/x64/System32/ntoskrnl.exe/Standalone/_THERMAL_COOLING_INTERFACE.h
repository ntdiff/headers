typedef struct _THERMAL_COOLING_INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ void* InterfaceReference /* function */;
  /* 0x0018 */ void* InterfaceDereference /* function */;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0028 */ void* ActiveCooling /* function */;
  /* 0x0030 */ void* PassiveCooling /* function */;
} THERMAL_COOLING_INTERFACE, *PTHERMAL_COOLING_INTERFACE; /* size: 0x0038 */


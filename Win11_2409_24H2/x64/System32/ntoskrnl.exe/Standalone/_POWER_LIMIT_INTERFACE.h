typedef struct _POWER_LIMIT_INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ void* InterfaceReference /* function */;
  /* 0x0018 */ void* InterfaceDereference /* function */;
  /* 0x0020 */ unsigned long DomainCount;
  /* 0x0028 */ void* QueryAttributes /* function */;
  /* 0x0030 */ void* SetPowerLimit /* function */;
  /* 0x0038 */ void* QueryPowerLimit /* function */;
} POWER_LIMIT_INTERFACE, *PPOWER_LIMIT_INTERFACE; /* size: 0x0040 */


struct DOCK_INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ void* InterfaceReference /* function */;
  /* 0x0018 */ void* InterfaceDereference /* function */;
  /* 0x0020 */ void* ProfileDepartureSetMode /* function */;
  /* 0x0028 */ void* ProfileDepartureUpdate /* function */;
}; /* size: 0x0030 */


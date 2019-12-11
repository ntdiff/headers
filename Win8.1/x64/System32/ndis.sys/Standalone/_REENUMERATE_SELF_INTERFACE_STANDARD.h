typedef struct _REENUMERATE_SELF_INTERFACE_STANDARD
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ void* InterfaceReference /* function */;
  /* 0x0018 */ void* InterfaceDereference /* function */;
  /* 0x0020 */ void* SurpriseRemoveAndReenumerateSelf /* function */;
} REENUMERATE_SELF_INTERFACE_STANDARD, *PREENUMERATE_SELF_INTERFACE_STANDARD; /* size: 0x0028 */


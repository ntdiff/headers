typedef struct _ARBITER_INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ void* InterfaceReference /* function */;
  /* 0x0018 */ void* InterfaceDereference /* function */;
  /* 0x0020 */ void* ArbiterHandler /* function */;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ long __PADDING__[1];
} ARBITER_INTERFACE, *PARBITER_INTERFACE; /* size: 0x0030 */


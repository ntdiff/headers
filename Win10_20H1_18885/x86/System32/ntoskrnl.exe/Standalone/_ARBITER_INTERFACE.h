typedef struct _ARBITER_INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0004 */ void* Context;
  /* 0x0008 */ void* InterfaceReference /* function */;
  /* 0x000c */ void* InterfaceDereference /* function */;
  /* 0x0010 */ void* ArbiterHandler /* function */;
  /* 0x0014 */ unsigned long Flags;
} ARBITER_INTERFACE, *PARBITER_INTERFACE; /* size: 0x0018 */


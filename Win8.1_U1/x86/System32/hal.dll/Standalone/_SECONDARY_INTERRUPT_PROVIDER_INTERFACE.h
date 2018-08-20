typedef struct _SECONDARY_INTERRUPT_PROVIDER_INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0004 */ void* Context;
  /* 0x0008 */ unsigned long GsivBase;
  /* 0x000c */ unsigned short GsivSize;
  /* 0x0010 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0014 */ void* Reserved1;
  /* 0x0018 */ void* Reserved2;
  /* 0x001c */ void* Reserved3;
  /* 0x0020 */ void* Reserved4;
  /* 0x0024 */ void* Reserved5;
  /* 0x0028 */ void* Reserved6;
  /* 0x002c */ void* Reserved7;
} SECONDARY_INTERRUPT_PROVIDER_INTERFACE, *PSECONDARY_INTERRUPT_PROVIDER_INTERFACE; /* size: 0x0030 */


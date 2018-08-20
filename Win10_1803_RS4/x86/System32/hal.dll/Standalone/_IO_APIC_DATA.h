typedef struct _IO_APIC_DATA
{
  /* 0x0000 */ unsigned __int64 PhysicalAddress;
  /* 0x0008 */ unsigned long Identifier;
  /* 0x000c */ struct _IO_APIC_REGISTERS* BaseAddress;
  /* 0x0010 */ unsigned char Version;
  /* 0x0011 */ unsigned char PinCount;
  /* 0x0012 */ unsigned char Initialized;
  /* 0x0013 */ unsigned char InitializedFirstLocalUnit;
  /* 0x0014 */ unsigned long GsiBase;
  /* 0x0018 */ unsigned long CmciRegister;
  /* 0x001c */ unsigned char IoUnitMissing;
  /* 0x001d */ char __PADDING__[3];
} IO_APIC_DATA, *PIO_APIC_DATA; /* size: 0x0020 */


typedef struct _IO_APIC_DATA
{
  /* 0x0000 */ unsigned __int64 PhysicalAddress;
  /* 0x0008 */ unsigned long Identifier;
  /* 0x0010 */ struct _IO_APIC_REGISTERS* BaseAddress;
  /* 0x0018 */ unsigned char Version;
  /* 0x0019 */ unsigned char PinCount;
  /* 0x001a */ unsigned char Initialized;
  /* 0x001b */ unsigned char InitializedFirstLocalUnit;
  /* 0x001c */ unsigned long GsiBase;
  /* 0x0020 */ unsigned long CmciRegister;
  /* 0x0024 */ unsigned long DeferredErrorRegister;
  /* 0x0028 */ unsigned char IoUnitMissing;
  /* 0x0029 */ char __PADDING__[7];
} IO_APIC_DATA, *PIO_APIC_DATA; /* size: 0x0030 */


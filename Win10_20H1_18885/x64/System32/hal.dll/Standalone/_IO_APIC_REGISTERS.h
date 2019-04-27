typedef struct _IO_APIC_REGISTERS
{
  /* 0x0000 */ volatile unsigned long RegisterIndex;
  /* 0x0004 */ volatile unsigned long Reserved1[3];
  /* 0x0010 */ volatile unsigned long RegisterValue;
  /* 0x0014 */ volatile unsigned long Reserved2[11];
  /* 0x0040 */ volatile unsigned long EndOfInterrupt;
} IO_APIC_REGISTERS, *PIO_APIC_REGISTERS; /* size: 0x0044 */


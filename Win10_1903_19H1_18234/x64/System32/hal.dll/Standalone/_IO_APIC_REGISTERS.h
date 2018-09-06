typedef struct _IO_APIC_REGISTERS
{
  /* 0x0000 */ volatile unsigned long RegisterIndex;
  /* 0x0004 */ volatile unsigned long Reserved1[3];
  /* 0x0010 */ volatile unsigned long RegisterValue;
} IO_APIC_REGISTERS, *PIO_APIC_REGISTERS; /* size: 0x0014 */


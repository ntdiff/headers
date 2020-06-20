typedef struct _PROCLOCALX2APIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned long APICID;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long ACPIProcessorID;
} PROCLOCALX2APIC, *PPROCLOCALX2APIC; /* size: 0x0010 */


typedef struct _LOCAL_X2APIC_NMISOURCE
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned long ProcessorID;
  /* 0x0008 */ unsigned char LINTIN;
  /* 0x0009 */ unsigned char Reserved[3];
} LOCAL_X2APIC_NMISOURCE, *PLOCAL_X2APIC_NMISOURCE; /* size: 0x000c */


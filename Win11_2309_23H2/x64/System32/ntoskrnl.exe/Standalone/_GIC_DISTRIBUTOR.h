typedef struct _GIC_DISTRIBUTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Reserved1;
  /* 0x0004 */ unsigned long Identifier;
  /* 0x0008 */ unsigned __int64 ControllerPhysicalAddress;
  /* 0x0010 */ unsigned long GsivBase;
  /* 0x0014 */ unsigned char Version;
  /* 0x0015 */ unsigned char Reserved[3];
} GIC_DISTRIBUTOR, *PGIC_DISTRIBUTOR; /* size: 0x0018 */


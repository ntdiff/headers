typedef struct _GIC_MSIFRAME_ENTRY
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Reserved1;
  /* 0x0004 */ unsigned long Identifier;
  /* 0x0008 */ unsigned __int64 PhysicalAddress;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned short SpiCount;
  /* 0x0016 */ unsigned short SpiBase;
} GIC_MSIFRAME_ENTRY, *PGIC_MSIFRAME_ENTRY; /* size: 0x0018 */


typedef struct _GIC_ITS
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Reserved1;
  /* 0x0004 */ unsigned long Identifier;
  /* 0x0008 */ unsigned __int64 PhysicalAddress;
  /* 0x0010 */ unsigned long Reserved2;
} GIC_ITS, *PGIC_ITS; /* size: 0x0014 */


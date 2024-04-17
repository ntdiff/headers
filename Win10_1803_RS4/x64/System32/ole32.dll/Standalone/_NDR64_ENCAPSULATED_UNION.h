typedef struct _NDR64_ENCAPSULATED_UNION
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ unsigned char Flags;
  /* 0x0003 */ unsigned char SwitchType;
  /* 0x0004 */ unsigned int MemoryOffset;
  /* 0x0008 */ unsigned int MemorySize;
  /* 0x000c */ unsigned int Reserved;
} NDR64_ENCAPSULATED_UNION, *PNDR64_ENCAPSULATED_UNION; /* size: 0x0010 */


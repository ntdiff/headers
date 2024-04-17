typedef struct _NDR64_NON_ENCAPSULATED_UNION
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ unsigned char Flags;
  /* 0x0003 */ unsigned char SwitchType;
  /* 0x0004 */ unsigned int MemorySize;
  /* 0x0008 */ const void* Switch;
  /* 0x0010 */ unsigned int Reserved;
  /* 0x0014 */ long __PADDING__[1];
} NDR64_NON_ENCAPSULATED_UNION, *PNDR64_NON_ENCAPSULATED_UNION; /* size: 0x0018 */


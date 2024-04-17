typedef struct _NDR64_IID_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Flags;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0008 */ const void* IIDDescriptor;
} NDR64_IID_FORMAT, *PNDR64_IID_FORMAT; /* size: 0x0010 */


typedef struct _NDR64_SUPPLEMENT_HEADER
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char RealFormatCode;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0008 */ const void* RealType;
} NDR64_SUPPLEMENT_HEADER, *PNDR64_SUPPLEMENT_HEADER; /* size: 0x0010 */


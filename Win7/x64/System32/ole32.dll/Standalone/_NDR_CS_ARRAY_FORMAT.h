typedef struct _NDR_CS_ARRAY_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Reserved;
  /* 0x0002 */ unsigned short UserTypeSize;
  /* 0x0004 */ unsigned short CSRoutineIndex;
  /* 0x0006 */ unsigned short Reserved2;
  /* 0x0008 */ long DescriptionOffset;
} NDR_CS_ARRAY_FORMAT, *PNDR_CS_ARRAY_FORMAT; /* size: 0x000c */


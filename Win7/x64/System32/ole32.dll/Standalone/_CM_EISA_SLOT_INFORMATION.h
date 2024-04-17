typedef struct _CM_EISA_SLOT_INFORMATION
{
  /* 0x0000 */ unsigned char ReturnCode;
  /* 0x0001 */ unsigned char ReturnFlags;
  /* 0x0002 */ unsigned char MajorRevision;
  /* 0x0003 */ unsigned char MinorRevision;
  /* 0x0004 */ unsigned short Checksum;
  /* 0x0006 */ unsigned char NumberFunctions;
  /* 0x0007 */ unsigned char FunctionInformation;
  /* 0x0008 */ unsigned long CompressedId;
} CM_EISA_SLOT_INFORMATION, *PCM_EISA_SLOT_INFORMATION; /* size: 0x000c */


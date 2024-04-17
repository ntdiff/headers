typedef struct _REQUEST_OPLOCK_OUTPUT_BUFFER
{
  /* 0x0000 */ unsigned short StructureVersion;
  /* 0x0002 */ unsigned short StructureLength;
  /* 0x0004 */ unsigned long OriginalOplockLevel;
  /* 0x0008 */ unsigned long NewOplockLevel;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long AccessMode;
  /* 0x0014 */ unsigned short ShareMode;
  /* 0x0016 */ char __PADDING__[2];
} REQUEST_OPLOCK_OUTPUT_BUFFER, *PREQUEST_OPLOCK_OUTPUT_BUFFER; /* size: 0x0018 */


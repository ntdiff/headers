typedef struct _REQUEST_OPLOCK_INPUT_BUFFER
{
  /* 0x0000 */ unsigned short StructureVersion;
  /* 0x0002 */ unsigned short StructureLength;
  /* 0x0004 */ unsigned long RequestedOplockLevel;
  /* 0x0008 */ unsigned long Flags;
} REQUEST_OPLOCK_INPUT_BUFFER, *PREQUEST_OPLOCK_INPUT_BUFFER; /* size: 0x000c */


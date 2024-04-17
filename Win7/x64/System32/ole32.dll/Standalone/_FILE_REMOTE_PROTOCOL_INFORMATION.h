typedef struct _FILE_REMOTE_PROTOCOL_INFORMATION
{
  /* 0x0000 */ unsigned short StructureVersion;
  /* 0x0002 */ unsigned short StructureSize;
  /* 0x0004 */ unsigned long Protocol;
  /* 0x0008 */ unsigned short ProtocolMajorVersion;
  /* 0x000a */ unsigned short ProtocolMinorVersion;
  /* 0x000c */ unsigned short ProtocolRevision;
  /* 0x000e */ unsigned short Reserved;
  /* 0x0010 */ unsigned long Flags;
  struct
  {
    /* 0x0014 */ unsigned long Reserved[8];
  } /* size: 0x0020 */ GenericReserved;
  struct
  {
    /* 0x0034 */ unsigned long Reserved[16];
  } /* size: 0x0040 */ ProtocolSpecificReserved;
} FILE_REMOTE_PROTOCOL_INFORMATION, *PFILE_REMOTE_PROTOCOL_INFORMATION; /* size: 0x0074 */


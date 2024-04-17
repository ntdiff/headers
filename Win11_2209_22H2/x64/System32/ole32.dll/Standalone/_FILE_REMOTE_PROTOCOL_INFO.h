typedef struct _FILE_REMOTE_PROTOCOL_INFO
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
  union
  {
    union
    {
      struct
      {
        struct
        {
          /* 0x0034 */ unsigned long Capabilities;
        } /* size: 0x0004 */ Server;
        struct
        {
          /* 0x0038 */ unsigned long Capabilities;
          /* 0x003c */ unsigned long ShareFlags;
        } /* size: 0x0008 */ Share;
      } /* size: 0x000c */ Smb2;
      /* 0x0034 */ unsigned long Reserved[16];
    }; /* size: 0x0040 */
  } /* size: 0x0040 */ ProtocolSpecific;
} FILE_REMOTE_PROTOCOL_INFO, *PFILE_REMOTE_PROTOCOL_INFO; /* size: 0x0074 */


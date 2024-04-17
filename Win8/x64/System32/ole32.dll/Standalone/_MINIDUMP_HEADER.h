typedef struct _MINIDUMP_HEADER
{
  /* 0x0000 */ unsigned int Signature;
  /* 0x0004 */ unsigned int Version;
  /* 0x0008 */ unsigned int NumberOfStreams;
  /* 0x000c */ unsigned long StreamDirectoryRva;
  /* 0x0010 */ unsigned int CheckSum;
  union
  {
    /* 0x0014 */ unsigned int Reserved;
    /* 0x0014 */ unsigned int TimeDateStamp;
  }; /* size: 0x0004 */
  /* 0x0018 */ unsigned __int64 Flags;
} MINIDUMP_HEADER, *PMINIDUMP_HEADER; /* size: 0x0020 */


typedef struct _SCRUB_DATA_OUTPUT
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Status;
  /* 0x0010 */ unsigned __int64 ErrorFileOffset;
  /* 0x0018 */ unsigned __int64 ErrorLength;
  /* 0x0020 */ unsigned __int64 NumberOfBytesRepaired;
  /* 0x0028 */ unsigned __int64 NumberOfBytesFailed;
  /* 0x0030 */ unsigned __int64 InternalFileReference;
  /* 0x0038 */ unsigned short ResumeContextLength;
  /* 0x003a */ unsigned short ParityExtentDataOffset;
  /* 0x003c */ unsigned long Reserved[9];
  /* 0x0060 */ unsigned __int64 NumberOfMetadataBytesProcessed;
  /* 0x0068 */ unsigned __int64 NumberOfDataBytesProcessed;
  /* 0x0070 */ unsigned __int64 TotalNumberOfMetadataBytesInUse;
  /* 0x0078 */ unsigned __int64 TotalNumberOfDataBytesInUse;
  /* 0x0080 */ unsigned char ResumeContext[816];
} SCRUB_DATA_OUTPUT, *PSCRUB_DATA_OUTPUT; /* size: 0x03b0 */


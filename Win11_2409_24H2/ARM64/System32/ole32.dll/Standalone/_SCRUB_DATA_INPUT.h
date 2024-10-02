typedef struct _SCRUB_DATA_INPUT
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long MaximumIos;
  /* 0x000c */ unsigned long ObjectId[4];
  /* 0x0020 */ unsigned __int64 StartingByteOffset;
  /* 0x0028 */ unsigned __int64 ByteCount;
  /* 0x0030 */ unsigned long Reserved[36];
  /* 0x00c0 */ unsigned char ResumeContext[1040];
} SCRUB_DATA_INPUT, *PSCRUB_DATA_INPUT; /* size: 0x04d0 */


typedef struct _DEDUP_CHUNK_INFORMATION_HASH32
{
  /* 0x0000 */ unsigned long ChunkFlags;
  /* 0x0008 */ __int64 ChunkOffsetInFile;
  /* 0x0010 */ __int64 ChunkSize;
  /* 0x0018 */ unsigned char HashVal[32];
} DEDUP_CHUNK_INFORMATION_HASH32, *PDEDUP_CHUNK_INFORMATION_HASH32; /* size: 0x0038 */


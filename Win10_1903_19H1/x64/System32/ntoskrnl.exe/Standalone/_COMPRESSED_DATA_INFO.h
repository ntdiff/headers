typedef struct _COMPRESSED_DATA_INFO
{
  /* 0x0000 */ unsigned short CompressionFormatAndEngine;
  /* 0x0002 */ unsigned char CompressionUnitShift;
  /* 0x0003 */ unsigned char ChunkShift;
  /* 0x0004 */ unsigned char ClusterShift;
  /* 0x0005 */ unsigned char Reserved;
  /* 0x0006 */ unsigned short NumberOfChunks;
  /* 0x0008 */ unsigned long CompressedChunkSizes[1];
} COMPRESSED_DATA_INFO, *PCOMPRESSED_DATA_INFO; /* size: 0x000c */


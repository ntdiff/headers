typedef struct _ENCRYPTED_DATA_INFO
{
  /* 0x0000 */ unsigned __int64 StartingFileOffset;
  /* 0x0008 */ unsigned long OutputBufferOffset;
  /* 0x000c */ unsigned long BytesWithinFileSize;
  /* 0x0010 */ unsigned long BytesWithinValidDataLength;
  /* 0x0014 */ unsigned short CompressionFormat;
  /* 0x0016 */ unsigned char DataUnitShift;
  /* 0x0017 */ unsigned char ChunkShift;
  /* 0x0018 */ unsigned char ClusterShift;
  /* 0x0019 */ unsigned char EncryptionFormat;
  /* 0x001a */ unsigned short NumberOfDataBlocks;
  /* 0x001c */ unsigned long DataBlockSize[1];
} ENCRYPTED_DATA_INFO, *PENCRYPTED_DATA_INFO; /* size: 0x0020 */


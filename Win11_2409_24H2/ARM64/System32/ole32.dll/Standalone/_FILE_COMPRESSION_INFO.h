typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _FILE_COMPRESSION_INFO
{
  /* 0x0000 */ union _LARGE_INTEGER CompressedFileSize;
  /* 0x0008 */ unsigned short CompressionFormat;
  /* 0x000a */ unsigned char CompressionUnitShift;
  /* 0x000b */ unsigned char ChunkShift;
  /* 0x000c */ unsigned char ClusterShift;
  /* 0x000d */ unsigned char Reserved[3];
} FILE_COMPRESSION_INFO, *PFILE_COMPRESSION_INFO; /* size: 0x0010 */


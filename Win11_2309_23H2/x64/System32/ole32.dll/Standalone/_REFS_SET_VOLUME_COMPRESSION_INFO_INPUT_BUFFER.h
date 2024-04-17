typedef enum _REFS_COMPRESSION_FORMATS
{
  REFS_COMPRESSION_FORMAT_UNCHANGED = 0,
  REFS_COMPRESSION_FORMAT_UNKNOWN = 1,
  REFS_COMPRESSION_FORMAT_UNCOMPRESSED = 2,
  REFS_COMPRESSION_FORMAT_LZ4 = 3,
  REFS_COMPRESSION_FORMAT_ZSTD = 4,
} REFS_COMPRESSION_FORMATS, *PREFS_COMPRESSION_FORMATS;

typedef struct _REFS_SET_VOLUME_COMPRESSION_INFO_INPUT_BUFFER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ enum _REFS_COMPRESSION_FORMATS CompressionFormat;
  /* 0x0008 */ short CompressionLevel;
  /* 0x000c */ unsigned long CompressionChunkSizeBytes;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned long CompressionTuning;
  /* 0x0018 */ unsigned long RecompressionTuning;
  /* 0x001c */ unsigned long DecompressionTuning;
  /* 0x0020 */ unsigned long Reserved[6];
} REFS_SET_VOLUME_COMPRESSION_INFO_INPUT_BUFFER, *PREFS_SET_VOLUME_COMPRESSION_INFO_INPUT_BUFFER; /* size: 0x0038 */


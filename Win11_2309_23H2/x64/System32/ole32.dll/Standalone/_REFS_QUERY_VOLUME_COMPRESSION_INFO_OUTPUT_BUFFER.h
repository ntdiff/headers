typedef enum _REFS_COMPRESSION_FORMATS
{
  REFS_COMPRESSION_FORMAT_UNCHANGED = 0,
  REFS_COMPRESSION_FORMAT_UNKNOWN = 1,
  REFS_COMPRESSION_FORMAT_UNCOMPRESSED = 2,
  REFS_COMPRESSION_FORMAT_LZ4 = 3,
  REFS_COMPRESSION_FORMAT_ZSTD = 4,
} REFS_COMPRESSION_FORMATS, *PREFS_COMPRESSION_FORMATS;

typedef struct _REFS_QUERY_VOLUME_COMPRESSION_INFO_OUTPUT_BUFFER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ enum _REFS_COMPRESSION_FORMATS DefaultCompressionFormat;
  /* 0x0008 */ short DefaultCompressionLevel;
  /* 0x000c */ unsigned long DefaultCompressionChunkSizeBytes;
  /* 0x0010 */ unsigned long VolumeClusterSizeBytes;
  /* 0x0018 */ unsigned __int64 TotalVolumeClusters;
  /* 0x0020 */ unsigned __int64 TotalAllocatedClusters;
  /* 0x0028 */ unsigned __int64 TotalCompressibleClustersAllocated;
  /* 0x0030 */ unsigned __int64 TotalCompressibleClustersInUse;
  /* 0x0038 */ unsigned __int64 TotalCompressedClusters;
  /* 0x0040 */ unsigned long Flags;
  /* 0x0044 */ unsigned long CompressionTuning;
  /* 0x0048 */ unsigned long RecompressionTuning;
  /* 0x004c */ unsigned long DecompressionTuning;
  /* 0x0050 */ unsigned long Reserved[9];
  /* 0x0074 */ long __PADDING__[1];
} REFS_QUERY_VOLUME_COMPRESSION_INFO_OUTPUT_BUFFER, *PREFS_QUERY_VOLUME_COMPRESSION_INFO_OUTPUT_BUFFER; /* size: 0x0078 */


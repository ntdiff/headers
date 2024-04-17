typedef enum _FILE_METADATA_OPTIMIZATION_STATE
{
  FileMetadataOptimizationNone = 0,
  FileMetadataOptimizationInProgress = 1,
  FileMetadataOptimizationPending = 2,
} FILE_METADATA_OPTIMIZATION_STATE, *PFILE_METADATA_OPTIMIZATION_STATE;

typedef struct _FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT
{
  /* 0x0000 */ enum _FILE_METADATA_OPTIMIZATION_STATE State;
  /* 0x0004 */ unsigned long AttributeListSize;
  /* 0x0008 */ unsigned long MetadataSpaceUsed;
  /* 0x000c */ unsigned long MetadataSpaceAllocated;
  /* 0x0010 */ unsigned long NumberOfFileRecords;
  /* 0x0014 */ unsigned long NumberOfResidentAttributes;
  /* 0x0018 */ unsigned long NumberOfNonresidentAttributes;
  /* 0x001c */ unsigned long TotalInProgress;
  /* 0x0020 */ unsigned long TotalPending;
} FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT, *PFILE_QUERY_METADATA_OPTIMIZATION_OUTPUT; /* size: 0x0024 */


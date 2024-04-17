typedef enum _QUERY_FILE_LAYOUT_FILTER_TYPE
{
  QUERY_FILE_LAYOUT_FILTER_TYPE_NONE = 0,
  QUERY_FILE_LAYOUT_FILTER_TYPE_CLUSTERS = 1,
  QUERY_FILE_LAYOUT_FILTER_TYPE_FILEID = 2,
  QUERY_FILE_LAYOUT_FILTER_TYPE_STORAGE_RESERVE_ID = 3,
  QUERY_FILE_LAYOUT_NUM_FILTER_TYPES = 4,
} QUERY_FILE_LAYOUT_FILTER_TYPE, *PQUERY_FILE_LAYOUT_FILTER_TYPE;

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

typedef struct _CLUSTER_RANGE
{
  /* 0x0000 */ union _LARGE_INTEGER StartingCluster;
  /* 0x0008 */ union _LARGE_INTEGER ClusterCount;
} CLUSTER_RANGE, *PCLUSTER_RANGE; /* size: 0x0010 */

typedef struct _FILE_REFERENCE_RANGE
{
  /* 0x0000 */ unsigned __int64 StartingFileReferenceNumber;
  /* 0x0008 */ unsigned __int64 EndingFileReferenceNumber;
} FILE_REFERENCE_RANGE, *PFILE_REFERENCE_RANGE; /* size: 0x0010 */

typedef enum _STORAGE_RESERVE_ID
{
  StorageReserveIdNone = 0,
  StorageReserveIdHard = 1,
  StorageReserveIdSoft = 2,
  StorageReserveIdUpdateScratch = 3,
  StorageReserveIdMax = 4,
} STORAGE_RESERVE_ID, *PSTORAGE_RESERVE_ID;

typedef struct _QUERY_FILE_LAYOUT_INPUT
{
  union
  {
    /* 0x0000 */ unsigned long FilterEntryCount;
    /* 0x0000 */ unsigned long NumberOfPairs;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _QUERY_FILE_LAYOUT_FILTER_TYPE FilterType;
  /* 0x000c */ unsigned long Reserved;
  union
  {
    union
    {
      /* 0x0010 */ struct _CLUSTER_RANGE ClusterRanges[1];
      /* 0x0010 */ struct _FILE_REFERENCE_RANGE FileReferenceRanges[1];
      /* 0x0010 */ enum _STORAGE_RESERVE_ID StorageReserveIds[1];
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ Filter;
} QUERY_FILE_LAYOUT_INPUT, *PQUERY_FILE_LAYOUT_INPUT; /* size: 0x0020 */


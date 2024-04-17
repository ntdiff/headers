typedef enum _CSVFS_DISK_CONNECTIVITY
{
  CsvFsDiskConnectivityNone = 0,
  CsvFsDiskConnectivityMdsNodeOnly = 1,
  CsvFsDiskConnectivitySubsetOfNodes = 2,
  CsvFsDiskConnectivityAllNodes = 3,
} CSVFS_DISK_CONNECTIVITY, *PCSVFS_DISK_CONNECTIVITY;

typedef struct _CSV_QUERY_VOLUME_REDIRECT_STATE
{
  /* 0x0000 */ unsigned long MdsNodeId;
  /* 0x0004 */ unsigned long DsNodeId;
  /* 0x0008 */ unsigned char IsDiskConnected;
  /* 0x0009 */ unsigned char ClusterEnableDirectIo;
  /* 0x000c */ enum _CSVFS_DISK_CONNECTIVITY DiskConnectivity;
} CSV_QUERY_VOLUME_REDIRECT_STATE, *PCSV_QUERY_VOLUME_REDIRECT_STATE; /* size: 0x0010 */


typedef enum _CSVFS_DISK_CONNECTIVITY
{
  CsvFsDiskConnectivityNone = 0,
  CsvFsDiskConnectivityMdsNodeOnly = 1,
  CsvFsDiskConnectivitySubsetOfNodes = 2,
  CsvFsDiskConnectivityAllNodes = 3,
} CSVFS_DISK_CONNECTIVITY, *PCSVFS_DISK_CONNECTIVITY;

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _CSV_QUERY_MDS_PATH_V2
{
  /* 0x0000 */ __int64 Version;
  /* 0x0008 */ unsigned long RequiredSize;
  /* 0x000c */ unsigned long MdsNodeId;
  /* 0x0010 */ unsigned long DsNodeId;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ enum _CSVFS_DISK_CONNECTIVITY DiskConnectivity;
  /* 0x001c */ struct _GUID VolumeId;
  /* 0x002c */ unsigned long IpAddressOffset;
  /* 0x0030 */ unsigned long IpAddressLength;
  /* 0x0034 */ unsigned long PathOffset;
  /* 0x0038 */ unsigned long PathLength;
  /* 0x003c */ long __PADDING__[1];
} CSV_QUERY_MDS_PATH_V2, *PCSV_QUERY_MDS_PATH_V2; /* size: 0x0040 */


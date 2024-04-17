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

struct NTFS_VOLUME_DATA_BUFFER
{
  /* 0x0000 */ union _LARGE_INTEGER VolumeSerialNumber;
  /* 0x0008 */ union _LARGE_INTEGER NumberSectors;
  /* 0x0010 */ union _LARGE_INTEGER TotalClusters;
  /* 0x0018 */ union _LARGE_INTEGER FreeClusters;
  /* 0x0020 */ union _LARGE_INTEGER TotalReserved;
  /* 0x0028 */ unsigned long BytesPerSector;
  /* 0x002c */ unsigned long BytesPerCluster;
  /* 0x0030 */ unsigned long BytesPerFileRecordSegment;
  /* 0x0034 */ unsigned long ClustersPerFileRecordSegment;
  /* 0x0038 */ union _LARGE_INTEGER MftValidDataLength;
  /* 0x0040 */ union _LARGE_INTEGER MftStartLcn;
  /* 0x0048 */ union _LARGE_INTEGER Mft2StartLcn;
  /* 0x0050 */ union _LARGE_INTEGER MftZoneStart;
  /* 0x0058 */ union _LARGE_INTEGER MftZoneEnd;
}; /* size: 0x0060 */


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

struct REFS_VOLUME_DATA_BUFFER
{
  /* 0x0000 */ unsigned long ByteCount;
  /* 0x0004 */ unsigned long MajorVersion;
  /* 0x0008 */ unsigned long MinorVersion;
  /* 0x000c */ unsigned long BytesPerPhysicalSector;
  /* 0x0010 */ union _LARGE_INTEGER VolumeSerialNumber;
  /* 0x0018 */ union _LARGE_INTEGER NumberSectors;
  /* 0x0020 */ union _LARGE_INTEGER TotalClusters;
  /* 0x0028 */ union _LARGE_INTEGER FreeClusters;
  /* 0x0030 */ union _LARGE_INTEGER TotalReserved;
  /* 0x0038 */ unsigned long BytesPerSector;
  /* 0x003c */ unsigned long BytesPerCluster;
  /* 0x0040 */ union _LARGE_INTEGER MaximumSizeOfResidentFile;
  /* 0x0048 */ union _LARGE_INTEGER Reserved[10];
}; /* size: 0x0098 */


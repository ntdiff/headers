typedef struct _FILESYSTEM_STATISTICS
{
  /* 0x0000 */ unsigned short FileSystemType;
  /* 0x0002 */ unsigned short Version;
  /* 0x0004 */ unsigned long SizeOfCompleteStructure;
  /* 0x0008 */ unsigned long UserFileReads;
  /* 0x000c */ unsigned long UserFileReadBytes;
  /* 0x0010 */ unsigned long UserDiskReads;
  /* 0x0014 */ unsigned long UserFileWrites;
  /* 0x0018 */ unsigned long UserFileWriteBytes;
  /* 0x001c */ unsigned long UserDiskWrites;
  /* 0x0020 */ unsigned long MetaDataReads;
  /* 0x0024 */ unsigned long MetaDataReadBytes;
  /* 0x0028 */ unsigned long MetaDataDiskReads;
  /* 0x002c */ unsigned long MetaDataWrites;
  /* 0x0030 */ unsigned long MetaDataWriteBytes;
  /* 0x0034 */ unsigned long MetaDataDiskWrites;
} FILESYSTEM_STATISTICS, *PFILESYSTEM_STATISTICS; /* size: 0x0038 */


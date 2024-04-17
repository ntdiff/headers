typedef struct _FILESYSTEM_STATISTICS_EX
{
  /* 0x0000 */ unsigned short FileSystemType;
  /* 0x0002 */ unsigned short Version;
  /* 0x0004 */ unsigned long SizeOfCompleteStructure;
  /* 0x0008 */ unsigned __int64 UserFileReads;
  /* 0x0010 */ unsigned __int64 UserFileReadBytes;
  /* 0x0018 */ unsigned __int64 UserDiskReads;
  /* 0x0020 */ unsigned __int64 UserFileWrites;
  /* 0x0028 */ unsigned __int64 UserFileWriteBytes;
  /* 0x0030 */ unsigned __int64 UserDiskWrites;
  /* 0x0038 */ unsigned __int64 MetaDataReads;
  /* 0x0040 */ unsigned __int64 MetaDataReadBytes;
  /* 0x0048 */ unsigned __int64 MetaDataDiskReads;
  /* 0x0050 */ unsigned __int64 MetaDataWrites;
  /* 0x0058 */ unsigned __int64 MetaDataWriteBytes;
  /* 0x0060 */ unsigned __int64 MetaDataDiskWrites;
} FILESYSTEM_STATISTICS_EX, *PFILESYSTEM_STATISTICS_EX; /* size: 0x0068 */


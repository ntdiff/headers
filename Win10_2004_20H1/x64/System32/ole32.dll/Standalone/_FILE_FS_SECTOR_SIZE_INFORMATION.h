typedef struct _FILE_FS_SECTOR_SIZE_INFORMATION
{
  /* 0x0000 */ unsigned long LogicalBytesPerSector;
  /* 0x0004 */ unsigned long PhysicalBytesPerSectorForAtomicity;
  /* 0x0008 */ unsigned long PhysicalBytesPerSectorForPerformance;
  /* 0x000c */ unsigned long FileSystemEffectivePhysicalBytesPerSectorForAtomicity;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned long ByteOffsetForSectorAlignment;
  /* 0x0018 */ unsigned long ByteOffsetForPartitionAlignment;
} FILE_FS_SECTOR_SIZE_INFORMATION, *PFILE_FS_SECTOR_SIZE_INFORMATION; /* size: 0x001c */


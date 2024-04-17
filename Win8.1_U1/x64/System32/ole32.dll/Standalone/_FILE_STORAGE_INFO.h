typedef struct _FILE_STORAGE_INFO
{
  /* 0x0000 */ unsigned long LogicalBytesPerSector;
  /* 0x0004 */ unsigned long PhysicalBytesPerSectorForAtomicity;
  /* 0x0008 */ unsigned long PhysicalBytesPerSectorForPerformance;
  /* 0x000c */ unsigned long FileSystemEffectivePhysicalBytesPerSectorForAtomicity;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned long ByteOffsetForSectorAlignment;
  /* 0x0018 */ unsigned long ByteOffsetForPartitionAlignment;
} FILE_STORAGE_INFO, *PFILE_STORAGE_INFO; /* size: 0x001c */


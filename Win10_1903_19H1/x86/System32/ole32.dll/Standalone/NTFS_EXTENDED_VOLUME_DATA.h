struct NTFS_EXTENDED_VOLUME_DATA
{
  /* 0x0000 */ unsigned long ByteCount;
  /* 0x0004 */ unsigned short MajorVersion;
  /* 0x0006 */ unsigned short MinorVersion;
  /* 0x0008 */ unsigned long BytesPerPhysicalSector;
  /* 0x000c */ unsigned short LfsMajorVersion;
  /* 0x000e */ unsigned short LfsMinorVersion;
  /* 0x0010 */ unsigned long MaxDeviceTrimExtentCount;
  /* 0x0014 */ unsigned long MaxDeviceTrimByteCount;
  /* 0x0018 */ unsigned long MaxVolumeTrimExtentCount;
  /* 0x001c */ unsigned long MaxVolumeTrimByteCount;
}; /* size: 0x0020 */


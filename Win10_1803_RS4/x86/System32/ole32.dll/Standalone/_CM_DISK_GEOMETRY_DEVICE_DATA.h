typedef struct _CM_DISK_GEOMETRY_DEVICE_DATA
{
  /* 0x0000 */ unsigned long BytesPerSector;
  /* 0x0004 */ unsigned long NumberOfCylinders;
  /* 0x0008 */ unsigned long SectorsPerTrack;
  /* 0x000c */ unsigned long NumberOfHeads;
} CM_DISK_GEOMETRY_DEVICE_DATA, *PCM_DISK_GEOMETRY_DEVICE_DATA; /* size: 0x0010 */


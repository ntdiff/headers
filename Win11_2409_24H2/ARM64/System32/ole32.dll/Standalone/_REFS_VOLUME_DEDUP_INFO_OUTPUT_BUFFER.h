typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _REFS_VOLUME_DEDUP_INFO_OUTPUT_BUFFER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned char Enabled;
  /* 0x0005 */ unsigned char EnabledWeakRef;
  /* 0x0006 */ unsigned char EnabledDirtyRangeTracking;
  /* 0x0007 */ unsigned char WeakRefInconsistent;
  /* 0x0008 */ unsigned char IsClustered;
  /* 0x000c */ unsigned long VolumeIdHash;
  /* 0x0010 */ struct _GUID VolumeGuid;
  /* 0x0020 */ struct _GUID VolumeUniqueGuid;
} REFS_VOLUME_DEDUP_INFO_OUTPUT_BUFFER, *PREFS_VOLUME_DEDUP_INFO_OUTPUT_BUFFER; /* size: 0x0030 */


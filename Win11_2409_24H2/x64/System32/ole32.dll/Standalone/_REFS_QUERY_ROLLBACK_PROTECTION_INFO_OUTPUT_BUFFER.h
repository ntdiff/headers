typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _REFS_QUERY_ROLLBACK_PROTECTION_INFO_OUTPUT_BUFFER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ struct _GUID VolumeGuid;
  /* 0x0014 */ struct _GUID RollbackProtectionGuid;
  /* 0x0024 */ unsigned char FailMountOnMismatch;
  /* 0x0028 */ unsigned __int64 FrozenVirtualClock;
  /* 0x0030 */ unsigned __int64 CurrentVirtualClock;
  /* 0x0038 */ unsigned short ChecksumType;
  /* 0x003c */ unsigned long ChecksumLength;
  /* 0x0040 */ unsigned long ChecksumOffset;
  /* 0x0044 */ unsigned long CustomPayloadLength;
  /* 0x0048 */ unsigned long CustomPayloadOffset;
  /* 0x004c */ long __PADDING__[1];
} REFS_QUERY_ROLLBACK_PROTECTION_INFO_OUTPUT_BUFFER, *PREFS_QUERY_ROLLBACK_PROTECTION_INFO_OUTPUT_BUFFER; /* size: 0x0050 */


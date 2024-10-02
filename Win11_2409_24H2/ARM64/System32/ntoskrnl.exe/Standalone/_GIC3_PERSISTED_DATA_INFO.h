typedef struct _GIC3_PERSISTED_DATA_INFO
{
  /* 0x0000 */ struct _GIC3_SOFT_REBOOT_DATA* PersistedGicData;
  /* 0x0008 */ unsigned __int64 PersistedGicDataSize;
  /* 0x0010 */ unsigned char PersistedGicDataVersion;
  /* 0x0011 */ char __PADDING__[7];
} GIC3_PERSISTED_DATA_INFO, *PGIC3_PERSISTED_DATA_INFO; /* size: 0x0018 */


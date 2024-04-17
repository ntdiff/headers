typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _VIRTUAL_STORAGE_TYPE
{
  /* 0x0000 */ unsigned long DeviceId;
  /* 0x0004 */ struct _GUID VendorId;
} VIRTUAL_STORAGE_TYPE, *PVIRTUAL_STORAGE_TYPE; /* size: 0x0014 */

typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY
{
  /* 0x0000 */ unsigned long EntryLength;
  /* 0x0004 */ unsigned long DependencyTypeFlags;
  /* 0x0008 */ unsigned long ProviderSpecificFlags;
  /* 0x000c */ struct _VIRTUAL_STORAGE_TYPE VirtualStorageType;
} STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY, *PSTORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY; /* size: 0x0020 */

typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY
{
  /* 0x0000 */ unsigned long EntryLength;
  /* 0x0004 */ unsigned long DependencyTypeFlags;
  /* 0x0008 */ unsigned long ProviderSpecificFlags;
  /* 0x000c */ struct _VIRTUAL_STORAGE_TYPE VirtualStorageType;
  /* 0x0020 */ unsigned long AncestorLevel;
  /* 0x0024 */ unsigned long HostVolumeNameOffset;
  /* 0x0028 */ unsigned long HostVolumeNameSize;
  /* 0x002c */ unsigned long DependentVolumeNameOffset;
  /* 0x0030 */ unsigned long DependentVolumeNameSize;
  /* 0x0034 */ unsigned long RelativePathOffset;
  /* 0x0038 */ unsigned long RelativePathSize;
  /* 0x003c */ unsigned long DependentDeviceNameOffset;
  /* 0x0040 */ unsigned long DependentDeviceNameSize;
} STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY, *PSTORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY; /* size: 0x0044 */

typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE
{
  /* 0x0000 */ unsigned long ResponseLevel;
  /* 0x0004 */ unsigned long NumberEntries;
  union
  {
    /* 0x0008 */ struct _STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY* Lev1Depends /* zero-length array */;
    /* 0x0008 */ struct _STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY* Lev2Depends /* zero-length array */;
    /* 0x0008 */ long __PADDING__[17];
  }; /* size: 0x0044 */
} STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE, *PSTORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE; /* size: 0x004c */


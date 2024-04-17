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


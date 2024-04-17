typedef struct _IMAGE_DATA_DIRECTORY
{
  /* 0x0000 */ unsigned long VirtualAddress;
  /* 0x0004 */ unsigned long Size;
} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY; /* size: 0x0008 */

struct IMAGE_COR20_HEADER
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0004 */ unsigned short MajorRuntimeVersion;
  /* 0x0006 */ unsigned short MinorRuntimeVersion;
  /* 0x0008 */ struct _IMAGE_DATA_DIRECTORY MetaData;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned long EntryPointToken;
  /* 0x0018 */ struct _IMAGE_DATA_DIRECTORY Resources;
  /* 0x0020 */ struct _IMAGE_DATA_DIRECTORY StrongNameSignature;
  /* 0x0028 */ struct _IMAGE_DATA_DIRECTORY CodeManagerTable;
  /* 0x0030 */ struct _IMAGE_DATA_DIRECTORY VTableFixups;
  /* 0x0038 */ struct _IMAGE_DATA_DIRECTORY ExportAddressTableJumps;
  /* 0x0040 */ struct _IMAGE_DATA_DIRECTORY ManagedNativeHeader;
}; /* size: 0x0048 */


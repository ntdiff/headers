struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA
{
  /* 0x0000 */ void* lpInformation;
  /* 0x0008 */ void* lpSectionBase;
  /* 0x0010 */ unsigned long ulSectionLength;
  /* 0x0018 */ void* lpSectionGlobalDataBase;
  /* 0x0020 */ unsigned long ulSectionGlobalDataLength;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */

struct tagACTCTX_SECTION_KEYED_DATA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long ulDataFormatVersion;
  /* 0x0008 */ void* lpData;
  /* 0x0010 */ unsigned long ulLength;
  /* 0x0018 */ void* lpSectionGlobalData;
  /* 0x0020 */ unsigned long ulSectionGlobalDataLength;
  /* 0x0028 */ void* lpSectionBase;
  /* 0x0030 */ unsigned long ulSectionTotalLength;
  /* 0x0038 */ void* hActCtx;
  /* 0x0040 */ unsigned long ulAssemblyRosterIndex;
  /* 0x0044 */ unsigned long ulFlags;
  /* 0x0048 */ struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA AssemblyMetadata;
}; /* size: 0x0070 */


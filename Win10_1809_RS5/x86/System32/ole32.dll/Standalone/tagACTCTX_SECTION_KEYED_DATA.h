struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA
{
  /* 0x0000 */ void* lpInformation;
  /* 0x0004 */ void* lpSectionBase;
  /* 0x0008 */ unsigned long ulSectionLength;
  /* 0x000c */ void* lpSectionGlobalDataBase;
  /* 0x0010 */ unsigned long ulSectionGlobalDataLength;
}; /* size: 0x0014 */

struct tagACTCTX_SECTION_KEYED_DATA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long ulDataFormatVersion;
  /* 0x0008 */ void* lpData;
  /* 0x000c */ unsigned long ulLength;
  /* 0x0010 */ void* lpSectionGlobalData;
  /* 0x0014 */ unsigned long ulSectionGlobalDataLength;
  /* 0x0018 */ void* lpSectionBase;
  /* 0x001c */ unsigned long ulSectionTotalLength;
  /* 0x0020 */ void* hActCtx;
  /* 0x0024 */ unsigned long ulAssemblyRosterIndex;
  /* 0x0028 */ unsigned long ulFlags;
  /* 0x002c */ struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA AssemblyMetadata;
}; /* size: 0x0040 */


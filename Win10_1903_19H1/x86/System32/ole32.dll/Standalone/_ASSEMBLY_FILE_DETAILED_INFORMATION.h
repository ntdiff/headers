typedef struct _ASSEMBLY_FILE_DETAILED_INFORMATION
{
  /* 0x0000 */ unsigned long ulFlags;
  /* 0x0004 */ unsigned long ulFilenameLength;
  /* 0x0008 */ unsigned long ulPathLength;
  /* 0x000c */ const wchar_t* lpFileName;
  /* 0x0010 */ const wchar_t* lpFilePath;
} ASSEMBLY_FILE_DETAILED_INFORMATION, *PASSEMBLY_FILE_DETAILED_INFORMATION; /* size: 0x0014 */


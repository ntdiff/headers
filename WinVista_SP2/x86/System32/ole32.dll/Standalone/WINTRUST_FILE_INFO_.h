struct WINTRUST_FILE_INFO_
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ const wchar_t* pcwszFilePath;
  /* 0x0008 */ void* hFile;
  /* 0x000c */ struct _GUID* pgKnownSubject;
}; /* size: 0x0010 */


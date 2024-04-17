struct tagVS_FIXEDFILEINFO
{
  /* 0x0000 */ unsigned long dwSignature;
  /* 0x0004 */ unsigned long dwStrucVersion;
  /* 0x0008 */ unsigned long dwFileVersionMS;
  /* 0x000c */ unsigned long dwFileVersionLS;
  /* 0x0010 */ unsigned long dwProductVersionMS;
  /* 0x0014 */ unsigned long dwProductVersionLS;
  /* 0x0018 */ unsigned long dwFileFlagsMask;
  /* 0x001c */ unsigned long dwFileFlags;
  /* 0x0020 */ unsigned long dwFileOS;
  /* 0x0024 */ unsigned long dwFileType;
  /* 0x0028 */ unsigned long dwFileSubtype;
  /* 0x002c */ unsigned long dwFileDateMS;
  /* 0x0030 */ unsigned long dwFileDateLS;
}; /* size: 0x0034 */

typedef struct _MINIDUMP_LOCATION_DESCRIPTOR
{
  /* 0x0000 */ unsigned int DataSize;
  /* 0x0004 */ unsigned long Rva;
} MINIDUMP_LOCATION_DESCRIPTOR, *PMINIDUMP_LOCATION_DESCRIPTOR; /* size: 0x0008 */

typedef struct _MINIDUMP_MODULE
{
  /* 0x0000 */ unsigned __int64 BaseOfImage;
  /* 0x0008 */ unsigned int SizeOfImage;
  /* 0x000c */ unsigned int CheckSum;
  /* 0x0010 */ unsigned int TimeDateStamp;
  /* 0x0014 */ unsigned long ModuleNameRva;
  /* 0x0018 */ struct tagVS_FIXEDFILEINFO VersionInfo;
  /* 0x004c */ struct _MINIDUMP_LOCATION_DESCRIPTOR CvRecord;
  /* 0x0054 */ struct _MINIDUMP_LOCATION_DESCRIPTOR MiscRecord;
  /* 0x005c */ unsigned __int64 Reserved0;
  /* 0x0064 */ unsigned __int64 Reserved1;
} MINIDUMP_MODULE, *PMINIDUMP_MODULE; /* size: 0x006c */

typedef struct _MINIDUMP_MODULE_LIST
{
  /* 0x0000 */ unsigned int NumberOfModules;
  /* 0x0004 */ struct _MINIDUMP_MODULE* Modules /* zero-length array */;
} MINIDUMP_MODULE_LIST, *PMINIDUMP_MODULE_LIST; /* size: 0x0004 */


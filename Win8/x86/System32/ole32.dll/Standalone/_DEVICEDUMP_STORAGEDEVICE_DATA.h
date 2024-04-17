typedef struct _DEVICEDUMP_STRUCTURE_VERSION
{
  /* 0x0000 */ unsigned long dwSignature;
  /* 0x0004 */ unsigned long dwVersion;
  /* 0x0008 */ unsigned long dwSize;
} DEVICEDUMP_STRUCTURE_VERSION, *PDEVICEDUMP_STRUCTURE_VERSION; /* size: 0x000c */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _DEVICEDUMP_SECTION_HEADER
{
  /* 0x0000 */ struct _GUID guidDeviceDataId;
  /* 0x0010 */ unsigned char sOrganizationID[16];
  /* 0x0020 */ unsigned long dwFirmwareRevision;
  /* 0x0024 */ unsigned char sModelNumber[32];
  /* 0x0044 */ unsigned char szDeviceManufacturingID[32];
  /* 0x0064 */ unsigned long dwFlags;
  /* 0x0068 */ unsigned long bRestrictedPrivateDataVersion;
  /* 0x006c */ unsigned long dwFirmwareIssueId;
  /* 0x0070 */ unsigned char szIssueDescriptionString[132];
} DEVICEDUMP_SECTION_HEADER, *PDEVICEDUMP_SECTION_HEADER; /* size: 0x00f4 */

typedef struct _DEVICEDUMP_SUBSECTION_POINTER
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ unsigned long dwOffset;
} DEVICEDUMP_SUBSECTION_POINTER, *PDEVICEDUMP_SUBSECTION_POINTER; /* size: 0x000c */

typedef struct _DEVICEDUMP_STORAGEDEVICE_DATA
{
  /* 0x0000 */ struct _DEVICEDUMP_STRUCTURE_VERSION Descriptor;
  /* 0x000c */ struct _DEVICEDUMP_SECTION_HEADER SectionHeader;
  /* 0x0100 */ unsigned long dwBufferSize;
  /* 0x0104 */ unsigned long dwReasonForCollection;
  /* 0x0108 */ struct _DEVICEDUMP_SUBSECTION_POINTER PublicData;
  /* 0x0114 */ struct _DEVICEDUMP_SUBSECTION_POINTER RestrictedData;
  /* 0x0120 */ struct _DEVICEDUMP_SUBSECTION_POINTER PrivateData;
} DEVICEDUMP_STORAGEDEVICE_DATA, *PDEVICEDUMP_STORAGEDEVICE_DATA; /* size: 0x012c */


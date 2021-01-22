typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD
{
  /* 0x0000 */ void* Initialize /* function */;
  /* 0x0008 */ void* Uninitialize /* function */;
  /* 0x0010 */ void* Correct /* function */;
} WHEA_ERROR_SOURCE_CONFIGURATION_DD, *PWHEA_ERROR_SOURCE_CONFIGURATION_DD; /* size: 0x0018 */

typedef struct _WHEA_DEVICE_DRIVER_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ struct _GUID SourceGuid;
  /* 0x0014 */ unsigned short LogTag;
  /* 0x0016 */ unsigned short Reserved2;
  /* 0x0018 */ unsigned long PacketLength;
  /* 0x001c */ unsigned long PacketCount;
  /* 0x0020 */ unsigned char* PacketBuffer;
  /* 0x0028 */ struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD Config;
  /* 0x0040 */ struct _GUID CreatorId;
  /* 0x0050 */ struct _GUID PartitionId;
  /* 0x0060 */ unsigned long MaxSectionDataLength;
  /* 0x0064 */ unsigned long MaxSectionsPerRecord;
  /* 0x0068 */ unsigned char* PacketStateBuffer;
  /* 0x0070 */ long OpenHandles;
} WHEA_DEVICE_DRIVER_DESCRIPTOR, *PWHEA_DEVICE_DRIVER_DESCRIPTOR; /* size: 0x0074 */


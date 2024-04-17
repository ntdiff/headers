typedef struct _DEVICEDUMP_STRUCTURE_VERSION
{
  /* 0x0000 */ unsigned long dwSignature;
  /* 0x0004 */ unsigned long dwVersion;
  /* 0x0008 */ unsigned long dwSize;
} DEVICEDUMP_STRUCTURE_VERSION, *PDEVICEDUMP_STRUCTURE_VERSION; /* size: 0x000c */

typedef struct _DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD
{
  /* 0x0000 */ unsigned char Cdb[16];
  /* 0x0010 */ unsigned char Command[16];
  /* 0x0020 */ unsigned __int64 StartTime;
  /* 0x0028 */ unsigned __int64 EndTime;
  /* 0x0030 */ unsigned long OperationStatus;
  /* 0x0034 */ unsigned long OperationError;
  union
  {
    union
    {
      struct
      {
        /* 0x0038 */ unsigned long dwReserved;
      } /* size: 0x0004 */ ExternalStack;
      struct
      {
        /* 0x0038 */ unsigned long dwAtaPortSpecific;
      } /* size: 0x0004 */ AtaPort;
      struct
      {
        /* 0x0038 */ unsigned long SrbTag;
      } /* size: 0x0004 */ StorPort;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ StackSpecific;
} DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD, *PDEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD; /* size: 0x003c */

typedef struct _DEVICEDUMP_STORAGESTACK_PUBLIC_DUMP
{
  /* 0x0000 */ struct _DEVICEDUMP_STRUCTURE_VERSION Descriptor;
  /* 0x000c */ unsigned long dwReasonForCollection;
  /* 0x0010 */ unsigned char cDriverName[16];
  /* 0x0020 */ unsigned long uiNumRecords;
  /* 0x0024 */ struct _DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD RecordArray[1];
} DEVICEDUMP_STORAGESTACK_PUBLIC_DUMP, *PDEVICEDUMP_STORAGESTACK_PUBLIC_DUMP; /* size: 0x0060 */


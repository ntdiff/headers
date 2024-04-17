typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _JOBOBJECT_CONTAINER_IDENTIFIER_V2
{
  /* 0x0000 */ struct _GUID ContainerId;
  /* 0x0010 */ struct _GUID ContainerTelemetryId;
  /* 0x0020 */ unsigned long JobId;
} JOBOBJECT_CONTAINER_IDENTIFIER_V2, *PJOBOBJECT_CONTAINER_IDENTIFIER_V2; /* size: 0x0024 */


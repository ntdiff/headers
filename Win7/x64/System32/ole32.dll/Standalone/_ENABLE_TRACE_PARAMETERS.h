typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _ENABLE_TRACE_PARAMETERS
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long EnableProperty;
  /* 0x0008 */ unsigned long ControlFlags;
  /* 0x000c */ struct _GUID SourceId;
  /* 0x0020 */ struct _EVENT_FILTER_DESCRIPTOR* EnableFilterDesc;
} ENABLE_TRACE_PARAMETERS, *PENABLE_TRACE_PARAMETERS; /* size: 0x0028 */


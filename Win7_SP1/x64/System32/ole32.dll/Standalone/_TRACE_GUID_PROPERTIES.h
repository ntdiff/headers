typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _TRACE_GUID_PROPERTIES
{
  /* 0x0000 */ struct _GUID Guid;
  /* 0x0010 */ unsigned long GuidType;
  /* 0x0014 */ unsigned long LoggerId;
  /* 0x0018 */ unsigned long EnableLevel;
  /* 0x001c */ unsigned long EnableFlags;
  /* 0x0020 */ unsigned char IsEnable;
  /* 0x0021 */ char __PADDING__[3];
} TRACE_GUID_PROPERTIES, *PTRACE_GUID_PROPERTIES; /* size: 0x0024 */


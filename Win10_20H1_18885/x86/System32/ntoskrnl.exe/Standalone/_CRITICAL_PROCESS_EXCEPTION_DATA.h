typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _CRITICAL_PROCESS_EXCEPTION_DATA
{
  /* 0x0000 */ struct _GUID ReportId;
  /* 0x0010 */ struct _UNICODE_STRING ModuleName;
  /* 0x0018 */ unsigned long ModuleTimestamp;
  /* 0x001c */ unsigned long ModuleSize;
  /* 0x0020 */ unsigned __int64 Offset;
} CRITICAL_PROCESS_EXCEPTION_DATA, *PCRITICAL_PROCESS_EXCEPTION_DATA; /* size: 0x0028 */


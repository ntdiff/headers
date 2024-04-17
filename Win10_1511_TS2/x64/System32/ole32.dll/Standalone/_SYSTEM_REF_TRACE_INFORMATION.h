typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SYSTEM_REF_TRACE_INFORMATION
{
  /* 0x0000 */ unsigned char TraceEnable;
  /* 0x0001 */ unsigned char TracePermanent;
  /* 0x0008 */ struct _UNICODE_STRING TraceProcessName;
  /* 0x0018 */ struct _UNICODE_STRING TracePoolTags;
} SYSTEM_REF_TRACE_INFORMATION, *PSYSTEM_REF_TRACE_INFORMATION; /* size: 0x0028 */


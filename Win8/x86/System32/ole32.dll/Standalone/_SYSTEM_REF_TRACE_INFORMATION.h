typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _SYSTEM_REF_TRACE_INFORMATION
{
  /* 0x0000 */ unsigned char TraceEnable;
  /* 0x0001 */ unsigned char TracePermanent;
  /* 0x0004 */ struct _UNICODE_STRING TraceProcessName;
  /* 0x000c */ struct _UNICODE_STRING TracePoolTags;
} SYSTEM_REF_TRACE_INFORMATION, *PSYSTEM_REF_TRACE_INFORMATION; /* size: 0x0014 */


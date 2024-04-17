typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _EXECUTION_CONTEXT_CONFIGURATION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ const struct _EXECUTION_CONTEXT_RUNTIME_KNOBS* RuntimeKnobs;
  /* 0x0010 */ const struct _GUID* ClientIdentifier;
  /* 0x0018 */ struct _UNICODE_STRING ClientFriendlyName;
} EXECUTION_CONTEXT_CONFIGURATION, *PEXECUTION_CONTEXT_CONFIGURATION; /* size: 0x0028 */


typedef struct _SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS
{
  /* 0x0000 */ void* KeyHandle;
  /* 0x0004 */ struct _UNICODE_STRING* ValueNamePointer;
  /* 0x0008 */ unsigned long* RequiredLengthPointer;
  /* 0x000c */ unsigned char* Buffer;
  /* 0x0010 */ unsigned long BufferLength;
  /* 0x0014 */ unsigned long Type;
  /* 0x0018 */ unsigned char* AppendBuffer;
  /* 0x001c */ unsigned long AppendBufferLength;
  /* 0x0020 */ unsigned char CreateIfDoesntExist;
  /* 0x0021 */ unsigned char TruncateExistingValue;
  /* 0x0022 */ char __PADDING__[2];
} SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS, *PSYSTEM_REGISTRY_APPEND_STRING_PARAMETERS; /* size: 0x0024 */


typedef struct _SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS
{
  /* 0x0000 */ void* KeyHandle;
  /* 0x0008 */ struct _UNICODE_STRING* ValueNamePointer;
  /* 0x0010 */ unsigned long* RequiredLengthPointer;
  /* 0x0018 */ unsigned char* Buffer;
  /* 0x0020 */ unsigned long BufferLength;
  /* 0x0024 */ unsigned long Type;
  /* 0x0028 */ unsigned char* AppendBuffer;
  /* 0x0030 */ unsigned long AppendBufferLength;
  /* 0x0034 */ unsigned char CreateIfDoesntExist;
  /* 0x0035 */ unsigned char TruncateExistingValue;
  /* 0x0036 */ char __PADDING__[2];
} SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS, *PSYSTEM_REGISTRY_APPEND_STRING_PARAMETERS; /* size: 0x0038 */


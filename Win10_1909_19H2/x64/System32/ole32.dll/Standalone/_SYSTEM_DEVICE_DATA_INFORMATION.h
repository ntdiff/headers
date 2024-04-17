typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SYSTEM_DEVICE_DATA_INFORMATION
{
  /* 0x0000 */ struct _UNICODE_STRING DeviceId;
  /* 0x0010 */ struct _UNICODE_STRING DataName;
  /* 0x0020 */ unsigned long DataType;
  /* 0x0024 */ unsigned long DataBufferLength;
  /* 0x0028 */ void* DataBuffer;
} SYSTEM_DEVICE_DATA_INFORMATION, *PSYSTEM_DEVICE_DATA_INFORMATION; /* size: 0x0030 */


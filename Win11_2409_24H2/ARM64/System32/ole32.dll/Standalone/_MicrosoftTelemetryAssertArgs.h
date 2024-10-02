typedef struct _MicrosoftTelemetryAssertArgs
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ unsigned __int64 ImageBase;
  /* 0x0010 */ unsigned __int64 ReturnAddress;
  /* 0x0018 */ unsigned char HasArgs;
  /* 0x0020 */ const char* OriginatingBinary;
  /* 0x0028 */ unsigned long Dword1;
  /* 0x002c */ unsigned long Dword2;
  /* 0x0030 */ unsigned char DumpNeeded;
  /* 0x0031 */ char __PADDING__[7];
} MicrosoftTelemetryAssertArgs, *PMicrosoftTelemetryAssertArgs; /* size: 0x0038 */


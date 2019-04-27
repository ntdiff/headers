typedef struct _RTL_RETPOLINE_BINARY_INFO
{
  /* 0x0000 */ long RetpolineStubsStartRva;
  /* 0x0004 */ unsigned long CfgDispatchFunctionPtrRva;
  /* 0x0008 */ unsigned long IATRva;
  /* 0x0010 */ long* ImportRvas;
  /* 0x0018 */ unsigned __int64* IAT;
  /* 0x0020 */ void* ImageBase;
  /* 0x0028 */ void* CheckFunction /* function */;
} RTL_RETPOLINE_BINARY_INFO, *PRTL_RETPOLINE_BINARY_INFO; /* size: 0x0030 */


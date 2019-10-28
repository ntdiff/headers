typedef struct _RTL_RETPOLINE_BINARY_INFO
{
  /* 0x0000 */ long RetpolineStubsStartRva;
  /* 0x0004 */ unsigned long CfgDispatchFunctionPtrRva;
  /* 0x0008 */ unsigned long IATRva;
  /* 0x000c */ long* ImportRvas;
  /* 0x0010 */ unsigned long* IAT;
  /* 0x0014 */ void* ImageBase;
} RTL_RETPOLINE_BINARY_INFO, *PRTL_RETPOLINE_BINARY_INFO; /* size: 0x0018 */


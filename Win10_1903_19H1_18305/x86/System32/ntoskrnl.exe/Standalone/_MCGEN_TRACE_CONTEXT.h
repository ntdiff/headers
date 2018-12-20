typedef struct _MCGEN_TRACE_CONTEXT
{
  /* 0x0000 */ unsigned __int64 RegistrationHandle;
  /* 0x0008 */ unsigned __int64 Logger;
  /* 0x0010 */ unsigned __int64 MatchAnyKeyword;
  /* 0x0018 */ unsigned __int64 MatchAllKeyword;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ unsigned long IsEnabled;
  /* 0x0028 */ unsigned char Level;
  /* 0x0029 */ unsigned char Reserve;
  /* 0x002a */ unsigned short EnableBitsCount;
  /* 0x002c */ unsigned long* EnableBitMask;
  /* 0x0030 */ const unsigned __int64* EnableKeyWords;
  /* 0x0034 */ const unsigned char* EnableLevel;
} MCGEN_TRACE_CONTEXT, *PMCGEN_TRACE_CONTEXT; /* size: 0x0038 */


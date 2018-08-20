typedef struct _ETW_FILTER_HEADER
{
  /* 0x0000 */ long FilterFlags;
  /* 0x0004 */ struct _ETW_FILTER_PID* PidFilter;
  /* 0x0008 */ struct _ETW_FILTER_STRING_TOKEN* ExeFilter;
  /* 0x000c */ struct _ETW_FILTER_STRING_TOKEN* PkgIdFilter;
  /* 0x0010 */ struct _ETW_FILTER_STRING_TOKEN* PkgAppIdFilter;
  /* 0x0014 */ struct _ETW_PERFECT_HASH_FUNCTION* StackWalkFilter;
  /* 0x0018 */ struct _ETW_PERFECT_HASH_FUNCTION* EventIdFilter;
  /* 0x001c */ struct _ETW_PAYLOAD_FILTER* PayloadFilter;
  /* 0x0020 */ struct _EVENT_FILTER_HEADER* ProviderSideFilter;
} ETW_FILTER_HEADER, *PETW_FILTER_HEADER; /* size: 0x0024 */


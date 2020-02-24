typedef struct _ETW_FILTER_HEADER
{
  /* 0x0000 */ long FilterFlags;
  /* 0x0004 */ struct _ETW_FILTER_PID* PidFilter;
  /* 0x0008 */ struct _ETW_FILTER_STRING_TOKEN* ExeFilter;
  /* 0x000c */ struct _ETW_FILTER_STRING_TOKEN* PkgIdFilter;
  /* 0x0010 */ struct _ETW_FILTER_STRING_TOKEN* PkgAppIdFilter;
  /* 0x0014 */ struct _ETW_FILTER_STRING_TOKEN* ContainerFilter;
  /* 0x0018 */ struct _ETW_PERFECT_HASH_FUNCTION* StackWalkIdFilter;
  /* 0x001c */ struct _ETW_FILTER_EVENT_NAME_DATA* StackWalkNameFilter;
  /* 0x0020 */ struct _EVENT_FILTER_LEVEL_KW* StackWalkLevelKwFilter;
  /* 0x0024 */ struct _ETW_PERFECT_HASH_FUNCTION* EventIdFilter;
  /* 0x0028 */ struct _ETW_PAYLOAD_FILTER* PayloadFilter;
  /* 0x002c */ struct _EVENT_FILTER_HEADER* ProviderSideFilter;
  /* 0x0030 */ struct _ETW_FILTER_EVENT_NAME_DATA* EventNameFilter;
} ETW_FILTER_HEADER, *PETW_FILTER_HEADER; /* size: 0x0034 */


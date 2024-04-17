typedef struct _QUERY_SERVICE_CONFIGW
{
  /* 0x0000 */ unsigned long dwServiceType;
  /* 0x0004 */ unsigned long dwStartType;
  /* 0x0008 */ unsigned long dwErrorControl;
  /* 0x000c */ wchar_t* lpBinaryPathName;
  /* 0x0010 */ wchar_t* lpLoadOrderGroup;
  /* 0x0014 */ unsigned long dwTagId;
  /* 0x0018 */ wchar_t* lpDependencies;
  /* 0x001c */ wchar_t* lpServiceStartName;
  /* 0x0020 */ wchar_t* lpDisplayName;
} QUERY_SERVICE_CONFIGW, *PQUERY_SERVICE_CONFIGW; /* size: 0x0024 */


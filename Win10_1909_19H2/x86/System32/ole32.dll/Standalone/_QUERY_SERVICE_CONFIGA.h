typedef struct _QUERY_SERVICE_CONFIGA
{
  /* 0x0000 */ unsigned long dwServiceType;
  /* 0x0004 */ unsigned long dwStartType;
  /* 0x0008 */ unsigned long dwErrorControl;
  /* 0x000c */ char* lpBinaryPathName;
  /* 0x0010 */ char* lpLoadOrderGroup;
  /* 0x0014 */ unsigned long dwTagId;
  /* 0x0018 */ char* lpDependencies;
  /* 0x001c */ char* lpServiceStartName;
  /* 0x0020 */ char* lpDisplayName;
} QUERY_SERVICE_CONFIGA, *PQUERY_SERVICE_CONFIGA; /* size: 0x0024 */


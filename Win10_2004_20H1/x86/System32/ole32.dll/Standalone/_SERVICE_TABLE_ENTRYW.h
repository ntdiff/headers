typedef struct _SERVICE_TABLE_ENTRYW
{
  /* 0x0000 */ wchar_t* lpServiceName;
  /* 0x0004 */ void* lpServiceProc /* function */;
} SERVICE_TABLE_ENTRYW, *PSERVICE_TABLE_ENTRYW; /* size: 0x0008 */


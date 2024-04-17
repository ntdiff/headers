typedef struct _SERVICE_TABLE_ENTRYA
{
  /* 0x0000 */ char* lpServiceName;
  /* 0x0008 */ void* lpServiceProc /* function */;
} SERVICE_TABLE_ENTRYA, *PSERVICE_TABLE_ENTRYA; /* size: 0x0010 */


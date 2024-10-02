typedef struct _SERVICE_FAILURE_ACTIONSA
{
  /* 0x0000 */ unsigned long dwResetPeriod;
  /* 0x0008 */ char* lpRebootMsg;
  /* 0x0010 */ char* lpCommand;
  /* 0x0018 */ unsigned long cActions;
  /* 0x0020 */ struct _SC_ACTION* lpsaActions;
} SERVICE_FAILURE_ACTIONSA, *PSERVICE_FAILURE_ACTIONSA; /* size: 0x0028 */


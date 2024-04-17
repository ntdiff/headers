typedef struct _SERVICE_FAILURE_ACTIONSW
{
  /* 0x0000 */ unsigned long dwResetPeriod;
  /* 0x0004 */ wchar_t* lpRebootMsg;
  /* 0x0008 */ wchar_t* lpCommand;
  /* 0x000c */ unsigned long cActions;
  /* 0x0010 */ struct _SC_ACTION* lpsaActions;
} SERVICE_FAILURE_ACTIONSW, *PSERVICE_FAILURE_ACTIONSW; /* size: 0x0014 */


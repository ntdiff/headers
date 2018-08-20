typedef struct _LOADER_BUGCHECK_PARAMETERS
{
  /* 0x0000 */ unsigned long BugcheckCode;
  /* 0x0004 */ unsigned long BugcheckParameter1;
  /* 0x0008 */ unsigned long BugcheckParameter2;
  /* 0x000c */ unsigned long BugcheckParameter3;
  /* 0x0010 */ unsigned long BugcheckParameter4;
} LOADER_BUGCHECK_PARAMETERS, *PLOADER_BUGCHECK_PARAMETERS; /* size: 0x0014 */


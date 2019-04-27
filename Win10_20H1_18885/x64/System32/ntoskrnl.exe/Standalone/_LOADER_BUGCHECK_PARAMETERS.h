typedef struct _LOADER_BUGCHECK_PARAMETERS
{
  /* 0x0000 */ unsigned long BugcheckCode;
  /* 0x0008 */ unsigned __int64 BugcheckParameter1;
  /* 0x0010 */ unsigned __int64 BugcheckParameter2;
  /* 0x0018 */ unsigned __int64 BugcheckParameter3;
  /* 0x0020 */ unsigned __int64 BugcheckParameter4;
} LOADER_BUGCHECK_PARAMETERS, *PLOADER_BUGCHECK_PARAMETERS; /* size: 0x0028 */


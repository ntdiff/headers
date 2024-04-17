typedef struct _RTL_USER_PROCESS_EXTENDED_PARAMETERS
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short NodeNumber;
  /* 0x0008 */ void* ProcessSecurityDescriptor;
  /* 0x0010 */ void* ThreadSecurityDescriptor;
  /* 0x0018 */ void* ParentProcess;
  /* 0x0020 */ void* DebugPort;
  /* 0x0028 */ void* TokenHandle;
  /* 0x0030 */ void* JobHandle;
} RTL_USER_PROCESS_EXTENDED_PARAMETERS, *PRTL_USER_PROCESS_EXTENDED_PARAMETERS; /* size: 0x0038 */


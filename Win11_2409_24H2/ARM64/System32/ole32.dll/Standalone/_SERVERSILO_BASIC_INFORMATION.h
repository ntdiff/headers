typedef enum _SERVERSILO_STATE
{
  SERVERSILO_INITING = 0,
  SERVERSILO_STARTED = 1,
  SERVERSILO_SHUTTING_DOWN = 2,
  SERVERSILO_TERMINATING = 3,
  SERVERSILO_TERMINATED = 4,
} SERVERSILO_STATE, *PSERVERSILO_STATE;

typedef struct _SERVERSILO_BASIC_INFORMATION
{
  /* 0x0000 */ unsigned long ServiceSessionId;
  /* 0x0004 */ enum _SERVERSILO_STATE State;
  /* 0x0008 */ long ExitStatus;
  /* 0x000c */ unsigned char Reserved;
  /* 0x0010 */ void* ApiSetSchema;
  /* 0x0018 */ void* HostApiSetSchema;
  /* 0x0020 */ unsigned long ContainerBuildNumber;
  /* 0x0024 */ unsigned long HostBuildNumber;
} SERVERSILO_BASIC_INFORMATION, *PSERVERSILO_BASIC_INFORMATION; /* size: 0x0028 */


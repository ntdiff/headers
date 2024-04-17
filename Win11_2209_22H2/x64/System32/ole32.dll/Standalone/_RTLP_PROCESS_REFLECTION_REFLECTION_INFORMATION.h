typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0008 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0010 */

typedef struct _RTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION
{
  /* 0x0000 */ void* ReflectionProcessHandle;
  /* 0x0008 */ void* ReflectionThreadHandle;
  /* 0x0010 */ struct _CLIENT_ID ReflectionClientId;
} RTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION, *PRTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION; /* size: 0x0020 */


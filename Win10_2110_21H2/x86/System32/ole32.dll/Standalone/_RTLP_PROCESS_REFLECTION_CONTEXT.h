typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0004 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0008 */

typedef struct _RTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION
{
  /* 0x0000 */ void* ReflectionProcessHandle;
  /* 0x0004 */ void* ReflectionThreadHandle;
  /* 0x0008 */ struct _CLIENT_ID ReflectionClientId;
} RTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION, *PRTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION; /* size: 0x0010 */

typedef struct _RTLP_PROCESS_REFLECTION_CONTEXT
{
  /* 0x0000 */ unsigned long ReflectionContextSize;
  /* 0x0004 */ unsigned long ReflectionFlags;
  /* 0x0008 */ void* ReflectionRoutine /* function */;
  /* 0x000c */ void* ReflectionParameter;
  /* 0x0010 */ void* ReflectedProcessCreatedEvent;
  /* 0x0014 */ void* ReflectedProcessHandlesDuplicatedEvent;
  /* 0x0018 */ void* ReflectionStartEvent;
  /* 0x001c */ struct _RTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION ReflectionInformation;
} RTLP_PROCESS_REFLECTION_CONTEXT, *PRTLP_PROCESS_REFLECTION_CONTEXT; /* size: 0x002c */


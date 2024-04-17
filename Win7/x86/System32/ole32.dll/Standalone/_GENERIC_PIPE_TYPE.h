typedef struct _GENERIC_PIPE_TYPE
{
  /* 0x0000 */ void* pfnPull /* function */;
  /* 0x0004 */ void* pfnPush /* function */;
  /* 0x0008 */ void* pfnAlloc /* function */;
  /* 0x000c */ char* pState;
} GENERIC_PIPE_TYPE, *PGENERIC_PIPE_TYPE; /* size: 0x0010 */


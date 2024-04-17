typedef struct _GENERIC_PIPE_TYPE
{
  /* 0x0000 */ void* pfnPull /* function */;
  /* 0x0008 */ void* pfnPush /* function */;
  /* 0x0010 */ void* pfnAlloc /* function */;
  /* 0x0018 */ char* pState;
} GENERIC_PIPE_TYPE, *PGENERIC_PIPE_TYPE; /* size: 0x0020 */


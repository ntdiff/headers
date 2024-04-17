typedef struct _CONTEXT_CHUNK
{
  /* 0x0000 */ long Offset;
  /* 0x0004 */ unsigned long Length;
} CONTEXT_CHUNK, *PCONTEXT_CHUNK; /* size: 0x0008 */

typedef struct _CONTEXT_EX
{
  /* 0x0000 */ struct _CONTEXT_CHUNK All;
  /* 0x0008 */ struct _CONTEXT_CHUNK Legacy;
  /* 0x0010 */ struct _CONTEXT_CHUNK XState;
  /* 0x0018 */ struct _CONTEXT_CHUNK KernelCet;
} CONTEXT_EX, *PCONTEXT_EX; /* size: 0x0020 */


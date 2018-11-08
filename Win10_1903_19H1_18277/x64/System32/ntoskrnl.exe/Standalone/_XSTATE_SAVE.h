typedef struct _XSTATE_CONTEXT
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ unsigned long Reserved1;
  /* 0x0010 */ struct _XSAVE_AREA* Area;
  /* 0x0018 */ void* Buffer;
} XSTATE_CONTEXT, *PXSTATE_CONTEXT; /* size: 0x0020 */

typedef struct _XSTATE_SAVE
{
  /* 0x0000 */ struct _XSTATE_SAVE* Prev;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x0010 */ unsigned char Level;
  /* 0x0018 */ struct _XSTATE_CONTEXT XStateContext;
} XSTATE_SAVE, *PXSTATE_SAVE; /* size: 0x0038 */


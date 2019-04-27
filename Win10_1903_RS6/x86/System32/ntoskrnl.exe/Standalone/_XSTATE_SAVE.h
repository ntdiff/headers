typedef struct _XSTATE_CONTEXT
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ unsigned long Reserved1;
  /* 0x0010 */ struct _XSAVE_AREA* Area;
  /* 0x0014 */ unsigned long Reserved2;
  /* 0x0018 */ void* Buffer;
  /* 0x001c */ unsigned long Reserved3;
} XSTATE_CONTEXT, *PXSTATE_CONTEXT; /* size: 0x0020 */

typedef struct _XSTATE_SAVE
{
  union
  {
    struct
    {
      /* 0x0000 */ __int64 Reserved1;
      /* 0x0008 */ unsigned long Reserved2;
      /* 0x000c */ struct _XSTATE_SAVE* Prev;
      /* 0x0010 */ struct _XSAVE_AREA* Reserved3;
      /* 0x0014 */ struct _KTHREAD* Thread;
      /* 0x0018 */ void* Reserved4;
      /* 0x001c */ unsigned char Level;
    }; /* size: 0x001d */
    /* 0x0000 */ struct _XSTATE_CONTEXT XStateContext;
  }; /* size: 0x0020 */
} XSTATE_SAVE, *PXSTATE_SAVE; /* size: 0x0020 */


typedef struct _TEB_ACTIVE_FRAME_CONTEXT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ const char* FrameName;
} TEB_ACTIVE_FRAME_CONTEXT, *PTEB_ACTIVE_FRAME_CONTEXT; /* size: 0x0008 */

typedef struct _TEB_ACTIVE_FRAME_CONTEXT_EX
{
  /* 0x0000 */ struct _TEB_ACTIVE_FRAME_CONTEXT BasicContext;
  /* 0x0008 */ const char* SourceLocation;
} TEB_ACTIVE_FRAME_CONTEXT_EX, *PTEB_ACTIVE_FRAME_CONTEXT_EX; /* size: 0x000c */


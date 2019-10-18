typedef struct _TEB_ACTIVE_FRAME_CONTEXT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0008 */ const char* FrameName;
} TEB_ACTIVE_FRAME_CONTEXT, *PTEB_ACTIVE_FRAME_CONTEXT; /* size: 0x0010 */


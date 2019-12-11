typedef struct _TEB_ACTIVE_FRAME
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0008 */ struct _TEB_ACTIVE_FRAME* Previous;
  /* 0x0010 */ const struct _TEB_ACTIVE_FRAME_CONTEXT* Context;
} TEB_ACTIVE_FRAME, *PTEB_ACTIVE_FRAME; /* size: 0x0018 */


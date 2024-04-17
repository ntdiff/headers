typedef struct _TEB_ACTIVE_FRAME
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ struct _TEB_ACTIVE_FRAME* Previous;
  /* 0x0008 */ const struct _TEB_ACTIVE_FRAME_CONTEXT* Context;
} TEB_ACTIVE_FRAME, *PTEB_ACTIVE_FRAME; /* size: 0x000c */

typedef struct _TEB_ACTIVE_FRAME_EX
{
  /* 0x0000 */ struct _TEB_ACTIVE_FRAME BasicFrame;
  /* 0x000c */ void* ExtensionIdentifier;
} TEB_ACTIVE_FRAME_EX, *PTEB_ACTIVE_FRAME_EX; /* size: 0x0010 */


typedef struct _NDR64_BIND_CONTEXT
{
  /* 0x0000 */ unsigned char HandleType;
  /* 0x0001 */ unsigned char Flags;
  /* 0x0002 */ unsigned short StackOffset;
  /* 0x0004 */ unsigned char RoutineIndex;
  /* 0x0005 */ unsigned char Ordinal;
} NDR64_BIND_CONTEXT, *PNDR64_BIND_CONTEXT; /* size: 0x0006 */

typedef struct _NDR64_BIND_AND_NOTIFY_EXTENSION
{
  /* 0x0000 */ struct _NDR64_BIND_CONTEXT Binding;
  /* 0x0006 */ unsigned short NotifyIndex;
} NDR64_BIND_AND_NOTIFY_EXTENSION, *PNDR64_BIND_AND_NOTIFY_EXTENSION; /* size: 0x0008 */


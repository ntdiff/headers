typedef struct _NDR64_BIND_PRIMITIVE
{
  /* 0x0000 */ unsigned char HandleType;
  /* 0x0001 */ unsigned char Flags;
  /* 0x0002 */ unsigned short StackOffset;
  /* 0x0004 */ unsigned short Reserved;
} NDR64_BIND_PRIMITIVE, *PNDR64_BIND_PRIMITIVE; /* size: 0x0006 */

typedef struct _NDR64_BIND_GENERIC
{
  /* 0x0000 */ unsigned char HandleType;
  /* 0x0001 */ unsigned char Flags;
  /* 0x0002 */ unsigned short StackOffset;
  /* 0x0004 */ unsigned char RoutineIndex;
  /* 0x0005 */ unsigned char Size;
} NDR64_BIND_GENERIC, *PNDR64_BIND_GENERIC; /* size: 0x0006 */

typedef struct _NDR64_BIND_CONTEXT
{
  /* 0x0000 */ unsigned char HandleType;
  /* 0x0001 */ unsigned char Flags;
  /* 0x0002 */ unsigned short StackOffset;
  /* 0x0004 */ unsigned char RoutineIndex;
  /* 0x0005 */ unsigned char Ordinal;
} NDR64_BIND_CONTEXT, *PNDR64_BIND_CONTEXT; /* size: 0x0006 */

typedef union _NDR64_BINDINGS
{
  union
  {
    /* 0x0000 */ struct _NDR64_BIND_PRIMITIVE Primitive;
    /* 0x0000 */ struct _NDR64_BIND_GENERIC Generic;
    /* 0x0000 */ struct _NDR64_BIND_CONTEXT Context;
  }; /* size: 0x0006 */
} NDR64_BINDINGS, *PNDR64_BINDINGS; /* size: 0x0006 */


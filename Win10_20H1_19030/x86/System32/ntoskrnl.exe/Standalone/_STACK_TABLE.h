typedef struct _STACK_TABLE
{
  /* 0x0000 */ unsigned short NumStackTraces;
  /* 0x0002 */ unsigned short TraceCapacity;
  /* 0x0004 */ struct _OBJECT_REF_TRACE* StackTrace[16];
  /* 0x0044 */ unsigned short StackTableHash[16381];
  /* 0x803e */ char __PADDING__[2];
} STACK_TABLE, *PSTACK_TABLE; /* size: 0x8040 */


typedef struct _STACK_TABLE
{
  /* 0x0000 */ unsigned short NumStackTraces;
  /* 0x0002 */ unsigned short TraceCapacity;
  /* 0x0008 */ struct _OBJECT_REF_TRACE* StackTrace[16];
  /* 0x0088 */ unsigned short StackTableHash[16381];
  /* 0x8082 */ char __PADDING__[6];
} STACK_TABLE, *PSTACK_TABLE; /* size: 0x8088 */


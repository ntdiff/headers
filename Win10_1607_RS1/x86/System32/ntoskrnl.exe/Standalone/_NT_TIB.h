typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0004 */ void* StackBase;
  /* 0x0008 */ void* StackLimit;
  /* 0x000c */ void* SubSystemTib;
  union
  {
    /* 0x0010 */ void* FiberData;
    /* 0x0010 */ unsigned long Version;
  }; /* size: 0x0004 */
  /* 0x0014 */ void* ArbitraryUserPointer;
  /* 0x0018 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x001c */


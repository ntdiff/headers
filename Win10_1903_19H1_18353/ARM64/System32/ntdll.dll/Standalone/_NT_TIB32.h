typedef struct _NT_TIB32
{
  /* 0x0000 */ unsigned long ExceptionList;
  /* 0x0004 */ unsigned long StackBase;
  /* 0x0008 */ unsigned long StackLimit;
  /* 0x000c */ unsigned long SubSystemTib;
  union
  {
    /* 0x0010 */ unsigned long FiberData;
    /* 0x0010 */ unsigned long Version;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long ArbitraryUserPointer;
  /* 0x0018 */ unsigned long Self;
} NT_TIB32, *PNT_TIB32; /* size: 0x001c */


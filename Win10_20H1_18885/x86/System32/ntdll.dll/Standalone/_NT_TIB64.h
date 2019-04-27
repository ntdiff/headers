typedef struct _NT_TIB64
{
  /* 0x0000 */ unsigned __int64 ExceptionList;
  /* 0x0008 */ unsigned __int64 StackBase;
  /* 0x0010 */ unsigned __int64 StackLimit;
  /* 0x0018 */ unsigned __int64 SubSystemTib;
  union
  {
    /* 0x0020 */ unsigned __int64 FiberData;
    /* 0x0020 */ unsigned long Version;
  }; /* size: 0x0008 */
  /* 0x0028 */ unsigned __int64 ArbitraryUserPointer;
  /* 0x0030 */ unsigned __int64 Self;
} NT_TIB64, *PNT_TIB64; /* size: 0x0038 */


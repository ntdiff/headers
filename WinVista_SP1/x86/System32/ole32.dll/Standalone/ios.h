typedef struct _CRT_CRITICAL_SECTION
{
  /* 0x0000 */ struct _CRT_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long Reserved;
} CRT_CRITICAL_SECTION, *PCRT_CRITICAL_SECTION; /* size: 0x0018 */

class ios
{
  union
  {
    /* 0x0000 */ const long basefield;
    /* 0x0000 */ const long adjustfield;
    struct
    {
      /* 0x0000 */ const long floatfield;
      /* 0x0004 */ class streambuf* bp;
      /* 0x0008 */ int state;
      /* 0x000c */ int ispecial;
      /* 0x0010 */ int ospecial;
      /* 0x0014 */ int isfx_special;
      /* 0x0018 */ int osfx_special;
      /* 0x001c */ int x_delbuf;
      /* 0x0020 */ class ostream* x_tie;
      /* 0x0024 */ long x_flags;
      /* 0x0028 */ int x_precision;
      /* 0x002c */ char x_fill;
      /* 0x0030 */ int x_width;
    }; /* size: 0x0031 */
    /* 0x0000 */ void* stdioflush /* function */;
    /* 0x0000 */ long x_maxbit;
    /* 0x0000 */ int x_curindex;
    /* 0x0000 */ int sunk_with_stdio;
    /* 0x0000 */ long x_statebuf[8];
    /* 0x0000 */ int fLockcInit;
    /* 0x0000 */ struct _CRT_CRITICAL_SECTION x_lockc;
  }; /* size: 0x0031 */
  /* 0x0034 */ int LockFlg;
  /* 0x0038 */ struct _CRT_CRITICAL_SECTION x_lock;
}; /* size: 0x0050 */


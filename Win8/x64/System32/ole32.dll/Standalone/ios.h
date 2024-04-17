typedef struct _CRT_CRITICAL_SECTION
{
  /* 0x0000 */ struct _CRT_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned long Reserved;
  /* 0x0024 */ long __PADDING__[1];
} CRT_CRITICAL_SECTION, *PCRT_CRITICAL_SECTION; /* size: 0x0028 */

class ios
{
  union
  {
    /* 0x0000 */ const long basefield;
    /* 0x0000 */ const long adjustfield;
    struct
    {
      /* 0x0000 */ const long floatfield;
      /* 0x0008 */ class streambuf* bp;
      /* 0x0010 */ int state;
      /* 0x0014 */ int ispecial;
      /* 0x0018 */ int ospecial;
      /* 0x001c */ int isfx_special;
      /* 0x0020 */ int osfx_special;
      /* 0x0024 */ int x_delbuf;
      /* 0x0028 */ class ostream* x_tie;
      /* 0x0030 */ long x_flags;
      /* 0x0034 */ int x_precision;
      /* 0x0038 */ char x_fill;
      /* 0x003c */ int x_width;
    }; /* size: 0x0039 */
    /* 0x0000 */ void* stdioflush /* function */;
    /* 0x0000 */ long x_maxbit;
    /* 0x0000 */ int x_curindex;
    /* 0x0000 */ int sunk_with_stdio;
    /* 0x0000 */ long x_statebuf[8];
    /* 0x0000 */ int fLockcInit;
    /* 0x0000 */ struct _CRT_CRITICAL_SECTION x_lockc;
  }; /* size: 0x0039 */
  /* 0x0040 */ int LockFlg;
  /* 0x0048 */ struct _CRT_CRITICAL_SECTION x_lock;
}; /* size: 0x0070 */


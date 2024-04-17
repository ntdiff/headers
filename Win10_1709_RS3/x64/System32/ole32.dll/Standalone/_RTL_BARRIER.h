typedef struct _RTL_BARRIER
{
  union
  {
    struct
    {
      /* 0x0000 */ volatile long Barrier;
      /* 0x0004 */ long LeftBarrier;
      /* 0x0008 */ void* WaitEvent[2];
      /* 0x0018 */ long TotalProcessors;
      /* 0x001c */ unsigned long Spins;
    }; /* size: 0x0020 */
    struct
    {
      /* 0x0000 */ unsigned long Reserved1;
      /* 0x0004 */ unsigned long Reserved2;
      /* 0x0008 */ unsigned __int64 Reserved3[2];
      /* 0x0018 */ unsigned long Reserved4;
      /* 0x001c */ unsigned long Reserved5;
    } /* size: 0x0020 */ DUMMYRESERVEDSTRUCTNAME;
  }; /* size: 0x0020 */
} RTL_BARRIER, *PRTL_BARRIER; /* size: 0x0020 */


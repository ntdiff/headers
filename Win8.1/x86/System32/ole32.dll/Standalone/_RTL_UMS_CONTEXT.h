typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _FLOATING_SAVE_AREA
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
  /* 0x006c */ unsigned long Spare0;
} FLOATING_SAVE_AREA, *PFLOATING_SAVE_AREA; /* size: 0x0070 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Dr0;
  /* 0x0008 */ unsigned long Dr1;
  /* 0x000c */ unsigned long Dr2;
  /* 0x0010 */ unsigned long Dr3;
  /* 0x0014 */ unsigned long Dr6;
  /* 0x0018 */ unsigned long Dr7;
  /* 0x001c */ struct _FLOATING_SAVE_AREA FloatSave;
  /* 0x008c */ unsigned long SegGs;
  /* 0x0090 */ unsigned long SegFs;
  /* 0x0094 */ unsigned long SegEs;
  /* 0x0098 */ unsigned long SegDs;
  /* 0x009c */ unsigned long Edi;
  /* 0x00a0 */ unsigned long Esi;
  /* 0x00a4 */ unsigned long Ebx;
  /* 0x00a8 */ unsigned long Edx;
  /* 0x00ac */ unsigned long Ecx;
  /* 0x00b0 */ unsigned long Eax;
  /* 0x00b4 */ unsigned long Ebp;
  /* 0x00b8 */ unsigned long Eip;
  /* 0x00bc */ unsigned long SegCs;
  /* 0x00c0 */ unsigned long EFlags;
  /* 0x00c4 */ unsigned long Esp;
  /* 0x00c8 */ unsigned long SegSs;
  /* 0x00cc */ unsigned char ExtendedRegisters[512];
} CONTEXT, *PCONTEXT; /* size: 0x02cc */

typedef struct _RTL_UMS_CONTEXT
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY Link;
  /* 0x0004 */ struct _CONTEXT Context;
  /* 0x02d0 */ void* Teb;
  /* 0x02d4 */ void* UserContext;
  union
  {
    struct /* bitfield */
    {
      /* 0x02d8 */ volatile unsigned long ScheduledThread : 1; /* bit position: 0 */
      /* 0x02d8 */ volatile unsigned long Suspended : 1; /* bit position: 1 */
      /* 0x02d8 */ volatile unsigned long VolatileContext : 1; /* bit position: 2 */
      /* 0x02d8 */ volatile unsigned long Terminated : 1; /* bit position: 3 */
      /* 0x02d8 */ volatile unsigned long DebugActive : 1; /* bit position: 4 */
      /* 0x02d8 */ volatile unsigned long RunningOnSelfThread : 1; /* bit position: 5 */
      /* 0x02d8 */ volatile unsigned long DenyRunningOnSelfThread : 1; /* bit position: 6 */
    }; /* bitfield */
    /* 0x02d8 */ volatile long Flags;
  }; /* size: 0x0004 */
  union
  {
    struct /* bitfield */
    {
      /* 0x02e0 */ volatile unsigned __int64 KernelUpdateLock : 2; /* bit position: 0 */
      /* 0x02e0 */ volatile unsigned __int64 PrimaryClientID : 62; /* bit position: 2 */
    }; /* bitfield */
    /* 0x02e0 */ volatile unsigned __int64 ContextLock;
  }; /* size: 0x0008 */
  /* 0x02e8 */ struct _RTL_UMS_CONTEXT* PrimaryUmsContext;
  /* 0x02ec */ unsigned long SwitchCount;
  /* 0x02f0 */ unsigned long KernelYieldCount;
  /* 0x02f4 */ unsigned long MixedYieldCount;
  /* 0x02f8 */ unsigned long YieldCount;
  /* 0x02fc */ long __PADDING__[1];
} RTL_UMS_CONTEXT, *PRTL_UMS_CONTEXT; /* size: 0x0300 */


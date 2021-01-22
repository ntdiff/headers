typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KAPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char SpareByte0;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char SpareByte1;
  /* 0x0004 */ unsigned long SpareLong0;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x0010 */ struct _LIST_ENTRY ApcListEntry;
  union
  {
    struct
    {
      /* 0x0020 */ void* KernelRoutine /* function */;
      /* 0x0028 */ void* RundownRoutine /* function */;
      /* 0x0030 */ void* NormalRoutine /* function */;
    }; /* size: 0x0018 */
    /* 0x0020 */ void* Reserved[3];
  }; /* size: 0x0018 */
  /* 0x0038 */ void* NormalContext;
  /* 0x0040 */ void* SystemArgument1;
  /* 0x0048 */ void* SystemArgument2;
  /* 0x0050 */ char ApcStateIndex;
  /* 0x0051 */ char ApcMode;
  /* 0x0052 */ unsigned char Inserted;
  /* 0x0053 */ char __PADDING__[5];
} KAPC, *PKAPC; /* size: 0x0058 */

typedef struct _KEMUL_CONTROL_BLOCK
{
  /* 0x0000 */ struct _CHPEV2_CPUAREA_INFO* CpuAreaInfo;
  /* 0x0008 */ struct _LIST_ENTRY DeferredContextApcs;
  /* 0x0018 */ struct _KAPC SuspendUnSimulateApc;
  union
  {
    union
    {
      /* 0x0070 */ unsigned __int64 Value;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0070 */ unsigned __int64 UnSimulating : 1; /* bit position: 0 */
          /* 0x0070 */ unsigned __int64 SchedulerAPC : 1; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0008 */ Bits;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Flags;
  /* 0x0078 */ char PendingSuspendCount;
  /* 0x0079 */ char __PADDING__[7];
} KEMUL_CONTROL_BLOCK, *PKEMUL_CONTROL_BLOCK; /* size: 0x0080 */


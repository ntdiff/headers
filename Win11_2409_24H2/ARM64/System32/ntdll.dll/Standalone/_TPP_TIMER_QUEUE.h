typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

typedef struct _TPP_PH
{
  /* 0x0000 */ struct _TPP_PH_LINKS* Root;
} TPP_PH, *PTPP_PH; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _TP_TASK
{
  /* 0x0000 */ const struct _TP_TASK_CALLBACKS* Callbacks;
  /* 0x0008 */ unsigned long NumaNode;
  /* 0x000c */ unsigned char IdealProcessor;
  /* 0x0010 */ struct _LIST_ENTRY ListEntry;
} TP_TASK, *PTP_TASK; /* size: 0x0020 */

typedef struct _TP_DIRECT
{
  /* 0x0000 */ struct _TP_TASK Task;
  /* 0x0020 */ unsigned __int64 Lock;
  /* 0x0028 */ struct _LIST_ENTRY IoCompletionInformationList;
  /* 0x0038 */ void* Callback /* function */;
  /* 0x0040 */ unsigned long NumaNode;
  /* 0x0044 */ unsigned char IdealProcessor;
  /* 0x0045 */ char __PADDING__[3];
} TP_DIRECT, *PTP_DIRECT; /* size: 0x0048 */

typedef struct _TPP_TIMER_SUBQUEUE
{
  /* 0x0000 */ __int64 Expiration;
  /* 0x0008 */ struct _TPP_PH WindowStart;
  /* 0x0010 */ struct _TPP_PH WindowEnd;
  /* 0x0018 */ void* Timer;
  /* 0x0020 */ void* TimerPkt;
  /* 0x0028 */ struct _TP_DIRECT Direct;
  /* 0x0070 */ unsigned long ExpirationWindow;
  /* 0x0074 */ long __PADDING__[1];
} TPP_TIMER_SUBQUEUE, *PTPP_TIMER_SUBQUEUE; /* size: 0x0078 */

typedef struct _TPP_TIMER_QUEUE
{
  /* 0x0000 */ struct _RTL_SRWLOCK Lock;
  /* 0x0008 */ struct _TPP_TIMER_SUBQUEUE AbsoluteQueue;
  /* 0x0080 */ struct _TPP_TIMER_SUBQUEUE RelativeQueue;
  /* 0x00f8 */ long AllocatedTimerCount;
  /* 0x00fc */ long __PADDING__[1];
} TPP_TIMER_QUEUE, *PTPP_TIMER_QUEUE; /* size: 0x0100 */


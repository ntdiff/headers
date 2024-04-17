typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _KTIMER_TABLE_ENTRY
{
  /* 0x0000 */ unsigned long Lock;
  /* 0x0004 */ struct _LIST_ENTRY Entry;
  /* 0x0010 */ union _ULARGE_INTEGER Time;
} KTIMER_TABLE_ENTRY, *PKTIMER_TABLE_ENTRY; /* size: 0x0018 */

typedef struct _KTIMER_TABLE_STATE
{
  /* 0x0000 */ unsigned __int64 LastTimerExpiration[1];
  /* 0x0008 */ unsigned long LastTimerHand[1];
  /* 0x000c */ long __PADDING__[1];
} KTIMER_TABLE_STATE, *PKTIMER_TABLE_STATE; /* size: 0x0010 */

typedef struct _KTIMER_TABLE
{
  /* 0x0000 */ struct _KTIMER* TimerExpiry[16];
  /* 0x0040 */ struct _KTIMER_TABLE_ENTRY TimerEntries[256][1];
  /* 0x1840 */ struct _KTIMER_TABLE_STATE TableState;
} KTIMER_TABLE, *PKTIMER_TABLE; /* size: 0x1850 */


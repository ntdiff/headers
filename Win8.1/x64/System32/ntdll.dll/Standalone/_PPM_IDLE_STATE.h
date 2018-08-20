typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[20];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x00a8 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PPM_VETO_ACCOUNTING
{
  /* 0x0000 */ volatile long VetoPresent;
  /* 0x0008 */ struct _LIST_ENTRY VetoListHead;
} PPM_VETO_ACCOUNTING, *PPPM_VETO_ACCOUNTING; /* size: 0x0018 */

typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ struct _KAFFINITY_EX DomainMembers;
  /* 0x00a8 */ unsigned long Latency;
  /* 0x00ac */ unsigned long BreakEvenDuration;
  /* 0x00b0 */ unsigned long Power;
  /* 0x00b4 */ unsigned long StateFlags;
  /* 0x00b8 */ struct _PPM_VETO_ACCOUNTING VetoAccounting;
  /* 0x00d0 */ unsigned char StateType;
  /* 0x00d1 */ unsigned char InterruptsEnabled;
  /* 0x00d2 */ unsigned char Interruptible;
  /* 0x00d3 */ unsigned char ContextRetained;
  /* 0x00d4 */ unsigned char CacheCoherent;
  /* 0x00d5 */ unsigned char WakesSpuriously;
  /* 0x00d6 */ unsigned char PlatformOnly;
  /* 0x00d7 */ unsigned char NoCState;
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x00d8 */


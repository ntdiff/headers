typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[20];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x00a8 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PPM_VETO_ACCOUNTING
{
  /* 0x0000 */ volatile long VetoPresent;
  /* 0x0008 */ struct _LIST_ENTRY VetoListHead;
  /* 0x0018 */ unsigned char CsAccountingBlocks;
  /* 0x0019 */ unsigned char BlocksDrips;
  /* 0x001c */ unsigned long PreallocatedVetoCount;
  /* 0x0020 */ struct _PPM_VETO_ENTRY* PreallocatedVetoList;
} PPM_VETO_ACCOUNTING, *PPPM_VETO_ACCOUNTING; /* size: 0x0028 */

typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ struct _KAFFINITY_EX DomainMembers;
  /* 0x00a8 */ struct _UNICODE_STRING Name;
  /* 0x00b8 */ unsigned long Latency;
  /* 0x00bc */ unsigned long BreakEvenDuration;
  /* 0x00c0 */ unsigned long Power;
  /* 0x00c4 */ unsigned long StateFlags;
  /* 0x00c8 */ struct _PPM_VETO_ACCOUNTING VetoAccounting;
  /* 0x00f0 */ unsigned char StateType;
  /* 0x00f1 */ unsigned char InterruptsEnabled;
  /* 0x00f2 */ unsigned char Interruptible;
  /* 0x00f3 */ unsigned char ContextRetained;
  /* 0x00f4 */ unsigned char CacheCoherent;
  /* 0x00f5 */ unsigned char WakesSpuriously;
  /* 0x00f6 */ unsigned char PlatformOnly;
  /* 0x00f7 */ unsigned char NoCState;
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x00f8 */


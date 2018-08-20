typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long Bitmap[1];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PPM_VETO_ACCOUNTING
{
  /* 0x0000 */ volatile long VetoPresent;
  /* 0x0004 */ struct _LIST_ENTRY VetoListHead;
  /* 0x000c */ unsigned long PreallocatedVetoCount;
  /* 0x0010 */ struct _PPM_VETO_ENTRY* PreallocatedVetoList;
} PPM_VETO_ACCOUNTING, *PPPM_VETO_ACCOUNTING; /* size: 0x0014 */

typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ struct _KAFFINITY_EX DomainMembers;
  /* 0x000c */ struct _UNICODE_STRING Name;
  /* 0x0014 */ unsigned long Latency;
  /* 0x0018 */ unsigned long BreakEvenDuration;
  /* 0x001c */ unsigned long Power;
  /* 0x0020 */ unsigned long StateFlags;
  /* 0x0024 */ struct _PPM_VETO_ACCOUNTING VetoAccounting;
  /* 0x0038 */ unsigned char StateType;
  /* 0x0039 */ unsigned char InterruptsEnabled;
  /* 0x003a */ unsigned char Interruptible;
  /* 0x003b */ unsigned char ContextRetained;
  /* 0x003c */ unsigned char CacheCoherent;
  /* 0x003d */ unsigned char WakesSpuriously;
  /* 0x003e */ unsigned char PlatformOnly;
  /* 0x003f */ unsigned char NoCState;
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x0040 */


typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 Bitmap[1];
    /* 0x0008 */ unsigned __int64 StaticBitmap[32];
  }; /* size: 0x0100 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0108 */

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
  /* 0x0108 */ struct _UNICODE_STRING Name;
  /* 0x0118 */ unsigned long Latency;
  /* 0x011c */ unsigned long BreakEvenDuration;
  /* 0x0120 */ unsigned long Power;
  /* 0x0124 */ unsigned long StateFlags;
  /* 0x0128 */ struct _PPM_VETO_ACCOUNTING VetoAccounting;
  /* 0x0150 */ unsigned char StateType;
  /* 0x0151 */ unsigned char InterruptsEnabled;
  /* 0x0152 */ unsigned char Interruptible;
  /* 0x0153 */ unsigned char ContextRetained;
  /* 0x0154 */ unsigned char CacheCoherent;
  /* 0x0155 */ unsigned char WakesSpuriously;
  /* 0x0156 */ unsigned char PlatformOnly;
  /* 0x0157 */ unsigned char NoCState;
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x0158 */


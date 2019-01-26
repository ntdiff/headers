typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PPM_VETO_ACCOUNTING
{
  /* 0x0000 */ volatile long VetoPresent;
  /* 0x0004 */ struct _LIST_ENTRY VetoListHead;
  /* 0x000c */ unsigned char CsAccountingBlocks;
  /* 0x000d */ unsigned char BlocksDrips;
  /* 0x0010 */ unsigned long PreallocatedVetoCount;
  /* 0x0014 */ struct _PPM_VETO_ENTRY* PreallocatedVetoList;
} PPM_VETO_ACCOUNTING, *PPPM_VETO_ACCOUNTING; /* size: 0x0018 */

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
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef union _PPM_COORDINATED_SYNCHRONIZATION
{
  union
  {
    /* 0x0000 */ long AsLong;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnterProcessor : 12; /* bit position: 0 */
      /* 0x0000 */ unsigned long ExitProcessor : 12; /* bit position: 12 */
      /* 0x0000 */ unsigned long Transition : 2; /* bit position: 24 */
      /* 0x0000 */ unsigned long Entered : 1; /* bit position: 26 */
      /* 0x0000 */ unsigned long EntryPriority : 5; /* bit position: 27 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PPM_COORDINATED_SYNCHRONIZATION, *PPPM_COORDINATED_SYNCHRONIZATION; /* size: 0x0004 */

typedef struct _PPM_PLATFORM_STATE
{
  /* 0x0000 */ unsigned __int64 LevelId;
  /* 0x0008 */ unsigned long Latency;
  /* 0x000c */ unsigned long BreakEvenDuration;
  /* 0x0010 */ struct _PPM_VETO_ACCOUNTING VetoAccounting;
  /* 0x0028 */ unsigned char TransitionDebugger;
  /* 0x0029 */ unsigned char Platform;
  /* 0x002c */ unsigned long DependencyListCount;
  /* 0x0030 */ struct _KAFFINITY_EX Processors;
  /* 0x003c */ struct _UNICODE_STRING Name;
  /* 0x0044 */ struct _PPM_SELECTION_DEPENDENCY* DependencyLists;
  /* 0x0048 */ volatile union _PPM_COORDINATED_SYNCHRONIZATION Synchronization;
  /* 0x0050 */ volatile unsigned __int64 EnterTime;
  union
  {
    /* 0x0080 */ volatile long RefCount;
    /* 0x0080 */ unsigned char CacheAlign0[64];
  }; /* size: 0x0040 */
} PPM_PLATFORM_STATE, *PPPM_PLATFORM_STATE; /* size: 0x00c0 */

typedef struct _PPM_PLATFORM_STATES
{
  /* 0x0000 */ unsigned long StateCount;
  /* 0x0004 */ unsigned long InterfaceVersion;
  /* 0x0008 */ unsigned long ProcessorCount;
  /* 0x000c */ unsigned char CoordinatedInterface;
  /* 0x0010 */ void* IdleTest /* function */;
  /* 0x0014 */ void* IdlePreExecute /* function */;
  /* 0x0018 */ void* IdleComplete /* function */;
  /* 0x001c */ void* QueryPlatformStateResidency /* function */;
  /* 0x0020 */ struct _PLATFORM_IDLE_ACCOUNTING* Accounting;
  /* 0x0024 */ unsigned char DeepSleepEnabled;
  /* 0x0040 */ struct _PPM_PLATFORM_STATE State[1];
} PPM_PLATFORM_STATES, *PPPM_PLATFORM_STATES; /* size: 0x0100 */


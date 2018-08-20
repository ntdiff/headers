typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PPM_VETO_ACCOUNTING
{
  /* 0x0000 */ volatile long VetoPresent;
  /* 0x0008 */ struct _LIST_ENTRY VetoListHead;
  /* 0x0018 */ unsigned long PreallocatedVetoCount;
  /* 0x0020 */ struct _PPM_VETO_ENTRY* PreallocatedVetoList;
} PPM_VETO_ACCOUNTING, *PPPM_VETO_ACCOUNTING; /* size: 0x0028 */

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
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef union _PPM_COORDINATED_SYNCHRONIZATION
{
  union
  {
    /* 0x0000 */ long AsLong;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnterProcessor : 14; /* bit position: 0 */
      /* 0x0000 */ unsigned long ExitProcessor : 14; /* bit position: 14 */
      /* 0x0000 */ unsigned long Transition : 2; /* bit position: 28 */
      /* 0x0000 */ unsigned long Entered : 1; /* bit position: 30 */
      /* 0x0000 */ unsigned long Reserved : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PPM_COORDINATED_SYNCHRONIZATION, *PPPM_COORDINATED_SYNCHRONIZATION; /* size: 0x0004 */

typedef struct _PPM_PLATFORM_STATE
{
  /* 0x0000 */ unsigned long Latency;
  /* 0x0004 */ unsigned long BreakEvenDuration;
  /* 0x0008 */ struct _PPM_VETO_ACCOUNTING VetoAccounting;
  /* 0x0030 */ unsigned char TransitionDebugger;
  /* 0x0031 */ unsigned char Platform;
  /* 0x0034 */ unsigned long DependencyListCount;
  /* 0x0038 */ struct _KAFFINITY_EX Processors;
  /* 0x00e0 */ struct _UNICODE_STRING Name;
  /* 0x00f0 */ struct _PPM_SELECTION_DEPENDENCY* DependencyLists;
  /* 0x00f8 */ volatile union _PPM_COORDINATED_SYNCHRONIZATION Synchronization;
  /* 0x0100 */ volatile unsigned __int64 EnterTime;
  union
  {
    /* 0x0140 */ volatile long RefCount;
    /* 0x0140 */ unsigned char CacheAlign0[64];
  }; /* size: 0x0040 */
} PPM_PLATFORM_STATE, *PPPM_PLATFORM_STATE; /* size: 0x0180 */

typedef struct _PPM_PLATFORM_STATES
{
  /* 0x0000 */ unsigned long StateCount;
  /* 0x0004 */ unsigned long InterfaceVersion;
  /* 0x0008 */ unsigned long ProcessorCount;
  /* 0x000c */ unsigned char CoordinatedInterface;
  /* 0x0010 */ void* IdleTest /* function */;
  /* 0x0018 */ void* IdlePreExecute /* function */;
  /* 0x0020 */ void* IdleComplete /* function */;
  /* 0x0028 */ void* QueryPlatformStateResidency /* function */;
  /* 0x0030 */ struct _PLATFORM_IDLE_ACCOUNTING* Accounting;
  /* 0x0040 */ struct _PPM_PLATFORM_STATE State[1];
} PPM_PLATFORM_STATES, *PPPM_PLATFORM_STATES; /* size: 0x01c0 */


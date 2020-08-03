typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EXT_ENV_SPINLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned __int64 Lock;
  /* 0x0018 */ unsigned char OldIrql;
  /* 0x0019 */ char __PADDING__[7];
} EXT_ENV_SPINLOCK, *PEXT_ENV_SPINLOCK; /* size: 0x0020 */

typedef struct _GITS_TABLE_INFO
{
  /* 0x0000 */ union _LARGE_INTEGER PhysicalAddress;
  /* 0x0008 */ void* VirtualAddress;
  /* 0x0010 */ unsigned long AllocationSize;
  /* 0x0014 */ unsigned long Alignment;
  /* 0x0018 */ unsigned long EntrySize;
  /* 0x001c */ unsigned char TwoLevelTable;
  /* 0x0020 */ struct _EXT_ENV_SPINLOCK Lock;
} GITS_TABLE_INFO, *PGITS_TABLE_INFO; /* size: 0x0040 */

typedef struct _GITS_REMAPPING_TABLE
{
  /* 0x0000 */ struct _GITS_TABLE_INFO IttInfo;
  /* 0x0040 */ unsigned char Allocated;
  /* 0x0044 */ unsigned long DeviceId;
  /* 0x0048 */ unsigned long LpiNumber;
  /* 0x004c */ unsigned long EventId;
  /* 0x0050 */ unsigned long Icid;
  /* 0x0058 */ void* ItsData;
} GITS_REMAPPING_TABLE, *PGITS_REMAPPING_TABLE; /* size: 0x0060 */


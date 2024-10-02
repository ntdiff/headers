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

typedef enum _HAL_EXTENSION_ENVIRONMENT
{
  HalExtEnvironmentNative = 0,
  HalExtEnvironmentVirtualRoot = 1,
  HalExtEnvironmentVirtualMachine = 2,
  HalExtEnvironmentHypervisor = 3,
  HalExtEnvironmentSK = 4,
} HAL_EXTENSION_ENVIRONMENT, *PHAL_EXTENSION_ENVIRONMENT;

typedef union _GITS_TYPER_REGISTER
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Physical : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Virtual : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 CCT : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 IMP_DEF : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 ITT_entry_size : 4; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 ID_Bits : 5; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Devbits : 5; /* bit position: 13 */
      /* 0x0000 */ unsigned __int64 SEIS : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned __int64 PTA : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned __int64 Reserved23_20 : 4; /* bit position: 20 */
      /* 0x0000 */ unsigned __int64 HCC : 8; /* bit position: 24 */
      /* 0x0000 */ unsigned __int64 CIDbits : 4; /* bit position: 32 */
      /* 0x0000 */ unsigned __int64 CIL : 1; /* bit position: 36 */
      /* 0x0000 */ unsigned __int64 VMOVP : 1; /* bit position: 37 */
      /* 0x0000 */ unsigned __int64 Reserved63_38 : 26; /* bit position: 38 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 AsULONGLONG;
  }; /* size: 0x0008 */
} GITS_TYPER_REGISTER, *PGITS_TYPER_REGISTER; /* size: 0x0008 */

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

typedef struct _ITS_DATA
{
  /* 0x0000 */ union _LARGE_INTEGER ItsUnitBase;
  /* 0x0008 */ void* ItsUnit;
  /* 0x0010 */ unsigned char Version;
  /* 0x0011 */ unsigned char Initialized;
  /* 0x0014 */ enum _HAL_EXTENSION_ENVIRONMENT Mode;
  /* 0x0018 */ unsigned long Identifier;
  /* 0x001c */ unsigned long HackFlags;
  /* 0x0020 */ union _GITS_TYPER_REGISTER Typer;
  /* 0x0028 */ struct _GITS_TABLE_INFO CommandTable;
  /* 0x0068 */ struct _GITS_TABLE_INFO DeviceTable;
  /* 0x00a8 */ struct _GITS_TABLE_INFO CollectionTable;
  /* 0x00e8 */ unsigned long CollectionEntryCount;
  /* 0x00f0 */ long* CollectionMapped;
  /* 0x00f8 */ void* CrashdumpItsUnit;
} ITS_DATA, *PITS_DATA; /* size: 0x0100 */


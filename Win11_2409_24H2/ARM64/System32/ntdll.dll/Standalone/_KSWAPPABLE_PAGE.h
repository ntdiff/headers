typedef union _KSWAPPABLE_PAGE_REF_COUNT
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Resident : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 RefCount : 63; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KSWAPPABLE_PAGE_REF_COUNT, *PKSWAPPABLE_PAGE_REF_COUNT; /* size: 0x0008 */

typedef struct _MDL
{
  /* 0x0000 */ struct _MDL* Next;
  /* 0x0008 */ short Size;
  /* 0x000a */ short MdlFlags;
  /* 0x000c */ unsigned short AllocationProcessorNumber;
  /* 0x000e */ unsigned short Reserved;
  /* 0x0010 */ struct _EPROCESS* Process;
  /* 0x0018 */ void* MappedSystemVa;
  /* 0x0020 */ void* StartVa;
  /* 0x0028 */ unsigned long ByteCount;
  /* 0x002c */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x0030 */

typedef struct _KSWAPPABLE_PAGE
{
  /* 0x0000 */ void* RegionStart;
  /* 0x0008 */ unsigned __int64 TransitionLock;
  /* 0x0010 */ volatile union _KSWAPPABLE_PAGE_REF_COUNT LockCount;
  /* 0x0018 */ struct _MDL Mdl;
  /* 0x0048 */ unsigned __int64 PageNumber;
} KSWAPPABLE_PAGE, *PKSWAPPABLE_PAGE; /* size: 0x0050 */


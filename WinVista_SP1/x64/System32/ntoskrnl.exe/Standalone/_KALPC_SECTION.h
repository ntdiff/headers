typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KALPC_SECTION
{
  union // _TAG_UNNAMED_150
  {
    struct // _TAG_UNNAMED_151
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long Internal : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long Secure : 1; /* bit position: 1 */
      }; /* bitfield */
    } /* size: 0x0004 */ s1;
  } /* size: 0x0004 */ u1;
  /* 0x0008 */ void* SectionObject;
  /* 0x0010 */ unsigned __int64 Size;
  /* 0x0018 */ struct _ALPC_HANDLE_TABLE* HandleTable;
  /* 0x0020 */ void* SectionHandle;
  /* 0x0028 */ struct _EPROCESS* OwnerProcess;
  /* 0x0030 */ struct _ALPC_PORT* OwnerPort;
  /* 0x0038 */ unsigned long NumberOfRegions;
  /* 0x0040 */ struct _LIST_ENTRY RegionListHead;
} KALPC_SECTION, *PKALPC_SECTION; /* size: 0x0050 */


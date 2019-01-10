typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KALPC_SECTION
{
  /* 0x0000 */ void* SectionObject;
  /* 0x0008 */ unsigned __int64 Size;
  /* 0x0010 */ struct _ALPC_HANDLE_TABLE* HandleTable;
  /* 0x0018 */ void* SectionHandle;
  /* 0x0020 */ struct _EPROCESS* OwnerProcess;
  /* 0x0028 */ struct _ALPC_PORT* OwnerPort;
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0030 */ unsigned long Internal : 1; /* bit position: 0 */
        /* 0x0030 */ unsigned long Secure : 1; /* bit position: 1 */
      }; /* bitfield */
    } /* size: 0x0004 */ s1;
  } /* size: 0x0004 */ u1;
  /* 0x0034 */ unsigned long NumberOfRegions;
  /* 0x0038 */ struct _LIST_ENTRY RegionListHead;
} KALPC_SECTION, *PKALPC_SECTION; /* size: 0x0048 */


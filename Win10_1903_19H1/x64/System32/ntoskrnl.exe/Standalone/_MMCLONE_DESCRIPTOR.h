typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _SLIST_ENTRY
{
  /* 0x0000 */ struct _SLIST_ENTRY* Next;
  /* 0x0008 */ long __PADDING__[2];
} SLIST_ENTRY, *PSLIST_ENTRY; /* size: 0x0010 */

typedef struct _MMCLONE_DESCRIPTOR
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE CloneNode;
    /* 0x0000 */ struct _MMCLONE_DESCRIPTOR* Next;
  }; /* size: 0x0018 */
  /* 0x0018 */ struct _MMCLONE_BLOCK* StartingCloneBlock;
  /* 0x0020 */ struct _MMCLONE_BLOCK* EndingCloneBlock;
  /* 0x0028 */ unsigned __int64 NumberOfPtes;
  /* 0x0030 */ volatile unsigned __int64 NumberOfReferences;
  /* 0x0038 */ struct _MMCLONE_HEADER* CloneHeader;
  /* 0x0040 */ unsigned __int64 NonPagedPoolQuotaCharge;
  /* 0x0050 */ struct _SLIST_ENTRY DeleteList;
  /* 0x0060 */ unsigned __int64 NestingLevel;
  /* 0x0068 */ long __PADDING__[2];
} MMCLONE_DESCRIPTOR, *PMMCLONE_DESCRIPTOR; /* size: 0x0070 */


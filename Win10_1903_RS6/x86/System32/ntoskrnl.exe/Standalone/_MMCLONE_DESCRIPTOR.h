typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _MMCLONE_DESCRIPTOR
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE CloneNode;
    /* 0x0000 */ struct _MMCLONE_DESCRIPTOR* Next;
  }; /* size: 0x000c */
  /* 0x000c */ struct _MMCLONE_BLOCK* StartingCloneBlock;
  /* 0x0010 */ struct _MMCLONE_BLOCK* EndingCloneBlock;
  /* 0x0014 */ unsigned long NumberOfPtes;
  /* 0x0018 */ volatile unsigned long NumberOfReferences;
  /* 0x001c */ struct _MMCLONE_HEADER* CloneHeader;
  /* 0x0020 */ unsigned long NonPagedPoolQuotaCharge;
  /* 0x0024 */ struct _SINGLE_LIST_ENTRY DeleteList;
  /* 0x0028 */ unsigned __int64 NestingLevel;
} MMCLONE_DESCRIPTOR, *PMMCLONE_DESCRIPTOR; /* size: 0x0030 */


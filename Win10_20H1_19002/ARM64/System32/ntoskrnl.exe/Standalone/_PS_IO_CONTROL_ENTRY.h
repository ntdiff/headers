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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef struct _PS_IO_CONTROL_ENTRY
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE VolumeTreeNode;
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY FreeListEntry;
      /* 0x0010 */ unsigned __int64 ReservedForParentValue;
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0018 */ unsigned __int64 VolumeKey;
  /* 0x0020 */ struct _EX_RUNDOWN_REF Rundown;
  /* 0x0028 */ void* IoControl;
  /* 0x0030 */ void* VolumeIoAttribution;
} PS_IO_CONTROL_ENTRY, *PPS_IO_CONTROL_ENTRY; /* size: 0x0038 */


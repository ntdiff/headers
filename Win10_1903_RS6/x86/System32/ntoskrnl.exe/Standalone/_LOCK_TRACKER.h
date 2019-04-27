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

typedef struct _LOCK_TRACKER
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE LockTrackerNode;
  /* 0x000c */ struct _MDL* Mdl;
  /* 0x0010 */ void* StartVa;
  /* 0x0014 */ unsigned long Count;
  /* 0x0018 */ unsigned long Offset;
  /* 0x001c */ unsigned long Length;
  /* 0x0020 */ unsigned long Who;
  /* 0x0024 */ unsigned long Hash;
  /* 0x0028 */ unsigned long Page;
  /* 0x002c */ void* StackTrace[8];
  /* 0x004c */ struct _EPROCESS* Process;
} LOCK_TRACKER, *PLOCK_TRACKER; /* size: 0x0050 */


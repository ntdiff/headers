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

typedef struct _LOCK_TRACKER
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE LockTrackerNode;
  /* 0x0018 */ struct _MDL* Mdl;
  /* 0x0020 */ void* StartVa;
  /* 0x0028 */ unsigned __int64 Count;
  /* 0x0030 */ unsigned long Offset;
  /* 0x0034 */ unsigned long Length;
  /* 0x0038 */ unsigned long Who;
  /* 0x003c */ unsigned long Hash;
  /* 0x0040 */ unsigned __int64 Page;
  /* 0x0048 */ void* StackTrace[8];
  /* 0x0088 */ struct _EPROCESS* Process;
} LOCK_TRACKER, *PLOCK_TRACKER; /* size: 0x0090 */


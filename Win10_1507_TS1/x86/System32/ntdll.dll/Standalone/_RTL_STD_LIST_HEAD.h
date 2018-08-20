typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

typedef struct _RTL_STACK_DATABASE_LOCK
{
  /* 0x0000 */ struct _RTL_SRWLOCK Lock;
} RTL_STACK_DATABASE_LOCK, *PRTL_STACK_DATABASE_LOCK; /* size: 0x0004 */

typedef struct _RTL_STD_LIST_HEAD
{
  /* 0x0000 */ struct _RTL_STD_LIST_ENTRY* Next;
  /* 0x0004 */ struct _RTL_STACK_DATABASE_LOCK Lock;
} RTL_STD_LIST_HEAD, *PRTL_STD_LIST_HEAD; /* size: 0x0008 */


typedef union _TPP_FLAGS_COUNT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Count : 60; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Flags : 4; /* bit position: 60 */
    }; /* bitfield */
    /* 0x0000 */ __int64 Data;
  }; /* size: 0x0008 */
} TPP_FLAGS_COUNT, *PTPP_FLAGS_COUNT; /* size: 0x0008 */

typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

typedef struct _TPP_ITE
{
  /* 0x0000 */ struct _TPP_ITE_WAITER* First;
} TPP_ITE, *PTPP_ITE; /* size: 0x0008 */

typedef struct _TPP_BARRIER
{
  /* 0x0000 */ volatile union _TPP_FLAGS_COUNT Ptr;
  /* 0x0008 */ struct _RTL_SRWLOCK WaitLock;
  /* 0x0010 */ struct _TPP_ITE WaitList;
} TPP_BARRIER, *PTPP_BARRIER; /* size: 0x0018 */

